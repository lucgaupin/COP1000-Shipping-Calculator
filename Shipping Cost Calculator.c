#include <stdio.h>
#include <stdlib.h>

/*********************************************************************
*** Created By: Luc E. Gaupin									   ***
*** Date......: 18th September, 2018							   ***
*** Purpose...: Create A Program For The Given Assignment		   ***
*********************************************************************/

//Beginning of Main
main()
{
	// Declare Variables Here:
	float shippingMiles;
	float shippingCost;
	float packageWeight;
	float overallCost;
	float mileageCost; 
	float remainMiles; 
	float overage;
	int count = 0; 
	
	// User Inputs Here:
	printf("**NOTE** ALL WEIGHTS ARE IN POUNDS **NOTE**\n\n");
	printf("Please Enter The Number of Miles to Ship A Package: ");
	scanf("%f", &shippingMiles);
	printf("Please Enter The Weight of The Package: ");
	scanf("%f", &packageWeight);
	

	// Weight Based Costs
	if(packageWeight <= 10)
	{
		shippingCost = 10;
	}
	else if(packageWeight > 10)
	{
		overage = packageWeight - 10;
		shippingCost = overage * 1.55;
	}

	// Mileage Based Costs
	if (shippingMiles <= 250)
    {
        mileageCost = 6.66;
    }
    else if (shippingMiles > 250)
    {
        remainMiles = shippingMiles - 250;
        count++;
        if (remainMiles > 0)
        {
            while (remainMiles >= 0) 
			{
                remainMiles = remainMiles - 250;
                count++;
            }
        }

        mileageCost = (float) (count * 6.66);
    }
    
    overallCost = mileageCost + shippingCost;

	//printf("**********************************************************************");
	//Output What The User Inputted Here:
	printf("\nPackage Weight Is.................: %0.1f pounds\n", packageWeight);
	printf("Distance to Ship Is...............: %0.0f miles\n", shippingMiles);
	printf("The Cost to Ship Based On Weight..: $%0.2f\n", shippingCost);
	printf("The Cost to Ship Based On Distance: $%0.2f\n", mileageCost);
	printf("The TOTAL Cost to Ship Is.........: $%0.2f\n", overallCost);
	
} //End of Main
