#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004FB870
// Address: 0x4fb870 - 0x4fbc90
void sub_004FB870_0x4fb870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FB870_0x4fb870");
#endif

    switch (ctx->pc) {
        case 0x4fb870u: goto label_4fb870;
        case 0x4fb874u: goto label_4fb874;
        case 0x4fb878u: goto label_4fb878;
        case 0x4fb87cu: goto label_4fb87c;
        case 0x4fb880u: goto label_4fb880;
        case 0x4fb884u: goto label_4fb884;
        case 0x4fb888u: goto label_4fb888;
        case 0x4fb88cu: goto label_4fb88c;
        case 0x4fb890u: goto label_4fb890;
        case 0x4fb894u: goto label_4fb894;
        case 0x4fb898u: goto label_4fb898;
        case 0x4fb89cu: goto label_4fb89c;
        case 0x4fb8a0u: goto label_4fb8a0;
        case 0x4fb8a4u: goto label_4fb8a4;
        case 0x4fb8a8u: goto label_4fb8a8;
        case 0x4fb8acu: goto label_4fb8ac;
        case 0x4fb8b0u: goto label_4fb8b0;
        case 0x4fb8b4u: goto label_4fb8b4;
        case 0x4fb8b8u: goto label_4fb8b8;
        case 0x4fb8bcu: goto label_4fb8bc;
        case 0x4fb8c0u: goto label_4fb8c0;
        case 0x4fb8c4u: goto label_4fb8c4;
        case 0x4fb8c8u: goto label_4fb8c8;
        case 0x4fb8ccu: goto label_4fb8cc;
        case 0x4fb8d0u: goto label_4fb8d0;
        case 0x4fb8d4u: goto label_4fb8d4;
        case 0x4fb8d8u: goto label_4fb8d8;
        case 0x4fb8dcu: goto label_4fb8dc;
        case 0x4fb8e0u: goto label_4fb8e0;
        case 0x4fb8e4u: goto label_4fb8e4;
        case 0x4fb8e8u: goto label_4fb8e8;
        case 0x4fb8ecu: goto label_4fb8ec;
        case 0x4fb8f0u: goto label_4fb8f0;
        case 0x4fb8f4u: goto label_4fb8f4;
        case 0x4fb8f8u: goto label_4fb8f8;
        case 0x4fb8fcu: goto label_4fb8fc;
        case 0x4fb900u: goto label_4fb900;
        case 0x4fb904u: goto label_4fb904;
        case 0x4fb908u: goto label_4fb908;
        case 0x4fb90cu: goto label_4fb90c;
        case 0x4fb910u: goto label_4fb910;
        case 0x4fb914u: goto label_4fb914;
        case 0x4fb918u: goto label_4fb918;
        case 0x4fb91cu: goto label_4fb91c;
        case 0x4fb920u: goto label_4fb920;
        case 0x4fb924u: goto label_4fb924;
        case 0x4fb928u: goto label_4fb928;
        case 0x4fb92cu: goto label_4fb92c;
        case 0x4fb930u: goto label_4fb930;
        case 0x4fb934u: goto label_4fb934;
        case 0x4fb938u: goto label_4fb938;
        case 0x4fb93cu: goto label_4fb93c;
        case 0x4fb940u: goto label_4fb940;
        case 0x4fb944u: goto label_4fb944;
        case 0x4fb948u: goto label_4fb948;
        case 0x4fb94cu: goto label_4fb94c;
        case 0x4fb950u: goto label_4fb950;
        case 0x4fb954u: goto label_4fb954;
        case 0x4fb958u: goto label_4fb958;
        case 0x4fb95cu: goto label_4fb95c;
        case 0x4fb960u: goto label_4fb960;
        case 0x4fb964u: goto label_4fb964;
        case 0x4fb968u: goto label_4fb968;
        case 0x4fb96cu: goto label_4fb96c;
        case 0x4fb970u: goto label_4fb970;
        case 0x4fb974u: goto label_4fb974;
        case 0x4fb978u: goto label_4fb978;
        case 0x4fb97cu: goto label_4fb97c;
        case 0x4fb980u: goto label_4fb980;
        case 0x4fb984u: goto label_4fb984;
        case 0x4fb988u: goto label_4fb988;
        case 0x4fb98cu: goto label_4fb98c;
        case 0x4fb990u: goto label_4fb990;
        case 0x4fb994u: goto label_4fb994;
        case 0x4fb998u: goto label_4fb998;
        case 0x4fb99cu: goto label_4fb99c;
        case 0x4fb9a0u: goto label_4fb9a0;
        case 0x4fb9a4u: goto label_4fb9a4;
        case 0x4fb9a8u: goto label_4fb9a8;
        case 0x4fb9acu: goto label_4fb9ac;
        case 0x4fb9b0u: goto label_4fb9b0;
        case 0x4fb9b4u: goto label_4fb9b4;
        case 0x4fb9b8u: goto label_4fb9b8;
        case 0x4fb9bcu: goto label_4fb9bc;
        case 0x4fb9c0u: goto label_4fb9c0;
        case 0x4fb9c4u: goto label_4fb9c4;
        case 0x4fb9c8u: goto label_4fb9c8;
        case 0x4fb9ccu: goto label_4fb9cc;
        case 0x4fb9d0u: goto label_4fb9d0;
        case 0x4fb9d4u: goto label_4fb9d4;
        case 0x4fb9d8u: goto label_4fb9d8;
        case 0x4fb9dcu: goto label_4fb9dc;
        case 0x4fb9e0u: goto label_4fb9e0;
        case 0x4fb9e4u: goto label_4fb9e4;
        case 0x4fb9e8u: goto label_4fb9e8;
        case 0x4fb9ecu: goto label_4fb9ec;
        case 0x4fb9f0u: goto label_4fb9f0;
        case 0x4fb9f4u: goto label_4fb9f4;
        case 0x4fb9f8u: goto label_4fb9f8;
        case 0x4fb9fcu: goto label_4fb9fc;
        case 0x4fba00u: goto label_4fba00;
        case 0x4fba04u: goto label_4fba04;
        case 0x4fba08u: goto label_4fba08;
        case 0x4fba0cu: goto label_4fba0c;
        case 0x4fba10u: goto label_4fba10;
        case 0x4fba14u: goto label_4fba14;
        case 0x4fba18u: goto label_4fba18;
        case 0x4fba1cu: goto label_4fba1c;
        case 0x4fba20u: goto label_4fba20;
        case 0x4fba24u: goto label_4fba24;
        case 0x4fba28u: goto label_4fba28;
        case 0x4fba2cu: goto label_4fba2c;
        case 0x4fba30u: goto label_4fba30;
        case 0x4fba34u: goto label_4fba34;
        case 0x4fba38u: goto label_4fba38;
        case 0x4fba3cu: goto label_4fba3c;
        case 0x4fba40u: goto label_4fba40;
        case 0x4fba44u: goto label_4fba44;
        case 0x4fba48u: goto label_4fba48;
        case 0x4fba4cu: goto label_4fba4c;
        case 0x4fba50u: goto label_4fba50;
        case 0x4fba54u: goto label_4fba54;
        case 0x4fba58u: goto label_4fba58;
        case 0x4fba5cu: goto label_4fba5c;
        case 0x4fba60u: goto label_4fba60;
        case 0x4fba64u: goto label_4fba64;
        case 0x4fba68u: goto label_4fba68;
        case 0x4fba6cu: goto label_4fba6c;
        case 0x4fba70u: goto label_4fba70;
        case 0x4fba74u: goto label_4fba74;
        case 0x4fba78u: goto label_4fba78;
        case 0x4fba7cu: goto label_4fba7c;
        case 0x4fba80u: goto label_4fba80;
        case 0x4fba84u: goto label_4fba84;
        case 0x4fba88u: goto label_4fba88;
        case 0x4fba8cu: goto label_4fba8c;
        case 0x4fba90u: goto label_4fba90;
        case 0x4fba94u: goto label_4fba94;
        case 0x4fba98u: goto label_4fba98;
        case 0x4fba9cu: goto label_4fba9c;
        case 0x4fbaa0u: goto label_4fbaa0;
        case 0x4fbaa4u: goto label_4fbaa4;
        case 0x4fbaa8u: goto label_4fbaa8;
        case 0x4fbaacu: goto label_4fbaac;
        case 0x4fbab0u: goto label_4fbab0;
        case 0x4fbab4u: goto label_4fbab4;
        case 0x4fbab8u: goto label_4fbab8;
        case 0x4fbabcu: goto label_4fbabc;
        case 0x4fbac0u: goto label_4fbac0;
        case 0x4fbac4u: goto label_4fbac4;
        case 0x4fbac8u: goto label_4fbac8;
        case 0x4fbaccu: goto label_4fbacc;
        case 0x4fbad0u: goto label_4fbad0;
        case 0x4fbad4u: goto label_4fbad4;
        case 0x4fbad8u: goto label_4fbad8;
        case 0x4fbadcu: goto label_4fbadc;
        case 0x4fbae0u: goto label_4fbae0;
        case 0x4fbae4u: goto label_4fbae4;
        case 0x4fbae8u: goto label_4fbae8;
        case 0x4fbaecu: goto label_4fbaec;
        case 0x4fbaf0u: goto label_4fbaf0;
        case 0x4fbaf4u: goto label_4fbaf4;
        case 0x4fbaf8u: goto label_4fbaf8;
        case 0x4fbafcu: goto label_4fbafc;
        case 0x4fbb00u: goto label_4fbb00;
        case 0x4fbb04u: goto label_4fbb04;
        case 0x4fbb08u: goto label_4fbb08;
        case 0x4fbb0cu: goto label_4fbb0c;
        case 0x4fbb10u: goto label_4fbb10;
        case 0x4fbb14u: goto label_4fbb14;
        case 0x4fbb18u: goto label_4fbb18;
        case 0x4fbb1cu: goto label_4fbb1c;
        case 0x4fbb20u: goto label_4fbb20;
        case 0x4fbb24u: goto label_4fbb24;
        case 0x4fbb28u: goto label_4fbb28;
        case 0x4fbb2cu: goto label_4fbb2c;
        case 0x4fbb30u: goto label_4fbb30;
        case 0x4fbb34u: goto label_4fbb34;
        case 0x4fbb38u: goto label_4fbb38;
        case 0x4fbb3cu: goto label_4fbb3c;
        case 0x4fbb40u: goto label_4fbb40;
        case 0x4fbb44u: goto label_4fbb44;
        case 0x4fbb48u: goto label_4fbb48;
        case 0x4fbb4cu: goto label_4fbb4c;
        case 0x4fbb50u: goto label_4fbb50;
        case 0x4fbb54u: goto label_4fbb54;
        case 0x4fbb58u: goto label_4fbb58;
        case 0x4fbb5cu: goto label_4fbb5c;
        case 0x4fbb60u: goto label_4fbb60;
        case 0x4fbb64u: goto label_4fbb64;
        case 0x4fbb68u: goto label_4fbb68;
        case 0x4fbb6cu: goto label_4fbb6c;
        case 0x4fbb70u: goto label_4fbb70;
        case 0x4fbb74u: goto label_4fbb74;
        case 0x4fbb78u: goto label_4fbb78;
        case 0x4fbb7cu: goto label_4fbb7c;
        case 0x4fbb80u: goto label_4fbb80;
        case 0x4fbb84u: goto label_4fbb84;
        case 0x4fbb88u: goto label_4fbb88;
        case 0x4fbb8cu: goto label_4fbb8c;
        case 0x4fbb90u: goto label_4fbb90;
        case 0x4fbb94u: goto label_4fbb94;
        case 0x4fbb98u: goto label_4fbb98;
        case 0x4fbb9cu: goto label_4fbb9c;
        case 0x4fbba0u: goto label_4fbba0;
        case 0x4fbba4u: goto label_4fbba4;
        case 0x4fbba8u: goto label_4fbba8;
        case 0x4fbbacu: goto label_4fbbac;
        case 0x4fbbb0u: goto label_4fbbb0;
        case 0x4fbbb4u: goto label_4fbbb4;
        case 0x4fbbb8u: goto label_4fbbb8;
        case 0x4fbbbcu: goto label_4fbbbc;
        case 0x4fbbc0u: goto label_4fbbc0;
        case 0x4fbbc4u: goto label_4fbbc4;
        case 0x4fbbc8u: goto label_4fbbc8;
        case 0x4fbbccu: goto label_4fbbcc;
        case 0x4fbbd0u: goto label_4fbbd0;
        case 0x4fbbd4u: goto label_4fbbd4;
        case 0x4fbbd8u: goto label_4fbbd8;
        case 0x4fbbdcu: goto label_4fbbdc;
        case 0x4fbbe0u: goto label_4fbbe0;
        case 0x4fbbe4u: goto label_4fbbe4;
        case 0x4fbbe8u: goto label_4fbbe8;
        case 0x4fbbecu: goto label_4fbbec;
        case 0x4fbbf0u: goto label_4fbbf0;
        case 0x4fbbf4u: goto label_4fbbf4;
        case 0x4fbbf8u: goto label_4fbbf8;
        case 0x4fbbfcu: goto label_4fbbfc;
        case 0x4fbc00u: goto label_4fbc00;
        case 0x4fbc04u: goto label_4fbc04;
        case 0x4fbc08u: goto label_4fbc08;
        case 0x4fbc0cu: goto label_4fbc0c;
        case 0x4fbc10u: goto label_4fbc10;
        case 0x4fbc14u: goto label_4fbc14;
        case 0x4fbc18u: goto label_4fbc18;
        case 0x4fbc1cu: goto label_4fbc1c;
        case 0x4fbc20u: goto label_4fbc20;
        case 0x4fbc24u: goto label_4fbc24;
        case 0x4fbc28u: goto label_4fbc28;
        case 0x4fbc2cu: goto label_4fbc2c;
        case 0x4fbc30u: goto label_4fbc30;
        case 0x4fbc34u: goto label_4fbc34;
        case 0x4fbc38u: goto label_4fbc38;
        case 0x4fbc3cu: goto label_4fbc3c;
        case 0x4fbc40u: goto label_4fbc40;
        case 0x4fbc44u: goto label_4fbc44;
        case 0x4fbc48u: goto label_4fbc48;
        case 0x4fbc4cu: goto label_4fbc4c;
        case 0x4fbc50u: goto label_4fbc50;
        case 0x4fbc54u: goto label_4fbc54;
        case 0x4fbc58u: goto label_4fbc58;
        case 0x4fbc5cu: goto label_4fbc5c;
        case 0x4fbc60u: goto label_4fbc60;
        case 0x4fbc64u: goto label_4fbc64;
        case 0x4fbc68u: goto label_4fbc68;
        case 0x4fbc6cu: goto label_4fbc6c;
        case 0x4fbc70u: goto label_4fbc70;
        case 0x4fbc74u: goto label_4fbc74;
        case 0x4fbc78u: goto label_4fbc78;
        case 0x4fbc7cu: goto label_4fbc7c;
        case 0x4fbc80u: goto label_4fbc80;
        case 0x4fbc84u: goto label_4fbc84;
        case 0x4fbc88u: goto label_4fbc88;
        case 0x4fbc8cu: goto label_4fbc8c;
        default: break;
    }

    ctx->pc = 0x4fb870u;

