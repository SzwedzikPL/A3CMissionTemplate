class RscTitles {
	class Default {
		idd = -1;
		fadein = 0;
		fadeout = 0;
		duration = 0;
	};
    class MissionIntroLogo {
        idd = -1;
		fadein = 0.001;
		fadeout = 0.001;
		duration = 99999;
        class controls {
            class RscPicture_1200: RscPicture {
            	idc = 1200;
            	text = "data\intro_logo.paa";
            	x = 0.37625 * safezoneW + safezoneX;
            	y = 0.269 * safezoneH + safezoneY;
            	w = 0.237187 * safezoneW;
            	h = 0.44 * safezoneH;
            };
        };
    };
};