label_4fb870:
    // 0x4fb870: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4fb870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4fb874:
    // 0x4fb874: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4fb874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4fb878:
    // 0x4fb878: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4fb878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4fb87c:
    // 0x4fb87c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4fb87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4fb880:
    // 0x4fb880: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4fb880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4fb884:
    // 0x4fb884: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fb884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4fb888:
    // 0x4fb888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fb888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fb88c:
    // 0x4fb88c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4fb88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4fb890:
    // 0x4fb890: 0x8c520e80  lw          $s2, 0xE80($v0)
    ctx->pc = 0x4fb890u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4fb894:
    // 0x4fb894: 0x8c700d78  lw          $s0, 0xD78($v1)
    ctx->pc = 0x4fb894u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3448)));
label_4fb898:
    // 0x4fb898: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x4fb898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_4fb89c:
    // 0x4fb89c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x4fb89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4fb8a0:
    // 0x4fb8a0: 0x104500bb  beq         $v0, $a1, . + 4 + (0xBB << 2)
label_4fb8a4:
    if (ctx->pc == 0x4FB8A4u) {
        ctx->pc = 0x4FB8A4u;
            // 0x4fb8a4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FB8A8u;
        goto label_4fb8a8;
    }
    ctx->pc = 0x4FB8A0u;
    {
        const bool branch_taken_0x4fb8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x4FB8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB8A0u;
            // 0x4fb8a4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb8a0) {
            ctx->pc = 0x4FBB90u;
            goto label_4fbb90;
        }
    }
    ctx->pc = 0x4FB8A8u;
label_4fb8a8:
    // 0x4fb8a8: 0x50a000c8  beql        $a1, $zero, . + 4 + (0xC8 << 2)
label_4fb8ac:
    if (ctx->pc == 0x4FB8ACu) {
        ctx->pc = 0x4FB8ACu;
            // 0x4fb8ac: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x4FB8B0u;
        goto label_4fb8b0;
    }
    ctx->pc = 0x4FB8A8u;
    {
        const bool branch_taken_0x4fb8a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb8a8) {
            ctx->pc = 0x4FB8ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB8A8u;
            // 0x4fb8ac: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FBBCCu;
            goto label_4fbbcc;
        }
    }
    ctx->pc = 0x4FB8B0u;
label_4fb8b0:
    // 0x4fb8b0: 0x8e430968  lw          $v1, 0x968($s2)
    ctx->pc = 0x4fb8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4fb8b4:
    // 0x4fb8b4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x4fb8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4fb8b8:
    // 0x4fb8b8: 0x106200c3  beq         $v1, $v0, . + 4 + (0xC3 << 2)
label_4fb8bc:
    if (ctx->pc == 0x4FB8BCu) {
        ctx->pc = 0x4FB8C0u;
        goto label_4fb8c0;
    }
    ctx->pc = 0x4FB8B8u;
    {
        const bool branch_taken_0x4fb8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4fb8b8) {
            ctx->pc = 0x4FBBC8u;
            goto label_4fbbc8;
        }
    }
    ctx->pc = 0x4FB8C0u;
label_4fb8c0:
    // 0x4fb8c0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4fb8c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4fb8c4:
    // 0x4fb8c4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x4fb8c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_4fb8c8:
    // 0x4fb8c8: 0x320f809  jalr        $t9
label_4fb8cc:
    if (ctx->pc == 0x4FB8CCu) {
        ctx->pc = 0x4FB8CCu;
            // 0x4fb8cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FB8D0u;
        goto label_4fb8d0;
    }
    ctx->pc = 0x4FB8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FB8D0u);
        ctx->pc = 0x4FB8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB8C8u;
            // 0x4fb8cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FB8D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FB8D0u; }
            if (ctx->pc != 0x4FB8D0u) { return; }
        }
        }
    }
    ctx->pc = 0x4FB8D0u;
label_4fb8d0:
    // 0x4fb8d0: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x4fb8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_4fb8d4:
    // 0x4fb8d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4fb8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fb8d8:
    // 0x4fb8d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4fb8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4fb8dc:
    // 0x4fb8dc: 0xae620070  sw          $v0, 0x70($s3)
    ctx->pc = 0x4fb8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
label_4fb8e0:
    // 0x4fb8e0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4fb8e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4fb8e4:
    // 0x4fb8e4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x4fb8e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_4fb8e8:
    // 0x4fb8e8: 0x320f809  jalr        $t9
label_4fb8ec:
    if (ctx->pc == 0x4FB8ECu) {
        ctx->pc = 0x4FB8ECu;
            // 0x4fb8ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FB8F0u;
        goto label_4fb8f0;
    }
    ctx->pc = 0x4FB8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FB8F0u);
        ctx->pc = 0x4FB8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB8E8u;
            // 0x4fb8ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FB8F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FB8F0u; }
            if (ctx->pc != 0x4FB8F0u) { return; }
        }
        }
    }
    ctx->pc = 0x4FB8F0u;
label_4fb8f0:
    // 0x4fb8f0: 0x9668010a  lhu         $t0, 0x10A($s3)
    ctx->pc = 0x4fb8f0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 266)));
label_4fb8f4:
    // 0x4fb8f4: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x4fb8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_4fb8f8:
    // 0x4fb8f8: 0x34654dd3  ori         $a1, $v1, 0x4DD3
    ctx->pc = 0x4fb8f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_4fb8fc:
    // 0x4fb8fc: 0x92690109  lbu         $t1, 0x109($s3)
    ctx->pc = 0x4fb8fcu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 265)));
label_4fb900:
    // 0x4fb900: 0x92670108  lbu         $a3, 0x108($s3)
    ctx->pc = 0x4fb900u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 264)));
label_4fb904:
    // 0x4fb904: 0x3404ea60  ori         $a0, $zero, 0xEA60
    ctx->pc = 0x4fb904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_4fb908:
    // 0x4fb908: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x4fb908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4fb90c:
    // 0x4fb90c: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x4fb90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_4fb910:
    // 0x4fb910: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x4fb910u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_4fb914:
    // 0x4fb914: 0x91940  sll         $v1, $t1, 5
    ctx->pc = 0x4fb914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_4fb918:
    // 0x4fb918: 0x85040  sll         $t2, $t0, 1
    ctx->pc = 0x4fb918u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_4fb91c:
    // 0x4fb91c: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x4fb91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_4fb920:
    // 0x4fb920: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x4fb920u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4fb924:
    // 0x4fb924: 0xe43818  mult        $a3, $a3, $a0
    ctx->pc = 0x4fb924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_4fb928:
    // 0x4fb928: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x4fb928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4fb92c:
    // 0x4fb92c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x4fb92cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_4fb930:
    // 0x4fb930: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x4fb930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_4fb934:
    // 0x4fb934: 0x1484021  addu        $t0, $t2, $t0
    ctx->pc = 0x4fb934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_4fb938:
    // 0x4fb938: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x4fb938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_4fb93c:
    // 0x4fb93c: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x4fb93cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_4fb940:
    // 0x4fb940: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x4fb940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4fb944:
    // 0x4fb944: 0x473823  subu        $a3, $v0, $a3
    ctx->pc = 0x4fb944u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4fb948:
    // 0x4fb948: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x4fb948u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_4fb94c:
    // 0x4fb94c: 0x1010  mfhi        $v0
    ctx->pc = 0x4fb94cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4fb950:
    // 0x4fb950: 0xa70019  multu       $a1, $a3
    ctx->pc = 0x4fb950u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4fb954:
    // 0x4fb954: 0xa662010a  sh          $v0, 0x10A($s3)
    ctx->pc = 0x4fb954u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 266), (uint16_t)GPR_U32(ctx, 2));
label_4fb958:
    // 0x4fb958: 0x0  nop
    ctx->pc = 0x4fb958u;
    // NOP
label_4fb95c:
    // 0x4fb95c: 0x1010  mfhi        $v0
    ctx->pc = 0x4fb95cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4fb960:
    // 0x4fb960: 0x22982  srl         $a1, $v0, 6
    ctx->pc = 0x4fb960u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_4fb964:
    // 0x4fb964: 0x650019  multu       $v1, $a1
    ctx->pc = 0x4fb964u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4fb968:
    // 0x4fb968: 0x1010  mfhi        $v0
    ctx->pc = 0x4fb968u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4fb96c:
    // 0x4fb96c: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x4fb96cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_4fb970:
    // 0x4fb970: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x4fb970u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_4fb974:
    // 0x4fb974: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x4fb974u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_4fb978:
    // 0x4fb978: 0x1010  mfhi        $v0
    ctx->pc = 0x4fb978u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4fb97c:
    // 0x4fb97c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_4fb980:
    if (ctx->pc == 0x4FB980u) {
        ctx->pc = 0x4FB980u;
            // 0x4fb980: 0xa2620109  sb          $v0, 0x109($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 265), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4FB984u;
        goto label_4fb984;
    }
    ctx->pc = 0x4FB97Cu;
    {
        const bool branch_taken_0x4fb97c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FB980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB97Cu;
            // 0x4fb980: 0xa2620109  sb          $v0, 0x109($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 265), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb97c) {
            ctx->pc = 0x4FB998u;
            goto label_4fb998;
        }
    }
    ctx->pc = 0x4FB984u;
label_4fb984:
    // 0x4fb984: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x4fb984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_4fb988:
    // 0x4fb988: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x4fb988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4fb98c:
    // 0x4fb98c: 0xa662010a  sh          $v0, 0x10A($s3)
    ctx->pc = 0x4fb98cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 266), (uint16_t)GPR_U32(ctx, 2));
label_4fb990:
    // 0x4fb990: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x4fb990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_4fb994:
    // 0x4fb994: 0xa2620109  sb          $v0, 0x109($s3)
    ctx->pc = 0x4fb994u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 265), (uint8_t)GPR_U32(ctx, 2));
label_4fb998:
    // 0x4fb998: 0xa2630108  sb          $v1, 0x108($s3)
    ctx->pc = 0x4fb998u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 264), (uint8_t)GPR_U32(ctx, 3));
label_4fb99c:
    // 0x4fb99c: 0x92620104  lbu         $v0, 0x104($s3)
    ctx->pc = 0x4fb99cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 260)));
label_4fb9a0:
    // 0x4fb9a0: 0xa2620110  sb          $v0, 0x110($s3)
    ctx->pc = 0x4fb9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 272), (uint8_t)GPR_U32(ctx, 2));
label_4fb9a4:
    // 0x4fb9a4: 0x92620105  lbu         $v0, 0x105($s3)
    ctx->pc = 0x4fb9a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 261)));
label_4fb9a8:
    // 0x4fb9a8: 0xa2620111  sb          $v0, 0x111($s3)
    ctx->pc = 0x4fb9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 273), (uint8_t)GPR_U32(ctx, 2));
label_4fb9ac:
    // 0x4fb9ac: 0x96620106  lhu         $v0, 0x106($s3)
    ctx->pc = 0x4fb9acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 262)));
label_4fb9b0:
    // 0x4fb9b0: 0xa6620112  sh          $v0, 0x112($s3)
    ctx->pc = 0x4fb9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 274), (uint16_t)GPR_U32(ctx, 2));
label_4fb9b4:
    // 0x4fb9b4: 0x8e64005c  lw          $a0, 0x5C($s3)
    ctx->pc = 0x4fb9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_4fb9b8:
    // 0x4fb9b8: 0x38830005  xori        $v1, $a0, 0x5
    ctx->pc = 0x4fb9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)5);
label_4fb9bc:
    // 0x4fb9bc: 0x38820006  xori        $v0, $a0, 0x6
    ctx->pc = 0x4fb9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
label_4fb9c0:
    // 0x4fb9c0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4fb9c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fb9c4:
    // 0x4fb9c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4fb9c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fb9c8:
    // 0x4fb9c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4fb9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4fb9cc:
    // 0x4fb9cc: 0x38820009  xori        $v0, $a0, 0x9
    ctx->pc = 0x4fb9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)9);
label_4fb9d0:
    // 0x4fb9d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4fb9d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fb9d4:
    // 0x4fb9d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4fb9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4fb9d8:
    // 0x4fb9d8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_4fb9dc:
    if (ctx->pc == 0x4FB9DCu) {
        ctx->pc = 0x4FB9DCu;
            // 0x4fb9dc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x4FB9E0u;
        goto label_4fb9e0;
    }
    ctx->pc = 0x4FB9D8u;
    {
        const bool branch_taken_0x4fb9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb9d8) {
            ctx->pc = 0x4FB9DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FB9D8u;
            // 0x4fb9dc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FBA10u;
            goto label_4fba10;
        }
    }
    ctx->pc = 0x4FB9E0u;
label_4fb9e0:
    // 0x4fb9e0: 0x8e450968  lw          $a1, 0x968($s2)
    ctx->pc = 0x4fb9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4fb9e4:
    // 0x4fb9e4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4fb9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4fb9e8:
    // 0x4fb9e8: 0x9262005a  lbu         $v0, 0x5A($s3)
    ctx->pc = 0x4fb9e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 90)));
label_4fb9ec:
    // 0x4fb9ec: 0x2463d69c  addiu       $v1, $v1, -0x2964
    ctx->pc = 0x4fb9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956700));
label_4fb9f0:
    // 0x4fb9f0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x4fb9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4fb9f4:
    // 0x4fb9f4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x4fb9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4fb9f8:
    // 0x4fb9f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4fb9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4fb9fc:
    // 0x4fb9fc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x4fb9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4fba00:
    // 0x4fba00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4fba00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4fba04:
    // 0x4fba04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fba04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fba08:
    // 0x4fba08: 0x1000001d  b           . + 4 + (0x1D << 2)
label_4fba0c:
    if (ctx->pc == 0x4FBA0Cu) {
        ctx->pc = 0x4FBA0Cu;
            // 0x4fba0c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4FBA10u;
        goto label_4fba10;
    }
    ctx->pc = 0x4FBA08u;
    {
        const bool branch_taken_0x4fba08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBA08u;
            // 0x4fba0c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fba08) {
            ctx->pc = 0x4FBA80u;
            goto label_4fba80;
        }
    }
    ctx->pc = 0x4FBA10u;
label_4fba10:
    // 0x4fba10: 0x5482001b  bnel        $a0, $v0, . + 4 + (0x1B << 2)
label_4fba14:
    if (ctx->pc == 0x4FBA14u) {
        ctx->pc = 0x4FBA14u;
            // 0x4fba14: 0x8e710094  lw          $s1, 0x94($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
        ctx->pc = 0x4FBA18u;
        goto label_4fba18;
    }
    ctx->pc = 0x4FBA10u;
    {
        const bool branch_taken_0x4fba10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fba10) {
            ctx->pc = 0x4FBA14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBA10u;
            // 0x4fba14: 0x8e710094  lw          $s1, 0x94($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FBA80u;
            goto label_4fba80;
        }
    }
    ctx->pc = 0x4FBA18u;
label_4fba18:
    // 0x4fba18: 0x92430ce4  lbu         $v1, 0xCE4($s2)
    ctx->pc = 0x4fba18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3300)));
label_4fba1c:
    // 0x4fba1c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x4fba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4fba20:
    // 0x4fba20: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_4fba24:
    if (ctx->pc == 0x4FBA24u) {
        ctx->pc = 0x4FBA24u;
            // 0x4fba24: 0x8e450968  lw          $a1, 0x968($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
        ctx->pc = 0x4FBA28u;
        goto label_4fba28;
    }
    ctx->pc = 0x4FBA20u;
    {
        const bool branch_taken_0x4fba20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4fba20) {
            ctx->pc = 0x4FBA24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBA20u;
            // 0x4fba24: 0x8e450968  lw          $a1, 0x968($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FBA58u;
            goto label_4fba58;
        }
    }
    ctx->pc = 0x4FBA28u;
label_4fba28:
    // 0x4fba28: 0x8e450968  lw          $a1, 0x968($s2)
    ctx->pc = 0x4fba28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4fba2c:
    // 0x4fba2c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4fba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4fba30:
    // 0x4fba30: 0x9262005a  lbu         $v0, 0x5A($s3)
    ctx->pc = 0x4fba30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 90)));
label_4fba34:
    // 0x4fba34: 0x2463de1c  addiu       $v1, $v1, -0x21E4
    ctx->pc = 0x4fba34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958620));
label_4fba38:
    // 0x4fba38: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x4fba38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4fba3c:
    // 0x4fba3c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x4fba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4fba40:
    // 0x4fba40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4fba40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4fba44:
    // 0x4fba44: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x4fba44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4fba48:
    // 0x4fba48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4fba48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4fba4c:
    // 0x4fba4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fba50:
    // 0x4fba50: 0x1000000b  b           . + 4 + (0xB << 2)
label_4fba54:
    if (ctx->pc == 0x4FBA54u) {
        ctx->pc = 0x4FBA54u;
            // 0x4fba54: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4FBA58u;
        goto label_4fba58;
    }
    ctx->pc = 0x4FBA50u;
    {
        const bool branch_taken_0x4fba50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBA50u;
            // 0x4fba54: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fba50) {
            ctx->pc = 0x4FBA80u;
            goto label_4fba80;
        }
    }
    ctx->pc = 0x4FBA58u;
label_4fba58:
    // 0x4fba58: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4fba58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4fba5c:
    // 0x4fba5c: 0x9262005a  lbu         $v0, 0x5A($s3)
    ctx->pc = 0x4fba5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 90)));
label_4fba60:
    // 0x4fba60: 0x2463e1dc  addiu       $v1, $v1, -0x1E24
    ctx->pc = 0x4fba60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959580));
label_4fba64:
    // 0x4fba64: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x4fba64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4fba68:
    // 0x4fba68: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x4fba68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4fba6c:
    // 0x4fba6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4fba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4fba70:
    // 0x4fba70: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x4fba70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4fba74:
    // 0x4fba74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4fba74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4fba78:
    // 0x4fba78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fba7c:
    // 0x4fba7c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x4fba7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4fba80:
    // 0x4fba80: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x4fba80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_4fba84:
    // 0x4fba84: 0x28810005  slti        $at, $a0, 0x5
    ctx->pc = 0x4fba84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_4fba88:
    // 0x4fba88: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_4fba8c:
    if (ctx->pc == 0x4FBA8Cu) {
        ctx->pc = 0x4FBA8Cu;
            // 0x4fba8c: 0x8e430968  lw          $v1, 0x968($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
        ctx->pc = 0x4FBA90u;
        goto label_4fba90;
    }
    ctx->pc = 0x4FBA88u;
    {
        const bool branch_taken_0x4fba88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fba88) {
            ctx->pc = 0x4FBA8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBA88u;
            // 0x4fba8c: 0x8e430968  lw          $v1, 0x968($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FBA98u;
            goto label_4fba98;
        }
    }
    ctx->pc = 0x4FBA90u;
label_4fba90:
    // 0x4fba90: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4fba90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4fba94:
    // 0x4fba94: 0x8e430968  lw          $v1, 0x968($s2)
    ctx->pc = 0x4fba94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4fba98:
    // 0x4fba98: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4fba98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4fba9c:
    // 0x4fba9c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_4fbaa0:
    if (ctx->pc == 0x4FBAA0u) {
        ctx->pc = 0x4FBAA0u;
            // 0x4fbaa0: 0x8e62006c  lw          $v0, 0x6C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
        ctx->pc = 0x4FBAA4u;
        goto label_4fbaa4;
    }
    ctx->pc = 0x4FBA9Cu;
    {
        const bool branch_taken_0x4fba9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fba9c) {
            ctx->pc = 0x4FBAA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBA9Cu;
            // 0x4fbaa0: 0x8e62006c  lw          $v0, 0x6C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FBAC0u;
            goto label_4fbac0;
        }
    }
    ctx->pc = 0x4FBAA4u;
label_4fbaa4:
    // 0x4fbaa4: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x4fbaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_4fbaa8:
    // 0x4fbaa8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4fbaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4fbaac:
    // 0x4fbaac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4fbaacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4fbab0:
    // 0x4fbab0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4fbab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4fbab4:
    // 0x4fbab4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4fbab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_4fbab8:
    // 0x4fbab8: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x4fbab8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4fbabc:
    // 0x4fbabc: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x4fbabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_4fbac0:
    // 0x4fbac0: 0xc049820  jal         func_126080
label_4fbac4:
    if (ctx->pc == 0x4FBAC4u) {
        ctx->pc = 0x4FBAC4u;
            // 0x4fbac4: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x4FBAC8u;
        goto label_4fbac8;
    }
    ctx->pc = 0x4FBAC0u;
    SET_GPR_U32(ctx, 31, 0x4FBAC8u);
    ctx->pc = 0x4FBAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBAC0u;
            // 0x4fbac4: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126080u;
    if (runtime->hasFunction(0x126080u)) {
        auto targetFn = runtime->lookupFunction(0x126080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FBAC8u; }
        if (ctx->pc != 0x4FBAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126080_0x126080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FBAC8u; }
        if (ctx->pc != 0x4FBAC8u) { return; }
    }
    ctx->pc = 0x4FBAC8u;
label_4fbac8:
    // 0x4fbac8: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x4fbac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_4fbacc:
    // 0x4fbacc: 0x8e66006c  lw          $a2, 0x6C($s3)
    ctx->pc = 0x4fbaccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_4fbad0:
    // 0x4fbad0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x4fbad0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_4fbad4:
    // 0x4fbad4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x4fbad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4fbad8:
    // 0x4fbad8: 0xd13823  subu        $a3, $a2, $s1
    ctx->pc = 0x4fbad8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_4fbadc:
    // 0x4fbadc: 0xae670078  sw          $a3, 0x78($s3)
    ctx->pc = 0x4fbadcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 7));
label_4fbae0:
    // 0x4fbae0: 0x8e66007c  lw          $a2, 0x7C($s3)
    ctx->pc = 0x4fbae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4fbae4:
    // 0x4fbae4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x4fbae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4fbae8:
    // 0x4fbae8: 0xae66007c  sw          $a2, 0x7C($s3)
    ctx->pc = 0x4fbae8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 6));
label_4fbaec:
    // 0x4fbaec: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x4fbaecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_4fbaf0:
    // 0x4fbaf0: 0x34654dd3  ori         $a1, $v1, 0x4DD3
    ctx->pc = 0x4fbaf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_4fbaf4:
    // 0x4fbaf4: 0x3010  mfhi        $a2
    ctx->pc = 0x4fbaf4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_4fbaf8:
    // 0x4fbaf8: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x4fbaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_4fbafc:
    // 0x4fbafc: 0xa20019  multu       $a1, $v0
    ctx->pc = 0x4fbafcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4fbb00:
    // 0x4fbb00: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x4fbb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_4fbb04:
    // 0x4fbb04: 0xa6660116  sh          $a2, 0x116($s3)
    ctx->pc = 0x4fbb04u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 278), (uint16_t)GPR_U32(ctx, 6));
label_4fbb08:
    // 0x4fbb08: 0x1010  mfhi        $v0
    ctx->pc = 0x4fbb08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4fbb0c:
    // 0x4fbb0c: 0x22982  srl         $a1, $v0, 6
    ctx->pc = 0x4fbb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_4fbb10:
    // 0x4fbb10: 0x650019  multu       $v1, $a1
    ctx->pc = 0x4fbb10u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4fbb14:
    // 0x4fbb14: 0x1010  mfhi        $v0
    ctx->pc = 0x4fbb14u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4fbb18:
    // 0x4fbb18: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x4fbb18u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_4fbb1c:
    // 0x4fbb1c: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x4fbb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_4fbb20:
    // 0x4fbb20: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x4fbb20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_4fbb24:
    // 0x4fbb24: 0x1010  mfhi        $v0
    ctx->pc = 0x4fbb24u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4fbb28:
    // 0x4fbb28: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_4fbb2c:
    if (ctx->pc == 0x4FBB2Cu) {
        ctx->pc = 0x4FBB2Cu;
            // 0x4fbb2c: 0xa2620115  sb          $v0, 0x115($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 277), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4FBB30u;
        goto label_4fbb30;
    }
    ctx->pc = 0x4FBB28u;
    {
        const bool branch_taken_0x4fbb28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FBB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBB28u;
            // 0x4fbb2c: 0xa2620115  sb          $v0, 0x115($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 277), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbb28) {
            ctx->pc = 0x4FBB44u;
            goto label_4fbb44;
        }
    }
    ctx->pc = 0x4FBB30u;
label_4fbb30:
    // 0x4fbb30: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x4fbb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_4fbb34:
    // 0x4fbb34: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x4fbb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4fbb38:
    // 0x4fbb38: 0xa6620116  sh          $v0, 0x116($s3)
    ctx->pc = 0x4fbb38u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 278), (uint16_t)GPR_U32(ctx, 2));
label_4fbb3c:
    // 0x4fbb3c: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x4fbb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_4fbb40:
    // 0x4fbb40: 0xa2620115  sb          $v0, 0x115($s3)
    ctx->pc = 0x4fbb40u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 277), (uint8_t)GPR_U32(ctx, 2));
label_4fbb44:
    // 0x4fbb44: 0xa2630114  sb          $v1, 0x114($s3)
    ctx->pc = 0x4fbb44u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 276), (uint8_t)GPR_U32(ctx, 3));
label_4fbb48:
    // 0x4fbb48: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x4fbb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_4fbb4c:
    // 0x4fbb4c: 0xc13ef24  jal         func_4FBC90
label_4fbb50:
    if (ctx->pc == 0x4FBB50u) {
        ctx->pc = 0x4FBB50u;
            // 0x4fbb50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FBB54u;
        goto label_4fbb54;
    }
    ctx->pc = 0x4FBB4Cu;
    SET_GPR_U32(ctx, 31, 0x4FBB54u);
    ctx->pc = 0x4FBB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBB4Cu;
            // 0x4fbb50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FBC90u;
    if (runtime->hasFunction(0x4FBC90u)) {
        auto targetFn = runtime->lookupFunction(0x4FBC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FBB54u; }
        if (ctx->pc != 0x4FBB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FBC90_0x4fbc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FBB54u; }
        if (ctx->pc != 0x4FBB54u) { return; }
    }
    ctx->pc = 0x4FBB54u;
label_4fbb54:
    // 0x4fbb54: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x4fbb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_4fbb58:
    // 0x4fbb58: 0xae6200f4  sw          $v0, 0xF4($s3)
    ctx->pc = 0x4fbb58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 244), GPR_U32(ctx, 2));
label_4fbb5c:
    // 0x4fbb5c: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x4fbb5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_4fbb60:
    // 0x4fbb60: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4fbb64:
    if (ctx->pc == 0x4FBB64u) {
        ctx->pc = 0x4FBB64u;
            // 0x4fbb64: 0xc66100f4  lwc1        $f1, 0xF4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4FBB68u;
        goto label_4fbb68;
    }
    ctx->pc = 0x4FBB60u;
    {
        const bool branch_taken_0x4fbb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fbb60) {
            ctx->pc = 0x4FBB64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBB60u;
            // 0x4fbb64: 0xc66100f4  lwc1        $f1, 0xF4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FBB74u;
            goto label_4fbb74;
        }
    }
    ctx->pc = 0x4FBB68u;
label_4fbb68:
    // 0x4fbb68: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4fbb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4fbb6c:
    // 0x4fbb6c: 0xae6200f4  sw          $v0, 0xF4($s3)
    ctx->pc = 0x4fbb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 244), GPR_U32(ctx, 2));
label_4fbb70:
    // 0x4fbb70: 0xc66100f4  lwc1        $f1, 0xF4($s3)
    ctx->pc = 0x4fbb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fbb74:
    // 0x4fbb74: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x4fbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
label_4fbb78:
    // 0x4fbb78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fbb78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fbb7c:
    // 0x4fbb7c: 0x0  nop
    ctx->pc = 0x4fbb7cu;
    // NOP
label_4fbb80:
    // 0x4fbb80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4fbb80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4fbb84:
    // 0x4fbb84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4fbb84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4fbb88:
    // 0x4fbb88: 0x1000000f  b           . + 4 + (0xF << 2)
label_4fbb8c:
    if (ctx->pc == 0x4FBB8Cu) {
        ctx->pc = 0x4FBB8Cu;
            // 0x4fbb8c: 0xe66000f8  swc1        $f0, 0xF8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 248), bits); }
        ctx->pc = 0x4FBB90u;
        goto label_4fbb90;
    }
    ctx->pc = 0x4FBB88u;
    {
        const bool branch_taken_0x4fbb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBB88u;
            // 0x4fbb8c: 0xe66000f8  swc1        $f0, 0xF8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbb88) {
            ctx->pc = 0x4FBBC8u;
            goto label_4fbbc8;
        }
    }
    ctx->pc = 0x4FBB90u;
label_4fbb90:
    // 0x4fbb90: 0x8e430968  lw          $v1, 0x968($s2)
    ctx->pc = 0x4fbb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4fbb94:
    // 0x4fbb94: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x4fbb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4fbb98:
    // 0x4fbb98: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_4fbb9c:
    if (ctx->pc == 0x4FBB9Cu) {
        ctx->pc = 0x4FBBA0u;
        goto label_4fbba0;
    }
    ctx->pc = 0x4FBB98u;
    {
        const bool branch_taken_0x4fbb98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fbb98) {
            ctx->pc = 0x4FBBC8u;
            goto label_4fbbc8;
        }
    }
    ctx->pc = 0x4FBBA0u;
label_4fbba0:
    // 0x4fbba0: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x4fbba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_4fbba4:
    // 0x4fbba4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x4fbba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4fbba8:
    // 0x4fbba8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_4fbbac:
    if (ctx->pc == 0x4FBBACu) {
        ctx->pc = 0x4FBBACu;
            // 0x4fbbac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FBBB0u;
        goto label_4fbbb0;
    }
    ctx->pc = 0x4FBBA8u;
    {
        const bool branch_taken_0x4fbba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fbba8) {
            ctx->pc = 0x4FBBACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBBA8u;
            // 0x4fbbac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FBBC0u;
            goto label_4fbbc0;
        }
    }
    ctx->pc = 0x4FBBB0u;
label_4fbbb0:
    // 0x4fbbb0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4fbbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4fbbb4:
    // 0x4fbbb4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_4fbbb8:
    if (ctx->pc == 0x4FBBB8u) {
        ctx->pc = 0x4FBBBCu;
        goto label_4fbbbc;
    }
    ctx->pc = 0x4FBBB4u;
    {
        const bool branch_taken_0x4fbbb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4fbbb4) {
            ctx->pc = 0x4FBBC8u;
            goto label_4fbbc8;
        }
    }
    ctx->pc = 0x4FBBBCu;
label_4fbbbc:
    // 0x4fbbbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4fbbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4fbbc0:
    // 0x4fbbc0: 0xc13ef24  jal         func_4FBC90
label_4fbbc4:
    if (ctx->pc == 0x4FBBC4u) {
        ctx->pc = 0x4FBBC8u;
        goto label_4fbbc8;
    }
    ctx->pc = 0x4FBBC0u;
    SET_GPR_U32(ctx, 31, 0x4FBBC8u);
    ctx->pc = 0x4FBC90u;
    if (runtime->hasFunction(0x4FBC90u)) {
        auto targetFn = runtime->lookupFunction(0x4FBC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FBBC8u; }
        if (ctx->pc != 0x4FBBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FBC90_0x4fbc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FBBC8u; }
        if (ctx->pc != 0x4FBBC8u) { return; }
    }
    ctx->pc = 0x4FBBC8u;
label_4fbbc8:
    // 0x4fbbc8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4fbbc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4fbbcc:
    // 0x4fbbcc: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x4fbbccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_4fbbd0:
    // 0x4fbbd0: 0x320f809  jalr        $t9
label_4fbbd4:
    if (ctx->pc == 0x4FBBD4u) {
        ctx->pc = 0x4FBBD4u;
            // 0x4fbbd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FBBD8u;
        goto label_4fbbd8;
    }
    ctx->pc = 0x4FBBD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FBBD8u);
        ctx->pc = 0x4FBBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBBD0u;
            // 0x4fbbd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FBBD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FBBD8u; }
            if (ctx->pc != 0x4FBBD8u) { return; }
        }
        }
    }
    ctx->pc = 0x4FBBD8u;
label_4fbbd8:
    // 0x4fbbd8: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x4fbbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_4fbbdc:
    // 0x4fbbdc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4fbbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fbbe0:
    // 0x4fbbe0: 0xae62006c  sw          $v0, 0x6C($s3)
    ctx->pc = 0x4fbbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 2));
label_4fbbe4:
    // 0x4fbbe4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4fbbe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4fbbe8:
    // 0x4fbbe8: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x4fbbe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_4fbbec:
    // 0x4fbbec: 0x320f809  jalr        $t9
label_4fbbf0:
    if (ctx->pc == 0x4FBBF0u) {
        ctx->pc = 0x4FBBF0u;
            // 0x4fbbf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FBBF4u;
        goto label_4fbbf4;
    }
    ctx->pc = 0x4FBBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FBBF4u);
        ctx->pc = 0x4FBBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBBECu;
            // 0x4fbbf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FBBF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FBBF4u; }
            if (ctx->pc != 0x4FBBF4u) { return; }
        }
        }
    }
    ctx->pc = 0x4FBBF4u;
label_4fbbf4:
    // 0x4fbbf4: 0x8e67006c  lw          $a3, 0x6C($s3)
    ctx->pc = 0x4fbbf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_4fbbf8:
    // 0x4fbbf8: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x4fbbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_4fbbfc:
    // 0x4fbbfc: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x4fbbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_4fbc00:
    // 0x4fbc00: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x4fbc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4fbc04:
    // 0x4fbc04: 0x34654dd3  ori         $a1, $v1, 0x4DD3
    ctx->pc = 0x4fbc04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_4fbc08:
    // 0x4fbc08: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x4fbc08u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_4fbc0c:
    // 0x4fbc0c: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x4fbc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_4fbc10:
    // 0x4fbc10: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x4fbc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_4fbc14:
    // 0x4fbc14: 0x3010  mfhi        $a2
    ctx->pc = 0x4fbc14u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_4fbc18:
    // 0x4fbc18: 0xa70019  multu       $a1, $a3
    ctx->pc = 0x4fbc18u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4fbc1c:
    // 0x4fbc1c: 0xa6660106  sh          $a2, 0x106($s3)
    ctx->pc = 0x4fbc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 262), (uint16_t)GPR_U32(ctx, 6));
label_4fbc20:
    // 0x4fbc20: 0x0  nop
    ctx->pc = 0x4fbc20u;
    // NOP
label_4fbc24:
    // 0x4fbc24: 0x2810  mfhi        $a1
    ctx->pc = 0x4fbc24u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_4fbc28:
    // 0x4fbc28: 0x52982  srl         $a1, $a1, 6
    ctx->pc = 0x4fbc28u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
label_4fbc2c:
    // 0x4fbc2c: 0x650019  multu       $v1, $a1
    ctx->pc = 0x4fbc2cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4fbc30:
    // 0x4fbc30: 0x1810  mfhi        $v1
    ctx->pc = 0x4fbc30u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_4fbc34:
    // 0x4fbc34: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x4fbc34u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_4fbc38:
    // 0x4fbc38: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x4fbc38u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_4fbc3c:
    // 0x4fbc3c: 0x0  nop
    ctx->pc = 0x4fbc3cu;
    // NOP
label_4fbc40:
    // 0x4fbc40: 0x1810  mfhi        $v1
    ctx->pc = 0x4fbc40u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_4fbc44:
    // 0x4fbc44: 0x28810100  slti        $at, $a0, 0x100
    ctx->pc = 0x4fbc44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
label_4fbc48:
    // 0x4fbc48: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_4fbc4c:
    if (ctx->pc == 0x4FBC4Cu) {
        ctx->pc = 0x4FBC4Cu;
            // 0x4fbc4c: 0xa2630105  sb          $v1, 0x105($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 261), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4FBC50u;
        goto label_4fbc50;
    }
    ctx->pc = 0x4FBC48u;
    {
        const bool branch_taken_0x4fbc48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FBC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBC48u;
            // 0x4fbc4c: 0xa2630105  sb          $v1, 0x105($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 261), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbc48) {
            ctx->pc = 0x4FBC64u;
            goto label_4fbc64;
        }
    }
    ctx->pc = 0x4FBC50u;
label_4fbc50:
    // 0x4fbc50: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x4fbc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_4fbc54:
    // 0x4fbc54: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x4fbc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4fbc58:
    // 0x4fbc58: 0xa6630106  sh          $v1, 0x106($s3)
    ctx->pc = 0x4fbc58u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 262), (uint16_t)GPR_U32(ctx, 3));
label_4fbc5c:
    // 0x4fbc5c: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x4fbc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_4fbc60:
    // 0x4fbc60: 0xa2630105  sb          $v1, 0x105($s3)
    ctx->pc = 0x4fbc60u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 261), (uint8_t)GPR_U32(ctx, 3));
label_4fbc64:
    // 0x4fbc64: 0xa2640104  sb          $a0, 0x104($s3)
    ctx->pc = 0x4fbc64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 260), (uint8_t)GPR_U32(ctx, 4));
label_4fbc68:
    // 0x4fbc68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4fbc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4fbc6c:
    // 0x4fbc6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4fbc6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4fbc70:
    // 0x4fbc70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4fbc70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4fbc74:
    // 0x4fbc74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fbc74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fbc78:
    // 0x4fbc78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fbc78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fbc7c:
    // 0x4fbc7c: 0x3e00008  jr          $ra
label_4fbc80:
    if (ctx->pc == 0x4FBC80u) {
        ctx->pc = 0x4FBC80u;
            // 0x4fbc80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4FBC84u;
        goto label_4fbc84;
    }
    ctx->pc = 0x4FBC7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FBC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FBC7Cu;
            // 0x4fbc80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FBC84u;
label_4fbc84:
    // 0x4fbc84: 0x0  nop
    ctx->pc = 0x4fbc84u;
    // NOP
label_4fbc88:
    // 0x4fbc88: 0x0  nop
    ctx->pc = 0x4fbc88u;
    // NOP
label_4fbc8c:
    // 0x4fbc8c: 0x0  nop
    ctx->pc = 0x4fbc8cu;
    // NOP
}
