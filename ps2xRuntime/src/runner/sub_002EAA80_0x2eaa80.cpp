#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EAA80
// Address: 0x2eaa80 - 0x2eba60
void sub_002EAA80_0x2eaa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EAA80_0x2eaa80");
#endif

    switch (ctx->pc) {
        case 0x2eab8cu: goto label_2eab8c;
        case 0x2eabb0u: goto label_2eabb0;
        case 0x2eabd4u: goto label_2eabd4;
        case 0x2eabf8u: goto label_2eabf8;
        case 0x2eac1cu: goto label_2eac1c;
        case 0x2eac40u: goto label_2eac40;
        case 0x2eac64u: goto label_2eac64;
        case 0x2eac90u: goto label_2eac90;
        case 0x2eacb4u: goto label_2eacb4;
        case 0x2ead04u: goto label_2ead04;
        case 0x2ead28u: goto label_2ead28;
        case 0x2ead4cu: goto label_2ead4c;
        case 0x2ead70u: goto label_2ead70;
        case 0x2ead9cu: goto label_2ead9c;
        case 0x2eadc0u: goto label_2eadc0;
        case 0x2eade4u: goto label_2eade4;
        case 0x2eae08u: goto label_2eae08;
        case 0x2eae34u: goto label_2eae34;
        case 0x2eae58u: goto label_2eae58;
        case 0x2eae7cu: goto label_2eae7c;
        case 0x2eaea0u: goto label_2eaea0;
        case 0x2eaee0u: goto label_2eaee0;
        case 0x2eaf04u: goto label_2eaf04;
        case 0x2eaf28u: goto label_2eaf28;
        case 0x2eaf4cu: goto label_2eaf4c;
        case 0x2eaf7cu: goto label_2eaf7c;
        case 0x2eafa0u: goto label_2eafa0;
        case 0x2eafc4u: goto label_2eafc4;
        case 0x2eafe8u: goto label_2eafe8;
        case 0x2eb02cu: goto label_2eb02c;
        case 0x2eb058u: goto label_2eb058;
        case 0x2eb0a4u: goto label_2eb0a4;
        case 0x2eb0c8u: goto label_2eb0c8;
        case 0x2eb0ecu: goto label_2eb0ec;
        case 0x2eb110u: goto label_2eb110;
        case 0x2eb144u: goto label_2eb144;
        case 0x2eb168u: goto label_2eb168;
        case 0x2eb18cu: goto label_2eb18c;
        case 0x2eb1b0u: goto label_2eb1b0;
        case 0x2eb1fcu: goto label_2eb1fc;
        case 0x2eb220u: goto label_2eb220;
        case 0x2eb244u: goto label_2eb244;
        case 0x2eb268u: goto label_2eb268;
        case 0x2eb29cu: goto label_2eb29c;
        case 0x2eb2c0u: goto label_2eb2c0;
        case 0x2eb2e4u: goto label_2eb2e4;
        case 0x2eb308u: goto label_2eb308;
        case 0x2eb354u: goto label_2eb354;
        case 0x2eb378u: goto label_2eb378;
        case 0x2eb39cu: goto label_2eb39c;
        case 0x2eb3c0u: goto label_2eb3c0;
        case 0x2eb3ecu: goto label_2eb3ec;
        case 0x2eb440u: goto label_2eb440;
        case 0x2eb464u: goto label_2eb464;
        case 0x2eb488u: goto label_2eb488;
        case 0x2eb4acu: goto label_2eb4ac;
        case 0x2eb4dcu: goto label_2eb4dc;
        case 0x2eb500u: goto label_2eb500;
        case 0x2eb524u: goto label_2eb524;
        case 0x2eb548u: goto label_2eb548;
        case 0x2eb578u: goto label_2eb578;
        case 0x2eb59cu: goto label_2eb59c;
        case 0x2eb5c0u: goto label_2eb5c0;
        case 0x2eb5e4u: goto label_2eb5e4;
        case 0x2eb638u: goto label_2eb638;
        case 0x2eb65cu: goto label_2eb65c;
        case 0x2eb680u: goto label_2eb680;
        case 0x2eb6a4u: goto label_2eb6a4;
        case 0x2eb6d4u: goto label_2eb6d4;
        case 0x2eb6f8u: goto label_2eb6f8;
        case 0x2eb71cu: goto label_2eb71c;
        case 0x2eb740u: goto label_2eb740;
        case 0x2eb770u: goto label_2eb770;
        case 0x2eb794u: goto label_2eb794;
        case 0x2eb7e4u: goto label_2eb7e4;
        case 0x2eb80cu: goto label_2eb80c;
        case 0x2eb834u: goto label_2eb834;
        case 0x2eb85cu: goto label_2eb85c;
        case 0x2eb888u: goto label_2eb888;
        case 0x2eb8d8u: goto label_2eb8d8;
        case 0x2eb8fcu: goto label_2eb8fc;
        case 0x2eb920u: goto label_2eb920;
        case 0x2eb944u: goto label_2eb944;
        case 0x2eb970u: goto label_2eb970;
        case 0x2eb99cu: goto label_2eb99c;
        case 0x2eb9c0u: goto label_2eb9c0;
        case 0x2eb9e4u: goto label_2eb9e4;
        case 0x2eba08u: goto label_2eba08;
        case 0x2eba28u: goto label_2eba28;
        case 0x2eba34u: goto label_2eba34;
        default: break;
    }

    ctx->pc = 0x2eaa80u;

    // 0x2eaa80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2eaa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2eaa84: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2eaa84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2eaa88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2eaa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2eaa8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2eaa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2eaa90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2eaa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2eaa94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2eaa94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2eaa98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2eaa98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa9c: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x2eaa9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x2eaaa0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2eaaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2eaaa4: 0xac8014b0  sw          $zero, 0x14B0($a0)
    ctx->pc = 0x2eaaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5296), GPR_U32(ctx, 0));
    // 0x2eaaa8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2eaaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2eaaac: 0x8cc30788  lw          $v1, 0x788($a2)
    ctx->pc = 0x2eaaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1928)));
    // 0x2eaab0: 0x8cc60968  lw          $a2, 0x968($a2)
    ctx->pc = 0x2eaab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
    // 0x2eaab4: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x2eaab4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2eaab8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2eaab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2eaabc: 0x10c40374  beq         $a2, $a0, . + 4 + (0x374 << 2)
    ctx->pc = 0x2EAABCu;
    {
        const bool branch_taken_0x2eaabc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x2EAAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAABCu;
            // 0x2eaac0: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaabc) {
            ctx->pc = 0x2EB890u;
            goto label_2eb890;
        }
    }
    ctx->pc = 0x2EAAC4u;
    // 0x2eaac4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2eaac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2eaac8: 0x50c30334  beql        $a2, $v1, . + 4 + (0x334 << 2)
    ctx->pc = 0x2EAAC8u;
    {
        const bool branch_taken_0x2eaac8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eaac8) {
            ctx->pc = 0x2EAACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAAC8u;
            // 0x2eaacc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB79Cu;
            goto label_2eb79c;
        }
    }
    ctx->pc = 0x2EAAD0u;
    // 0x2eaad0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2eaad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2eaad4: 0x50c302c5  beql        $a2, $v1, . + 4 + (0x2C5 << 2)
    ctx->pc = 0x2EAAD4u;
    {
        const bool branch_taken_0x2eaad4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eaad4) {
            ctx->pc = 0x2EAAD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAAD4u;
            // 0x2eaad8: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB5ECu;
            goto label_2eb5ec;
        }
    }
    ctx->pc = 0x2EAADCu;
    // 0x2eaadc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2eaadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2eaae0: 0x50c30244  beql        $a2, $v1, . + 4 + (0x244 << 2)
    ctx->pc = 0x2EAAE0u;
    {
        const bool branch_taken_0x2eaae0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eaae0) {
            ctx->pc = 0x2EAAE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAAE0u;
            // 0x2eaae4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB3F4u;
            goto label_2eb3f4;
        }
    }
    ctx->pc = 0x2EAAE8u;
    // 0x2eaae8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2eaae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2eaaec: 0x50c30208  beql        $a2, $v1, . + 4 + (0x208 << 2)
    ctx->pc = 0x2EAAECu;
    {
        const bool branch_taken_0x2eaaec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eaaec) {
            ctx->pc = 0x2EAAF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAAECu;
            // 0x2eaaf0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB310u;
            goto label_2eb310;
        }
    }
    ctx->pc = 0x2EAAF4u;
    // 0x2eaaf4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2eaaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2eaaf8: 0x50c301af  beql        $a2, $v1, . + 4 + (0x1AF << 2)
    ctx->pc = 0x2EAAF8u;
    {
        const bool branch_taken_0x2eaaf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eaaf8) {
            ctx->pc = 0x2EAAFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAAF8u;
            // 0x2eaafc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB1B8u;
            goto label_2eb1b8;
        }
    }
    ctx->pc = 0x2EAB00u;
    // 0x2eab00: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2eab00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2eab04: 0x50c30156  beql        $a2, $v1, . + 4 + (0x156 << 2)
    ctx->pc = 0x2EAB04u;
    {
        const bool branch_taken_0x2eab04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eab04) {
            ctx->pc = 0x2EAB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAB04u;
            // 0x2eab08: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB060u;
            goto label_2eb060;
        }
    }
    ctx->pc = 0x2EAB0Cu;
    // 0x2eab0c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2eab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2eab10: 0x50c30137  beql        $a2, $v1, . + 4 + (0x137 << 2)
    ctx->pc = 0x2EAB10u;
    {
        const bool branch_taken_0x2eab10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eab10) {
            ctx->pc = 0x2EAB14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAB10u;
            // 0x2eab14: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EAFF0u;
            goto label_2eaff0;
        }
    }
    ctx->pc = 0x2EAB18u;
    // 0x2eab18: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eab18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eab1c: 0x50c400e2  beql        $a2, $a0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x2EAB1Cu;
    {
        const bool branch_taken_0x2eab1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x2eab1c) {
            ctx->pc = 0x2EAB20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAB1Cu;
            // 0x2eab20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EAEA8u;
            goto label_2eaea8;
        }
    }
    ctx->pc = 0x2EAB24u;
    // 0x2eab24: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2eab24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2eab28: 0x50c30064  beql        $a2, $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x2EAB28u;
    {
        const bool branch_taken_0x2eab28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eab28) {
            ctx->pc = 0x2EAB2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAB28u;
            // 0x2eab2c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EACBCu;
            goto label_2eacbc;
        }
    }
    ctx->pc = 0x2EAB30u;
    // 0x2eab30: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2eab30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eab34: 0x10ca0003  beq         $a2, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EAB34u;
    {
        const bool branch_taken_0x2eab34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x2eab34) {
            ctx->pc = 0x2EAB44u;
            goto label_2eab44;
        }
    }
    ctx->pc = 0x2EAB3Cu;
    // 0x2eab3c: 0x1000038e  b           . + 4 + (0x38E << 2)
    ctx->pc = 0x2EAB3Cu;
    {
        const bool branch_taken_0x2eab3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eab3c) {
            ctx->pc = 0x2EB978u;
            goto label_2eb978;
        }
    }
    ctx->pc = 0x2EAB44u;
label_2eab44:
    // 0x2eab44: 0x10aa0040  beq         $a1, $t2, . + 4 + (0x40 << 2)
    ctx->pc = 0x2EAB44u;
    {
        const bool branch_taken_0x2eab44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        if (branch_taken_0x2eab44) {
            ctx->pc = 0x2EAC48u;
            goto label_2eac48;
        }
    }
    ctx->pc = 0x2EAB4Cu;
    // 0x2eab4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eab50: 0x10a3002b  beq         $a1, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2EAB50u;
    {
        const bool branch_taken_0x2eab50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eab50) {
            ctx->pc = 0x2EAC00u;
            goto label_2eac00;
        }
    }
    ctx->pc = 0x2EAB58u;
    // 0x2eab58: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EAB58u;
    {
        const bool branch_taken_0x2eab58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eab58) {
            ctx->pc = 0x2EAB68u;
            goto label_2eab68;
        }
    }
    ctx->pc = 0x2EAB60u;
    // 0x2eab60: 0x100003a9  b           . + 4 + (0x3A9 << 2)
    ctx->pc = 0x2EAB60u;
    {
        const bool branch_taken_0x2eab60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eab60) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EAB68u;
label_2eab68:
    // 0x2eab68: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EAB68u;
    {
        const bool branch_taken_0x2eab68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eab68) {
            ctx->pc = 0x2EAB8Cu;
            goto label_2eab8c;
        }
    }
    ctx->pc = 0x2EAB70u;
    // 0x2eab70: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eab70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eab74: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x2eab74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2eab78: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eab78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eab7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eab7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab80: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eab80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab84: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAB84u;
    SET_GPR_U32(ctx, 31, 0x2EAB8Cu);
    ctx->pc = 0x2EAB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAB84u;
            // 0x2eab88: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAB8Cu; }
        if (ctx->pc != 0x2EAB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAB8Cu; }
        if (ctx->pc != 0x2EAB8Cu) { return; }
    }
    ctx->pc = 0x2EAB8Cu;
label_2eab8c:
    // 0x2eab8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eab90: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eab90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eab94: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eab94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eab98: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x2eab98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2eab9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eab9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaba0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eaba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaba4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eaba4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaba8: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EABA8u;
    SET_GPR_U32(ctx, 31, 0x2EABB0u);
    ctx->pc = 0x2EABACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EABA8u;
            // 0x2eabac: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EABB0u; }
        if (ctx->pc != 0x2EABB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EABB0u; }
        if (ctx->pc != 0x2EABB0u) { return; }
    }
    ctx->pc = 0x2EABB0u;
label_2eabb0:
    // 0x2eabb0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eabb4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eabb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eabb8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eabb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eabbc: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eabbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eabc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eabc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eabc4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eabc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eabc8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eabc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eabcc: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EABCCu;
    SET_GPR_U32(ctx, 31, 0x2EABD4u);
    ctx->pc = 0x2EABD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EABCCu;
            // 0x2eabd0: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EABD4u; }
        if (ctx->pc != 0x2EABD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EABD4u; }
        if (ctx->pc != 0x2EABD4u) { return; }
    }
    ctx->pc = 0x2EABD4u;
label_2eabd4:
    // 0x2eabd4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eabd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eabd8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eabd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eabdc: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eabdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eabe0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eabe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eabe4: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2eabe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2eabe8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eabe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eabec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eabecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eabf0: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EABF0u;
    SET_GPR_U32(ctx, 31, 0x2EABF8u);
    ctx->pc = 0x2EABF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EABF0u;
            // 0x2eabf4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EABF8u; }
        if (ctx->pc != 0x2EABF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EABF8u; }
        if (ctx->pc != 0x2EABF8u) { return; }
    }
    ctx->pc = 0x2EABF8u;
label_2eabf8:
    // 0x2eabf8: 0x10000383  b           . + 4 + (0x383 << 2)
    ctx->pc = 0x2EABF8u;
    {
        const bool branch_taken_0x2eabf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eabf8) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EAC00u;
label_2eac00:
    // 0x2eac00: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eac00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eac04: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x2eac04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2eac08: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eac08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eac0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eac0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac10: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eac10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac14: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAC14u;
    SET_GPR_U32(ctx, 31, 0x2EAC1Cu);
    ctx->pc = 0x2EAC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAC14u;
            // 0x2eac18: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAC1Cu; }
        if (ctx->pc != 0x2EAC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAC1Cu; }
        if (ctx->pc != 0x2EAC1Cu) { return; }
    }
    ctx->pc = 0x2EAC1Cu;
label_2eac1c:
    // 0x2eac1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eac20: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eac20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac24: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eac24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eac28: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eac28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eac2c: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eac30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eac30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eac34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac38: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAC38u;
    SET_GPR_U32(ctx, 31, 0x2EAC40u);
    ctx->pc = 0x2EAC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAC38u;
            // 0x2eac3c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAC40u; }
        if (ctx->pc != 0x2EAC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAC40u; }
        if (ctx->pc != 0x2EAC40u) { return; }
    }
    ctx->pc = 0x2EAC40u;
label_2eac40:
    // 0x2eac40: 0x10000371  b           . + 4 + (0x371 << 2)
    ctx->pc = 0x2EAC40u;
    {
        const bool branch_taken_0x2eac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eac40) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EAC48u;
label_2eac48:
    // 0x2eac48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eac48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eac4c: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x2eac4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2eac50: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eac50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eac54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eac54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac58: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eac58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac5c: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAC5Cu;
    SET_GPR_U32(ctx, 31, 0x2EAC64u);
    ctx->pc = 0x2EAC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAC5Cu;
            // 0x2eac60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAC64u; }
        if (ctx->pc != 0x2EAC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAC64u; }
        if (ctx->pc != 0x2EAC64u) { return; }
    }
    ctx->pc = 0x2EAC64u;
label_2eac64:
    // 0x2eac64: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EAC64u;
    {
        const bool branch_taken_0x2eac64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eac64) {
            ctx->pc = 0x2EAC90u;
            goto label_2eac90;
        }
    }
    ctx->pc = 0x2EAC6Cu;
    // 0x2eac6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eac70: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eac70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eac74: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eac74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eac78: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2eac78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2eac7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eac7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac80: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eac80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eac84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac88: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAC88u;
    SET_GPR_U32(ctx, 31, 0x2EAC90u);
    ctx->pc = 0x2EAC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAC88u;
            // 0x2eac8c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAC90u; }
        if (ctx->pc != 0x2EAC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAC90u; }
        if (ctx->pc != 0x2EAC90u) { return; }
    }
    ctx->pc = 0x2EAC90u;
label_2eac90:
    // 0x2eac90: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eac90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eac94: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eac94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac98: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eac98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eac9c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eaca0: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x2eaca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2eaca4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eaca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaca8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eaca8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eacac: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EACACu;
    SET_GPR_U32(ctx, 31, 0x2EACB4u);
    ctx->pc = 0x2EACB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EACACu;
            // 0x2eacb0: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EACB4u; }
        if (ctx->pc != 0x2EACB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EACB4u; }
        if (ctx->pc != 0x2EACB4u) { return; }
    }
    ctx->pc = 0x2EACB4u;
label_2eacb4:
    // 0x2eacb4: 0x10000354  b           . + 4 + (0x354 << 2)
    ctx->pc = 0x2EACB4u;
    {
        const bool branch_taken_0x2eacb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eacb4) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EACBCu;
label_2eacbc:
    // 0x2eacbc: 0x10aa0054  beq         $a1, $t2, . + 4 + (0x54 << 2)
    ctx->pc = 0x2EACBCu;
    {
        const bool branch_taken_0x2eacbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        if (branch_taken_0x2eacbc) {
            ctx->pc = 0x2EAE10u;
            goto label_2eae10;
        }
    }
    ctx->pc = 0x2EACC4u;
    // 0x2eacc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eacc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eacc8: 0x10a3002b  beq         $a1, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2EACC8u;
    {
        const bool branch_taken_0x2eacc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eacc8) {
            ctx->pc = 0x2EAD78u;
            goto label_2ead78;
        }
    }
    ctx->pc = 0x2EACD0u;
    // 0x2eacd0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EACD0u;
    {
        const bool branch_taken_0x2eacd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eacd0) {
            ctx->pc = 0x2EACE0u;
            goto label_2eace0;
        }
    }
    ctx->pc = 0x2EACD8u;
    // 0x2eacd8: 0x1000034b  b           . + 4 + (0x34B << 2)
    ctx->pc = 0x2EACD8u;
    {
        const bool branch_taken_0x2eacd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eacd8) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EACE0u;
label_2eace0:
    // 0x2eace0: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EACE0u;
    {
        const bool branch_taken_0x2eace0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eace0) {
            ctx->pc = 0x2EAD04u;
            goto label_2ead04;
        }
    }
    ctx->pc = 0x2EACE8u;
    // 0x2eace8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eace8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eacec: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2eacecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2eacf0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eacf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eacf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eacf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eacf8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eacf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eacfc: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EACFCu;
    SET_GPR_U32(ctx, 31, 0x2EAD04u);
    ctx->pc = 0x2EAD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EACFCu;
            // 0x2ead00: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAD04u; }
        if (ctx->pc != 0x2EAD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAD04u; }
        if (ctx->pc != 0x2EAD04u) { return; }
    }
    ctx->pc = 0x2EAD04u;
label_2ead04:
    // 0x2ead04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ead04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ead08: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ead08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ead0c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ead0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ead10: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2ead10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ead14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ead14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead18: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2ead18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ead1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead20: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAD20u;
    SET_GPR_U32(ctx, 31, 0x2EAD28u);
    ctx->pc = 0x2EAD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAD20u;
            // 0x2ead24: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAD28u; }
        if (ctx->pc != 0x2EAD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAD28u; }
        if (ctx->pc != 0x2EAD28u) { return; }
    }
    ctx->pc = 0x2EAD28u;
label_2ead28:
    // 0x2ead28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ead28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ead2c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ead2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ead30: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ead30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ead34: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2ead34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2ead38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ead38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead3c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2ead3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ead40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead44: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAD44u;
    SET_GPR_U32(ctx, 31, 0x2EAD4Cu);
    ctx->pc = 0x2EAD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAD44u;
            // 0x2ead48: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAD4Cu; }
        if (ctx->pc != 0x2EAD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAD4Cu; }
        if (ctx->pc != 0x2EAD4Cu) { return; }
    }
    ctx->pc = 0x2EAD4Cu;
label_2ead4c:
    // 0x2ead4c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ead4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ead50: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2ead50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead54: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ead54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ead58: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ead58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ead5c: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2ead5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2ead60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ead60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ead64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead68: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAD68u;
    SET_GPR_U32(ctx, 31, 0x2EAD70u);
    ctx->pc = 0x2EAD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAD68u;
            // 0x2ead6c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAD70u; }
        if (ctx->pc != 0x2EAD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAD70u; }
        if (ctx->pc != 0x2EAD70u) { return; }
    }
    ctx->pc = 0x2EAD70u;
label_2ead70:
    // 0x2ead70: 0x10000325  b           . + 4 + (0x325 << 2)
    ctx->pc = 0x2EAD70u;
    {
        const bool branch_taken_0x2ead70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ead70) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EAD78u;
label_2ead78:
    // 0x2ead78: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EAD78u;
    {
        const bool branch_taken_0x2ead78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ead78) {
            ctx->pc = 0x2EAD9Cu;
            goto label_2ead9c;
        }
    }
    ctx->pc = 0x2EAD80u;
    // 0x2ead80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ead80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ead84: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2ead84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2ead88: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ead88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ead8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ead8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead90: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2ead90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead94: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAD94u;
    SET_GPR_U32(ctx, 31, 0x2EAD9Cu);
    ctx->pc = 0x2EAD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAD94u;
            // 0x2ead98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAD9Cu; }
        if (ctx->pc != 0x2EAD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAD9Cu; }
        if (ctx->pc != 0x2EAD9Cu) { return; }
    }
    ctx->pc = 0x2EAD9Cu;
label_2ead9c:
    // 0x2ead9c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ead9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eada0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eada0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eada4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eada4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eada8: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x2eada8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2eadac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eadacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eadb0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eadb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eadb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eadb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eadb8: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EADB8u;
    SET_GPR_U32(ctx, 31, 0x2EADC0u);
    ctx->pc = 0x2EADBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EADB8u;
            // 0x2eadbc: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EADC0u; }
        if (ctx->pc != 0x2EADC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EADC0u; }
        if (ctx->pc != 0x2EADC0u) { return; }
    }
    ctx->pc = 0x2EADC0u;
label_2eadc0:
    // 0x2eadc0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eadc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eadc4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eadc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eadc8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eadc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eadcc: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eadccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eadd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eadd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eadd4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eadd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eadd8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eadd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaddc: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EADDCu;
    SET_GPR_U32(ctx, 31, 0x2EADE4u);
    ctx->pc = 0x2EADE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EADDCu;
            // 0x2eade0: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EADE4u; }
        if (ctx->pc != 0x2EADE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EADE4u; }
        if (ctx->pc != 0x2EADE4u) { return; }
    }
    ctx->pc = 0x2EADE4u;
label_2eade4:
    // 0x2eade4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eade4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eade8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eade8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eadec: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eadecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eadf0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eadf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eadf4: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eadf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eadf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eadf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eadfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eadfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae00: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAE00u;
    SET_GPR_U32(ctx, 31, 0x2EAE08u);
    ctx->pc = 0x2EAE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAE00u;
            // 0x2eae04: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAE08u; }
        if (ctx->pc != 0x2EAE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAE08u; }
        if (ctx->pc != 0x2EAE08u) { return; }
    }
    ctx->pc = 0x2EAE08u;
label_2eae08:
    // 0x2eae08: 0x100002ff  b           . + 4 + (0x2FF << 2)
    ctx->pc = 0x2EAE08u;
    {
        const bool branch_taken_0x2eae08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eae08) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EAE10u;
label_2eae10:
    // 0x2eae10: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EAE10u;
    {
        const bool branch_taken_0x2eae10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eae10) {
            ctx->pc = 0x2EAE34u;
            goto label_2eae34;
        }
    }
    ctx->pc = 0x2EAE18u;
    // 0x2eae18: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eae18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eae1c: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x2eae1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2eae20: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eae20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eae24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eae24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae28: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eae28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae2c: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAE2Cu;
    SET_GPR_U32(ctx, 31, 0x2EAE34u);
    ctx->pc = 0x2EAE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAE2Cu;
            // 0x2eae30: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAE34u; }
        if (ctx->pc != 0x2EAE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAE34u; }
        if (ctx->pc != 0x2EAE34u) { return; }
    }
    ctx->pc = 0x2EAE34u;
label_2eae34:
    // 0x2eae34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eae34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eae38: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eae38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eae3c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eae3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eae40: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x2eae40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2eae44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eae44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae48: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eae48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eae4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae50: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAE50u;
    SET_GPR_U32(ctx, 31, 0x2EAE58u);
    ctx->pc = 0x2EAE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAE50u;
            // 0x2eae54: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAE58u; }
        if (ctx->pc != 0x2EAE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAE58u; }
        if (ctx->pc != 0x2EAE58u) { return; }
    }
    ctx->pc = 0x2EAE58u;
label_2eae58:
    // 0x2eae58: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eae58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eae5c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eae5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eae60: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eae60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eae64: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2eae64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2eae68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eae68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae6c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eae6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eae70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae74: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAE74u;
    SET_GPR_U32(ctx, 31, 0x2EAE7Cu);
    ctx->pc = 0x2EAE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAE74u;
            // 0x2eae78: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAE7Cu; }
        if (ctx->pc != 0x2EAE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAE7Cu; }
        if (ctx->pc != 0x2EAE7Cu) { return; }
    }
    ctx->pc = 0x2EAE7Cu;
label_2eae7c:
    // 0x2eae7c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eae80: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eae80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae84: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eae84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eae88: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eae88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eae8c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x2eae8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2eae90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eae90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eae94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae98: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAE98u;
    SET_GPR_U32(ctx, 31, 0x2EAEA0u);
    ctx->pc = 0x2EAE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAE98u;
            // 0x2eae9c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAEA0u; }
        if (ctx->pc != 0x2EAEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAEA0u; }
        if (ctx->pc != 0x2EAEA0u) { return; }
    }
    ctx->pc = 0x2EAEA0u;
label_2eaea0:
    // 0x2eaea0: 0x100002d9  b           . + 4 + (0x2D9 << 2)
    ctx->pc = 0x2EAEA0u;
    {
        const bool branch_taken_0x2eaea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eaea0) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EAEA8u;
label_2eaea8:
    // 0x2eaea8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EAEA8u;
    {
        const bool branch_taken_0x2eaea8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eaea8) {
            ctx->pc = 0x2EAEB8u;
            goto label_2eaeb8;
        }
    }
    ctx->pc = 0x2EAEB0u;
    // 0x2eaeb0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2EAEB0u;
    {
        const bool branch_taken_0x2eaeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eaeb0) {
            ctx->pc = 0x2EAF54u;
            goto label_2eaf54;
        }
    }
    ctx->pc = 0x2EAEB8u;
label_2eaeb8:
    // 0x2eaeb8: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EAEB8u;
    {
        const bool branch_taken_0x2eaeb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eaeb8) {
            ctx->pc = 0x2EAEE0u;
            goto label_2eaee0;
        }
    }
    ctx->pc = 0x2EAEC0u;
    // 0x2eaec0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eaec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eaec4: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x2eaec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2eaec8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eaec8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eaecc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eaeccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaed0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eaed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaed4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eaed4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaed8: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAED8u;
    SET_GPR_U32(ctx, 31, 0x2EAEE0u);
    ctx->pc = 0x2EAEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAED8u;
            // 0x2eaedc: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAEE0u; }
        if (ctx->pc != 0x2EAEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAEE0u; }
        if (ctx->pc != 0x2EAEE0u) { return; }
    }
    ctx->pc = 0x2EAEE0u;
label_2eaee0:
    // 0x2eaee0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eaee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eaee4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eaee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eaee8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eaee8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eaeec: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x2eaeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2eaef0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eaef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaef4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eaef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaef8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eaef8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaefc: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAEFCu;
    SET_GPR_U32(ctx, 31, 0x2EAF04u);
    ctx->pc = 0x2EAF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAEFCu;
            // 0x2eaf00: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAF04u; }
        if (ctx->pc != 0x2EAF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAF04u; }
        if (ctx->pc != 0x2EAF04u) { return; }
    }
    ctx->pc = 0x2EAF04u;
label_2eaf04:
    // 0x2eaf04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eaf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eaf08: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eaf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eaf0c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eaf0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eaf10: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x2eaf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2eaf14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eaf14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf18: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eaf18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eaf1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf20: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAF20u;
    SET_GPR_U32(ctx, 31, 0x2EAF28u);
    ctx->pc = 0x2EAF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAF20u;
            // 0x2eaf24: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAF28u; }
        if (ctx->pc != 0x2EAF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAF28u; }
        if (ctx->pc != 0x2EAF28u) { return; }
    }
    ctx->pc = 0x2EAF28u;
label_2eaf28:
    // 0x2eaf28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eaf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eaf2c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eaf2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf30: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eaf30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eaf34: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eaf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eaf38: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x2eaf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2eaf3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eaf3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eaf40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf44: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAF44u;
    SET_GPR_U32(ctx, 31, 0x2EAF4Cu);
    ctx->pc = 0x2EAF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAF44u;
            // 0x2eaf48: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAF4Cu; }
        if (ctx->pc != 0x2EAF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAF4Cu; }
        if (ctx->pc != 0x2EAF4Cu) { return; }
    }
    ctx->pc = 0x2EAF4Cu;
label_2eaf4c:
    // 0x2eaf4c: 0x100002ae  b           . + 4 + (0x2AE << 2)
    ctx->pc = 0x2EAF4Cu;
    {
        const bool branch_taken_0x2eaf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eaf4c) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EAF54u;
label_2eaf54:
    // 0x2eaf54: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EAF54u;
    {
        const bool branch_taken_0x2eaf54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eaf54) {
            ctx->pc = 0x2EAF7Cu;
            goto label_2eaf7c;
        }
    }
    ctx->pc = 0x2EAF5Cu;
    // 0x2eaf5c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eaf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eaf60: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x2eaf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2eaf64: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eaf64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eaf68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eaf68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf6c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eaf6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eaf70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf74: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAF74u;
    SET_GPR_U32(ctx, 31, 0x2EAF7Cu);
    ctx->pc = 0x2EAF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAF74u;
            // 0x2eaf78: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAF7Cu; }
        if (ctx->pc != 0x2EAF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAF7Cu; }
        if (ctx->pc != 0x2EAF7Cu) { return; }
    }
    ctx->pc = 0x2EAF7Cu;
label_2eaf7c:
    // 0x2eaf7c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eaf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eaf80: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eaf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eaf84: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eaf84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eaf88: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x2eaf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2eaf8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eaf8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf90: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eaf90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eaf94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf98: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAF98u;
    SET_GPR_U32(ctx, 31, 0x2EAFA0u);
    ctx->pc = 0x2EAF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAF98u;
            // 0x2eaf9c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAFA0u; }
        if (ctx->pc != 0x2EAFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAFA0u; }
        if (ctx->pc != 0x2EAFA0u) { return; }
    }
    ctx->pc = 0x2EAFA0u;
label_2eafa0:
    // 0x2eafa0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eafa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eafa4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eafa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eafa8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eafa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eafac: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eafacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eafb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eafb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eafb4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eafb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eafb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eafb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eafbc: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAFBCu;
    SET_GPR_U32(ctx, 31, 0x2EAFC4u);
    ctx->pc = 0x2EAFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAFBCu;
            // 0x2eafc0: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAFC4u; }
        if (ctx->pc != 0x2EAFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAFC4u; }
        if (ctx->pc != 0x2EAFC4u) { return; }
    }
    ctx->pc = 0x2EAFC4u;
label_2eafc4:
    // 0x2eafc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eafc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eafc8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eafc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eafcc: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eafccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eafd0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eafd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eafd4: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eafd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eafd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eafd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eafdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eafdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eafe0: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EAFE0u;
    SET_GPR_U32(ctx, 31, 0x2EAFE8u);
    ctx->pc = 0x2EAFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAFE0u;
            // 0x2eafe4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAFE8u; }
        if (ctx->pc != 0x2EAFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAFE8u; }
        if (ctx->pc != 0x2EAFE8u) { return; }
    }
    ctx->pc = 0x2EAFE8u;
label_2eafe8:
    // 0x2eafe8: 0x10000287  b           . + 4 + (0x287 << 2)
    ctx->pc = 0x2EAFE8u;
    {
        const bool branch_taken_0x2eafe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eafe8) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EAFF0u;
label_2eaff0:
    // 0x2eaff0: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EAFF0u;
    {
        const bool branch_taken_0x2eaff0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eaff0) {
            ctx->pc = 0x2EB034u;
            goto label_2eb034;
        }
    }
    ctx->pc = 0x2EAFF8u;
    // 0x2eaff8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EAFF8u;
    {
        const bool branch_taken_0x2eaff8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eaff8) {
            ctx->pc = 0x2EB008u;
            goto label_2eb008;
        }
    }
    ctx->pc = 0x2EB000u;
    // 0x2eb000: 0x10000281  b           . + 4 + (0x281 << 2)
    ctx->pc = 0x2EB000u;
    {
        const bool branch_taken_0x2eb000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb000) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB008u;
label_2eb008:
    // 0x2eb008: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb00c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb00cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb010: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb010u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb014: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb018: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eb018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eb01c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb020: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb020u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb024: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB024u;
    SET_GPR_U32(ctx, 31, 0x2EB02Cu);
    ctx->pc = 0x2EB028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB024u;
            // 0x2eb028: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB02Cu; }
        if (ctx->pc != 0x2EB02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB02Cu; }
        if (ctx->pc != 0x2EB02Cu) { return; }
    }
    ctx->pc = 0x2EB02Cu;
label_2eb02c:
    // 0x2eb02c: 0x10000276  b           . + 4 + (0x276 << 2)
    ctx->pc = 0x2EB02Cu;
    {
        const bool branch_taken_0x2eb02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb02c) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB034u;
label_2eb034:
    // 0x2eb034: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb038: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb03c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb03cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb040: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb044: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x2eb044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2eb048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb04c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb04cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb050: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB050u;
    SET_GPR_U32(ctx, 31, 0x2EB058u);
    ctx->pc = 0x2EB054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB050u;
            // 0x2eb054: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB058u; }
        if (ctx->pc != 0x2EB058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB058u; }
        if (ctx->pc != 0x2EB058u) { return; }
    }
    ctx->pc = 0x2EB058u;
label_2eb058:
    // 0x2eb058: 0x1000026b  b           . + 4 + (0x26B << 2)
    ctx->pc = 0x2EB058u;
    {
        const bool branch_taken_0x2eb058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb058) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB060u;
label_2eb060:
    // 0x2eb060: 0x10a3002d  beq         $a1, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2EB060u;
    {
        const bool branch_taken_0x2eb060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb060) {
            ctx->pc = 0x2EB118u;
            goto label_2eb118;
        }
    }
    ctx->pc = 0x2EB068u;
    // 0x2eb068: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB068u;
    {
        const bool branch_taken_0x2eb068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb068) {
            ctx->pc = 0x2EB078u;
            goto label_2eb078;
        }
    }
    ctx->pc = 0x2EB070u;
    // 0x2eb070: 0x10000265  b           . + 4 + (0x265 << 2)
    ctx->pc = 0x2EB070u;
    {
        const bool branch_taken_0x2eb070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb070) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB078u;
label_2eb078:
    // 0x2eb078: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EB078u;
    {
        const bool branch_taken_0x2eb078 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb078) {
            ctx->pc = 0x2EB0A4u;
            goto label_2eb0a4;
        }
    }
    ctx->pc = 0x2EB080u;
    // 0x2eb080: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb084: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb088: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb088u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb08c: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x2eb08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2eb090: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb094: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb098: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb098u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb09c: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB09Cu;
    SET_GPR_U32(ctx, 31, 0x2EB0A4u);
    ctx->pc = 0x2EB0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB09Cu;
            // 0x2eb0a0: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB0A4u; }
        if (ctx->pc != 0x2EB0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB0A4u; }
        if (ctx->pc != 0x2EB0A4u) { return; }
    }
    ctx->pc = 0x2EB0A4u;
label_2eb0a4:
    // 0x2eb0a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb0a8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb0ac: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb0acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb0b0: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x2eb0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2eb0b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb0b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb0b8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb0b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb0bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb0bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb0c0: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB0C0u;
    SET_GPR_U32(ctx, 31, 0x2EB0C8u);
    ctx->pc = 0x2EB0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB0C0u;
            // 0x2eb0c4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB0C8u; }
        if (ctx->pc != 0x2EB0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB0C8u; }
        if (ctx->pc != 0x2EB0C8u) { return; }
    }
    ctx->pc = 0x2EB0C8u;
label_2eb0c8:
    // 0x2eb0c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb0cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb0d0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb0d4: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eb0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eb0d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb0dc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb0dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb0e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb0e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb0e4: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB0E4u;
    SET_GPR_U32(ctx, 31, 0x2EB0ECu);
    ctx->pc = 0x2EB0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB0E4u;
            // 0x2eb0e8: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB0ECu; }
        if (ctx->pc != 0x2EB0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB0ECu; }
        if (ctx->pc != 0x2EB0ECu) { return; }
    }
    ctx->pc = 0x2EB0ECu;
label_2eb0ec:
    // 0x2eb0ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb0f0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb0f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb0f4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb0f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb0f8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb0fc: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2eb0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2eb100: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb104: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb104u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb108: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB108u;
    SET_GPR_U32(ctx, 31, 0x2EB110u);
    ctx->pc = 0x2EB10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB108u;
            // 0x2eb10c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB110u; }
        if (ctx->pc != 0x2EB110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB110u; }
        if (ctx->pc != 0x2EB110u) { return; }
    }
    ctx->pc = 0x2EB110u;
label_2eb110:
    // 0x2eb110: 0x1000023d  b           . + 4 + (0x23D << 2)
    ctx->pc = 0x2EB110u;
    {
        const bool branch_taken_0x2eb110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb110) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB118u;
label_2eb118:
    // 0x2eb118: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EB118u;
    {
        const bool branch_taken_0x2eb118 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb118) {
            ctx->pc = 0x2EB144u;
            goto label_2eb144;
        }
    }
    ctx->pc = 0x2EB120u;
    // 0x2eb120: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb124: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb128: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb128u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb12c: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x2eb12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2eb130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb134: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb138: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb138u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb13c: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB13Cu;
    SET_GPR_U32(ctx, 31, 0x2EB144u);
    ctx->pc = 0x2EB140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB13Cu;
            // 0x2eb140: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB144u; }
        if (ctx->pc != 0x2EB144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB144u; }
        if (ctx->pc != 0x2EB144u) { return; }
    }
    ctx->pc = 0x2EB144u;
label_2eb144:
    // 0x2eb144: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb148: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb14c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb14cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb150: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x2eb150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2eb154: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb158: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb15c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb15cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb160: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB160u;
    SET_GPR_U32(ctx, 31, 0x2EB168u);
    ctx->pc = 0x2EB164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB160u;
            // 0x2eb164: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB168u; }
        if (ctx->pc != 0x2EB168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB168u; }
        if (ctx->pc != 0x2EB168u) { return; }
    }
    ctx->pc = 0x2EB168u;
label_2eb168:
    // 0x2eb168: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb16c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb170: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb170u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb174: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eb174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eb178: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb17c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb17cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb180: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb180u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb184: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB184u;
    SET_GPR_U32(ctx, 31, 0x2EB18Cu);
    ctx->pc = 0x2EB188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB184u;
            // 0x2eb188: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB18Cu; }
        if (ctx->pc != 0x2EB18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB18Cu; }
        if (ctx->pc != 0x2EB18Cu) { return; }
    }
    ctx->pc = 0x2EB18Cu;
label_2eb18c:
    // 0x2eb18c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb190: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb194: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb194u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb198: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb19c: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2eb19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2eb1a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb1a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb1a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1a8: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB1A8u;
    SET_GPR_U32(ctx, 31, 0x2EB1B0u);
    ctx->pc = 0x2EB1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB1A8u;
            // 0x2eb1ac: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB1B0u; }
        if (ctx->pc != 0x2EB1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB1B0u; }
        if (ctx->pc != 0x2EB1B0u) { return; }
    }
    ctx->pc = 0x2EB1B0u;
label_2eb1b0:
    // 0x2eb1b0: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x2EB1B0u;
    {
        const bool branch_taken_0x2eb1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb1b0) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB1B8u;
label_2eb1b8:
    // 0x2eb1b8: 0x10a3002d  beq         $a1, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2EB1B8u;
    {
        const bool branch_taken_0x2eb1b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb1b8) {
            ctx->pc = 0x2EB270u;
            goto label_2eb270;
        }
    }
    ctx->pc = 0x2EB1C0u;
    // 0x2eb1c0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB1C0u;
    {
        const bool branch_taken_0x2eb1c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb1c0) {
            ctx->pc = 0x2EB1D0u;
            goto label_2eb1d0;
        }
    }
    ctx->pc = 0x2EB1C8u;
    // 0x2eb1c8: 0x1000020f  b           . + 4 + (0x20F << 2)
    ctx->pc = 0x2EB1C8u;
    {
        const bool branch_taken_0x2eb1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb1c8) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB1D0u;
label_2eb1d0:
    // 0x2eb1d0: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EB1D0u;
    {
        const bool branch_taken_0x2eb1d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb1d0) {
            ctx->pc = 0x2EB1FCu;
            goto label_2eb1fc;
        }
    }
    ctx->pc = 0x2EB1D8u;
    // 0x2eb1d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb1dc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb1e0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb1e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb1e4: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x2eb1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2eb1e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb1e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1ec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb1ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb1f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1f4: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB1F4u;
    SET_GPR_U32(ctx, 31, 0x2EB1FCu);
    ctx->pc = 0x2EB1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB1F4u;
            // 0x2eb1f8: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB1FCu; }
        if (ctx->pc != 0x2EB1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB1FCu; }
        if (ctx->pc != 0x2EB1FCu) { return; }
    }
    ctx->pc = 0x2EB1FCu;
label_2eb1fc:
    // 0x2eb1fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb200: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb204: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb204u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb208: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x2eb208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2eb20c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb210: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb214: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb214u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb218: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB218u;
    SET_GPR_U32(ctx, 31, 0x2EB220u);
    ctx->pc = 0x2EB21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB218u;
            // 0x2eb21c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB220u; }
        if (ctx->pc != 0x2EB220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB220u; }
        if (ctx->pc != 0x2EB220u) { return; }
    }
    ctx->pc = 0x2EB220u;
label_2eb220:
    // 0x2eb220: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb224: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb228: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb228u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb22c: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eb22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eb230: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb234: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb238: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb238u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb23c: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB23Cu;
    SET_GPR_U32(ctx, 31, 0x2EB244u);
    ctx->pc = 0x2EB240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB23Cu;
            // 0x2eb240: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB244u; }
        if (ctx->pc != 0x2EB244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB244u; }
        if (ctx->pc != 0x2EB244u) { return; }
    }
    ctx->pc = 0x2EB244u;
label_2eb244:
    // 0x2eb244: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb248: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb24c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb24cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb250: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb254: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2eb254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2eb258: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb25c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb25cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb260: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB260u;
    SET_GPR_U32(ctx, 31, 0x2EB268u);
    ctx->pc = 0x2EB264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB260u;
            // 0x2eb264: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB268u; }
        if (ctx->pc != 0x2EB268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB268u; }
        if (ctx->pc != 0x2EB268u) { return; }
    }
    ctx->pc = 0x2EB268u;
label_2eb268:
    // 0x2eb268: 0x100001e7  b           . + 4 + (0x1E7 << 2)
    ctx->pc = 0x2EB268u;
    {
        const bool branch_taken_0x2eb268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb268) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB270u;
label_2eb270:
    // 0x2eb270: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EB270u;
    {
        const bool branch_taken_0x2eb270 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb270) {
            ctx->pc = 0x2EB29Cu;
            goto label_2eb29c;
        }
    }
    ctx->pc = 0x2EB278u;
    // 0x2eb278: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb27c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb280: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb280u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb284: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x2eb284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2eb288: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb28c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb28cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb290: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb290u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb294: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB294u;
    SET_GPR_U32(ctx, 31, 0x2EB29Cu);
    ctx->pc = 0x2EB298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB294u;
            // 0x2eb298: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB29Cu; }
        if (ctx->pc != 0x2EB29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB29Cu; }
        if (ctx->pc != 0x2EB29Cu) { return; }
    }
    ctx->pc = 0x2EB29Cu;
label_2eb29c:
    // 0x2eb29c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb2a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb2a4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb2a8: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2eb2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2eb2ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb2acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb2b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb2b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2b8: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB2B8u;
    SET_GPR_U32(ctx, 31, 0x2EB2C0u);
    ctx->pc = 0x2EB2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB2B8u;
            // 0x2eb2bc: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB2C0u; }
        if (ctx->pc != 0x2EB2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB2C0u; }
        if (ctx->pc != 0x2EB2C0u) { return; }
    }
    ctx->pc = 0x2EB2C0u;
label_2eb2c0:
    // 0x2eb2c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb2c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb2c8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb2c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb2cc: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x2eb2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2eb2d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2d4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb2d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb2d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2dc: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB2DCu;
    SET_GPR_U32(ctx, 31, 0x2EB2E4u);
    ctx->pc = 0x2EB2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB2DCu;
            // 0x2eb2e0: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB2E4u; }
        if (ctx->pc != 0x2EB2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB2E4u; }
        if (ctx->pc != 0x2EB2E4u) { return; }
    }
    ctx->pc = 0x2EB2E4u;
label_2eb2e4:
    // 0x2eb2e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb2e8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb2e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2ec: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb2ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb2f0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb2f4: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x2eb2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2eb2f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb2f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb2fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb300: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB300u;
    SET_GPR_U32(ctx, 31, 0x2EB308u);
    ctx->pc = 0x2EB304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB300u;
            // 0x2eb304: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB308u; }
        if (ctx->pc != 0x2EB308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB308u; }
        if (ctx->pc != 0x2EB308u) { return; }
    }
    ctx->pc = 0x2EB308u;
label_2eb308:
    // 0x2eb308: 0x100001bf  b           . + 4 + (0x1BF << 2)
    ctx->pc = 0x2EB308u;
    {
        const bool branch_taken_0x2eb308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb308) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB310u;
label_2eb310:
    // 0x2eb310: 0x10a3002d  beq         $a1, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2EB310u;
    {
        const bool branch_taken_0x2eb310 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb310) {
            ctx->pc = 0x2EB3C8u;
            goto label_2eb3c8;
        }
    }
    ctx->pc = 0x2EB318u;
    // 0x2eb318: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB318u;
    {
        const bool branch_taken_0x2eb318 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb318) {
            ctx->pc = 0x2EB328u;
            goto label_2eb328;
        }
    }
    ctx->pc = 0x2EB320u;
    // 0x2eb320: 0x100001b9  b           . + 4 + (0x1B9 << 2)
    ctx->pc = 0x2EB320u;
    {
        const bool branch_taken_0x2eb320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb320) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB328u;
label_2eb328:
    // 0x2eb328: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EB328u;
    {
        const bool branch_taken_0x2eb328 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb328) {
            ctx->pc = 0x2EB354u;
            goto label_2eb354;
        }
    }
    ctx->pc = 0x2EB330u;
    // 0x2eb330: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb334: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb338: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb338u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb33c: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x2eb33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2eb340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb344: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb348: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb348u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb34c: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB34Cu;
    SET_GPR_U32(ctx, 31, 0x2EB354u);
    ctx->pc = 0x2EB350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB34Cu;
            // 0x2eb350: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB354u; }
        if (ctx->pc != 0x2EB354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB354u; }
        if (ctx->pc != 0x2EB354u) { return; }
    }
    ctx->pc = 0x2EB354u;
label_2eb354:
    // 0x2eb354: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb358: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb35c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb35cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb360: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x2eb360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2eb364: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb368: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb36c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb36cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb370: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB370u;
    SET_GPR_U32(ctx, 31, 0x2EB378u);
    ctx->pc = 0x2EB374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB370u;
            // 0x2eb374: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB378u; }
        if (ctx->pc != 0x2EB378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB378u; }
        if (ctx->pc != 0x2EB378u) { return; }
    }
    ctx->pc = 0x2EB378u;
label_2eb378:
    // 0x2eb378: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb37c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb380: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb380u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb384: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eb384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eb388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb38c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb38cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb390: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb390u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb394: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB394u;
    SET_GPR_U32(ctx, 31, 0x2EB39Cu);
    ctx->pc = 0x2EB398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB394u;
            // 0x2eb398: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB39Cu; }
        if (ctx->pc != 0x2EB39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB39Cu; }
        if (ctx->pc != 0x2EB39Cu) { return; }
    }
    ctx->pc = 0x2EB39Cu;
label_2eb39c:
    // 0x2eb39c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb3a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb3a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb3a4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb3a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb3a8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb3ac: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2eb3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2eb3b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb3b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb3b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb3b8: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB3B8u;
    SET_GPR_U32(ctx, 31, 0x2EB3C0u);
    ctx->pc = 0x2EB3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB3B8u;
            // 0x2eb3bc: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB3C0u; }
        if (ctx->pc != 0x2EB3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB3C0u; }
        if (ctx->pc != 0x2EB3C0u) { return; }
    }
    ctx->pc = 0x2EB3C0u;
label_2eb3c0:
    // 0x2eb3c0: 0x10000191  b           . + 4 + (0x191 << 2)
    ctx->pc = 0x2EB3C0u;
    {
        const bool branch_taken_0x2eb3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb3c0) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB3C8u;
label_2eb3c8:
    // 0x2eb3c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb3cc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb3ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb3d0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb3d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb3d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb3d8: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x2eb3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2eb3dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb3e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb3e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb3e4: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB3E4u;
    SET_GPR_U32(ctx, 31, 0x2EB3ECu);
    ctx->pc = 0x2EB3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB3E4u;
            // 0x2eb3e8: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB3ECu; }
        if (ctx->pc != 0x2EB3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB3ECu; }
        if (ctx->pc != 0x2EB3ECu) { return; }
    }
    ctx->pc = 0x2EB3ECu;
label_2eb3ec:
    // 0x2eb3ec: 0x10000186  b           . + 4 + (0x186 << 2)
    ctx->pc = 0x2EB3ECu;
    {
        const bool branch_taken_0x2eb3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb3ec) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB3F4u;
label_2eb3f4:
    // 0x2eb3f4: 0x10aa0056  beq         $a1, $t2, . + 4 + (0x56 << 2)
    ctx->pc = 0x2EB3F4u;
    {
        const bool branch_taken_0x2eb3f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        if (branch_taken_0x2eb3f4) {
            ctx->pc = 0x2EB550u;
            goto label_2eb550;
        }
    }
    ctx->pc = 0x2EB3FCu;
    // 0x2eb3fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eb3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb400: 0x10a3002c  beq         $a1, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2EB400u;
    {
        const bool branch_taken_0x2eb400 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb400) {
            ctx->pc = 0x2EB4B4u;
            goto label_2eb4b4;
        }
    }
    ctx->pc = 0x2EB408u;
    // 0x2eb408: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB408u;
    {
        const bool branch_taken_0x2eb408 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb408) {
            ctx->pc = 0x2EB418u;
            goto label_2eb418;
        }
    }
    ctx->pc = 0x2EB410u;
    // 0x2eb410: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x2EB410u;
    {
        const bool branch_taken_0x2eb410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb410) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB418u;
label_2eb418:
    // 0x2eb418: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EB418u;
    {
        const bool branch_taken_0x2eb418 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb418) {
            ctx->pc = 0x2EB440u;
            goto label_2eb440;
        }
    }
    ctx->pc = 0x2EB420u;
    // 0x2eb420: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb424: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb428: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb428u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb42c: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x2eb42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2eb430: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb434: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb438: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB438u;
    SET_GPR_U32(ctx, 31, 0x2EB440u);
    ctx->pc = 0x2EB43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB438u;
            // 0x2eb43c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB440u; }
        if (ctx->pc != 0x2EB440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB440u; }
        if (ctx->pc != 0x2EB440u) { return; }
    }
    ctx->pc = 0x2EB440u;
label_2eb440:
    // 0x2eb440: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb444: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb448: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb448u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb44c: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x2eb44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2eb450: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb454: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb458: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb458u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb45c: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB45Cu;
    SET_GPR_U32(ctx, 31, 0x2EB464u);
    ctx->pc = 0x2EB460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB45Cu;
            // 0x2eb460: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB464u; }
        if (ctx->pc != 0x2EB464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB464u; }
        if (ctx->pc != 0x2EB464u) { return; }
    }
    ctx->pc = 0x2EB464u;
label_2eb464:
    // 0x2eb464: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb468: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb46c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb46cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb470: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eb470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eb474: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb478: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb47c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb47cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb480: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB480u;
    SET_GPR_U32(ctx, 31, 0x2EB488u);
    ctx->pc = 0x2EB484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB480u;
            // 0x2eb484: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB488u; }
        if (ctx->pc != 0x2EB488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB488u; }
        if (ctx->pc != 0x2EB488u) { return; }
    }
    ctx->pc = 0x2EB488u;
label_2eb488:
    // 0x2eb488: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb48c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb48cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb490: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb490u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb494: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb498: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eb498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eb49c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb49cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb4a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb4a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb4a4: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB4A4u;
    SET_GPR_U32(ctx, 31, 0x2EB4ACu);
    ctx->pc = 0x2EB4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB4A4u;
            // 0x2eb4a8: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB4ACu; }
        if (ctx->pc != 0x2EB4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB4ACu; }
        if (ctx->pc != 0x2EB4ACu) { return; }
    }
    ctx->pc = 0x2EB4ACu;
label_2eb4ac:
    // 0x2eb4ac: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x2EB4ACu;
    {
        const bool branch_taken_0x2eb4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb4ac) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB4B4u;
label_2eb4b4:
    // 0x2eb4b4: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EB4B4u;
    {
        const bool branch_taken_0x2eb4b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb4b4) {
            ctx->pc = 0x2EB4DCu;
            goto label_2eb4dc;
        }
    }
    ctx->pc = 0x2EB4BCu;
    // 0x2eb4bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb4c0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb4c4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb4c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb4c8: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2eb4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2eb4cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb4d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb4d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb4d4: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB4D4u;
    SET_GPR_U32(ctx, 31, 0x2EB4DCu);
    ctx->pc = 0x2EB4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB4D4u;
            // 0x2eb4d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB4DCu; }
        if (ctx->pc != 0x2EB4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB4DCu; }
        if (ctx->pc != 0x2EB4DCu) { return; }
    }
    ctx->pc = 0x2EB4DCu;
label_2eb4dc:
    // 0x2eb4dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb4e0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb4e4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb4e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb4e8: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x2eb4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2eb4ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb4ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb4f0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb4f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb4f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb4f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb4f8: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB4F8u;
    SET_GPR_U32(ctx, 31, 0x2EB500u);
    ctx->pc = 0x2EB4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB4F8u;
            // 0x2eb4fc: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB500u; }
        if (ctx->pc != 0x2EB500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB500u; }
        if (ctx->pc != 0x2EB500u) { return; }
    }
    ctx->pc = 0x2EB500u;
label_2eb500:
    // 0x2eb500: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb504: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb508: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb508u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb50c: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eb50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eb510: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb514: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb518: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb518u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb51c: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB51Cu;
    SET_GPR_U32(ctx, 31, 0x2EB524u);
    ctx->pc = 0x2EB520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB51Cu;
            // 0x2eb520: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB524u; }
        if (ctx->pc != 0x2EB524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB524u; }
        if (ctx->pc != 0x2EB524u) { return; }
    }
    ctx->pc = 0x2EB524u;
label_2eb524:
    // 0x2eb524: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb528: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb52c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb52cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb530: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb534: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eb534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eb538: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb53c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb53cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb540: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB540u;
    SET_GPR_U32(ctx, 31, 0x2EB548u);
    ctx->pc = 0x2EB544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB540u;
            // 0x2eb544: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB548u; }
        if (ctx->pc != 0x2EB548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB548u; }
        if (ctx->pc != 0x2EB548u) { return; }
    }
    ctx->pc = 0x2EB548u;
label_2eb548:
    // 0x2eb548: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x2EB548u;
    {
        const bool branch_taken_0x2eb548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb548) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB550u;
label_2eb550:
    // 0x2eb550: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EB550u;
    {
        const bool branch_taken_0x2eb550 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb550) {
            ctx->pc = 0x2EB578u;
            goto label_2eb578;
        }
    }
    ctx->pc = 0x2EB558u;
    // 0x2eb558: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb55c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb560: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb560u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb564: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x2eb564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2eb568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb56c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb56cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb570: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB570u;
    SET_GPR_U32(ctx, 31, 0x2EB578u);
    ctx->pc = 0x2EB574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB570u;
            // 0x2eb574: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB578u; }
        if (ctx->pc != 0x2EB578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB578u; }
        if (ctx->pc != 0x2EB578u) { return; }
    }
    ctx->pc = 0x2EB578u;
label_2eb578:
    // 0x2eb578: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb57c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb580: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb580u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb584: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x2eb584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2eb588: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb58c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb58cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb590: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb590u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb594: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB594u;
    SET_GPR_U32(ctx, 31, 0x2EB59Cu);
    ctx->pc = 0x2EB598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB594u;
            // 0x2eb598: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB59Cu; }
        if (ctx->pc != 0x2EB59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB59Cu; }
        if (ctx->pc != 0x2EB59Cu) { return; }
    }
    ctx->pc = 0x2EB59Cu;
label_2eb59c:
    // 0x2eb59c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb5a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb5a4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb5a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb5a8: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2eb5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2eb5ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb5acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb5b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb5b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb5b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb5b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb5b8: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB5B8u;
    SET_GPR_U32(ctx, 31, 0x2EB5C0u);
    ctx->pc = 0x2EB5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB5B8u;
            // 0x2eb5bc: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB5C0u; }
        if (ctx->pc != 0x2EB5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB5C0u; }
        if (ctx->pc != 0x2EB5C0u) { return; }
    }
    ctx->pc = 0x2EB5C0u;
label_2eb5c0:
    // 0x2eb5c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb5c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb5c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb5c8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb5c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb5cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb5d0: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x2eb5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2eb5d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb5d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb5d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb5dc: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB5DCu;
    SET_GPR_U32(ctx, 31, 0x2EB5E4u);
    ctx->pc = 0x2EB5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB5DCu;
            // 0x2eb5e0: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB5E4u; }
        if (ctx->pc != 0x2EB5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB5E4u; }
        if (ctx->pc != 0x2EB5E4u) { return; }
    }
    ctx->pc = 0x2EB5E4u;
label_2eb5e4:
    // 0x2eb5e4: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x2EB5E4u;
    {
        const bool branch_taken_0x2eb5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb5e4) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB5ECu;
label_2eb5ec:
    // 0x2eb5ec: 0x10aa0056  beq         $a1, $t2, . + 4 + (0x56 << 2)
    ctx->pc = 0x2EB5ECu;
    {
        const bool branch_taken_0x2eb5ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        if (branch_taken_0x2eb5ec) {
            ctx->pc = 0x2EB748u;
            goto label_2eb748;
        }
    }
    ctx->pc = 0x2EB5F4u;
    // 0x2eb5f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eb5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb5f8: 0x10a3002c  beq         $a1, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2EB5F8u;
    {
        const bool branch_taken_0x2eb5f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb5f8) {
            ctx->pc = 0x2EB6ACu;
            goto label_2eb6ac;
        }
    }
    ctx->pc = 0x2EB600u;
    // 0x2eb600: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB600u;
    {
        const bool branch_taken_0x2eb600 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb600) {
            ctx->pc = 0x2EB610u;
            goto label_2eb610;
        }
    }
    ctx->pc = 0x2EB608u;
    // 0x2eb608: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x2EB608u;
    {
        const bool branch_taken_0x2eb608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb608) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB610u;
label_2eb610:
    // 0x2eb610: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EB610u;
    {
        const bool branch_taken_0x2eb610 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb610) {
            ctx->pc = 0x2EB638u;
            goto label_2eb638;
        }
    }
    ctx->pc = 0x2EB618u;
    // 0x2eb618: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb61c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb620: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb620u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb624: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x2eb624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2eb628: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb62c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb62cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb630: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB630u;
    SET_GPR_U32(ctx, 31, 0x2EB638u);
    ctx->pc = 0x2EB634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB630u;
            // 0x2eb634: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB638u; }
        if (ctx->pc != 0x2EB638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB638u; }
        if (ctx->pc != 0x2EB638u) { return; }
    }
    ctx->pc = 0x2EB638u;
label_2eb638:
    // 0x2eb638: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb63c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb640: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb640u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb644: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x2eb644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2eb648: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb64c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb64cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb650: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb650u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb654: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB654u;
    SET_GPR_U32(ctx, 31, 0x2EB65Cu);
    ctx->pc = 0x2EB658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB654u;
            // 0x2eb658: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB65Cu; }
        if (ctx->pc != 0x2EB65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB65Cu; }
        if (ctx->pc != 0x2EB65Cu) { return; }
    }
    ctx->pc = 0x2EB65Cu;
label_2eb65c:
    // 0x2eb65c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb660: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb664: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb664u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb668: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eb668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eb66c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb670: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb674: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb674u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb678: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB678u;
    SET_GPR_U32(ctx, 31, 0x2EB680u);
    ctx->pc = 0x2EB67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB678u;
            // 0x2eb67c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB680u; }
        if (ctx->pc != 0x2EB680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB680u; }
        if (ctx->pc != 0x2EB680u) { return; }
    }
    ctx->pc = 0x2EB680u;
label_2eb680:
    // 0x2eb680: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb684: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb688: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb688u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb68c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb690: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2eb690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2eb694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb698: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb698u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb69c: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB69Cu;
    SET_GPR_U32(ctx, 31, 0x2EB6A4u);
    ctx->pc = 0x2EB6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB69Cu;
            // 0x2eb6a0: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB6A4u; }
        if (ctx->pc != 0x2EB6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB6A4u; }
        if (ctx->pc != 0x2EB6A4u) { return; }
    }
    ctx->pc = 0x2EB6A4u;
label_2eb6a4:
    // 0x2eb6a4: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x2EB6A4u;
    {
        const bool branch_taken_0x2eb6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb6a4) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB6ACu;
label_2eb6ac:
    // 0x2eb6ac: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EB6ACu;
    {
        const bool branch_taken_0x2eb6ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb6ac) {
            ctx->pc = 0x2EB6D4u;
            goto label_2eb6d4;
        }
    }
    ctx->pc = 0x2EB6B4u;
    // 0x2eb6b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb6b8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb6bc: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb6c0: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x2eb6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2eb6c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb6c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb6c8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb6c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb6cc: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB6CCu;
    SET_GPR_U32(ctx, 31, 0x2EB6D4u);
    ctx->pc = 0x2EB6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB6CCu;
            // 0x2eb6d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB6D4u; }
        if (ctx->pc != 0x2EB6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB6D4u; }
        if (ctx->pc != 0x2EB6D4u) { return; }
    }
    ctx->pc = 0x2EB6D4u;
label_2eb6d4:
    // 0x2eb6d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb6d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb6dc: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb6e0: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x2eb6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2eb6e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb6e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb6e8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb6e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb6ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb6ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb6f0: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB6F0u;
    SET_GPR_U32(ctx, 31, 0x2EB6F8u);
    ctx->pc = 0x2EB6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB6F0u;
            // 0x2eb6f4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB6F8u; }
        if (ctx->pc != 0x2EB6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB6F8u; }
        if (ctx->pc != 0x2EB6F8u) { return; }
    }
    ctx->pc = 0x2EB6F8u;
label_2eb6f8:
    // 0x2eb6f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb6fc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb700: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb700u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb704: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eb704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eb708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb70c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb70cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb710: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb710u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb714: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB714u;
    SET_GPR_U32(ctx, 31, 0x2EB71Cu);
    ctx->pc = 0x2EB718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB714u;
            // 0x2eb718: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB71Cu; }
        if (ctx->pc != 0x2EB71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB71Cu; }
        if (ctx->pc != 0x2EB71Cu) { return; }
    }
    ctx->pc = 0x2EB71Cu;
label_2eb71c:
    // 0x2eb71c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb720: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb724: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb724u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb728: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb72c: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2eb72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2eb730: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb734: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb734u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb738: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB738u;
    SET_GPR_U32(ctx, 31, 0x2EB740u);
    ctx->pc = 0x2EB73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB738u;
            // 0x2eb73c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB740u; }
        if (ctx->pc != 0x2EB740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB740u; }
        if (ctx->pc != 0x2EB740u) { return; }
    }
    ctx->pc = 0x2EB740u;
label_2eb740:
    // 0x2eb740: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x2EB740u;
    {
        const bool branch_taken_0x2eb740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb740) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB748u;
label_2eb748:
    // 0x2eb748: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EB748u;
    {
        const bool branch_taken_0x2eb748 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb748) {
            ctx->pc = 0x2EB770u;
            goto label_2eb770;
        }
    }
    ctx->pc = 0x2EB750u;
    // 0x2eb750: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb754: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb758: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb758u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb75c: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x2eb75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2eb760: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb764: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb768: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB768u;
    SET_GPR_U32(ctx, 31, 0x2EB770u);
    ctx->pc = 0x2EB76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB768u;
            // 0x2eb76c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB770u; }
        if (ctx->pc != 0x2EB770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB770u; }
        if (ctx->pc != 0x2EB770u) { return; }
    }
    ctx->pc = 0x2EB770u;
label_2eb770:
    // 0x2eb770: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb774: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb778: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb778u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb77c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb780: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x2eb780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2eb784: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb788: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb788u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb78c: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB78Cu;
    SET_GPR_U32(ctx, 31, 0x2EB794u);
    ctx->pc = 0x2EB790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB78Cu;
            // 0x2eb790: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB794u; }
        if (ctx->pc != 0x2EB794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB794u; }
        if (ctx->pc != 0x2EB794u) { return; }
    }
    ctx->pc = 0x2EB794u;
label_2eb794:
    // 0x2eb794: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x2EB794u;
    {
        const bool branch_taken_0x2eb794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb794) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB79Cu;
label_2eb79c:
    // 0x2eb79c: 0x50a30031  beql        $a1, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2EB79Cu;
    {
        const bool branch_taken_0x2eb79c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb79c) {
            ctx->pc = 0x2EB7A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB79Cu;
            // 0x2eb7a0: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB864u;
            goto label_2eb864;
        }
    }
    ctx->pc = 0x2EB7A4u;
    // 0x2eb7a4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB7A4u;
    {
        const bool branch_taken_0x2eb7a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb7a4) {
            ctx->pc = 0x2EB7B4u;
            goto label_2eb7b4;
        }
    }
    ctx->pc = 0x2EB7ACu;
    // 0x2eb7ac: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x2EB7ACu;
    {
        const bool branch_taken_0x2eb7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb7ac) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB7B4u;
label_2eb7b4:
    // 0x2eb7b4: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2EB7B4u;
    {
        const bool branch_taken_0x2eb7b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb7b4) {
            ctx->pc = 0x2EB7B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB7B4u;
            // 0x2eb7b8: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EB7E8u;
            goto label_2eb7e8;
        }
    }
    ctx->pc = 0x2EB7BCu;
    // 0x2eb7bc: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2eb7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eb7c0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb7c4: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2eb7c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2eb7c8: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x2eb7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2eb7cc: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x2eb7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2eb7d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2eb7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb7d4: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x2eb7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2eb7d8: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x2eb7d8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x2eb7dc: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x2EB7DCu;
    SET_GPR_U32(ctx, 31, 0x2EB7E4u);
    ctx->pc = 0x2EB7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB7DCu;
            // 0x2eb7e0: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB7E4u; }
        if (ctx->pc != 0x2EB7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB7E4u; }
        if (ctx->pc != 0x2EB7E4u) { return; }
    }
    ctx->pc = 0x2EB7E4u;
label_2eb7e4:
    // 0x2eb7e4: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2eb7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2eb7e8:
    // 0x2eb7e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb7ec: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2eb7ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2eb7f0: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x2eb7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2eb7f4: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x2eb7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2eb7f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2eb7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb7fc: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x2eb7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2eb800: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x2eb800u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x2eb804: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x2EB804u;
    SET_GPR_U32(ctx, 31, 0x2EB80Cu);
    ctx->pc = 0x2EB808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB804u;
            // 0x2eb808: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB80Cu; }
        if (ctx->pc != 0x2EB80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB80Cu; }
        if (ctx->pc != 0x2EB80Cu) { return; }
    }
    ctx->pc = 0x2EB80Cu;
label_2eb80c:
    // 0x2eb80c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2eb80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eb810: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb814: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2eb814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2eb818: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eb818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eb81c: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x2eb81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2eb820: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2eb820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb824: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x2eb824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2eb828: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x2eb828u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x2eb82c: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x2EB82Cu;
    SET_GPR_U32(ctx, 31, 0x2EB834u);
    ctx->pc = 0x2EB830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB82Cu;
            // 0x2eb830: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB834u; }
        if (ctx->pc != 0x2EB834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB834u; }
        if (ctx->pc != 0x2EB834u) { return; }
    }
    ctx->pc = 0x2EB834u;
label_2eb834:
    // 0x2eb834: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2eb834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eb838: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb83c: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2eb83cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2eb840: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eb840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eb844: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x2eb844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2eb848: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2eb848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb84c: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x2eb84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2eb850: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x2eb850u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x2eb854: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x2EB854u;
    SET_GPR_U32(ctx, 31, 0x2EB85Cu);
    ctx->pc = 0x2EB858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB854u;
            // 0x2eb858: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB85Cu; }
        if (ctx->pc != 0x2EB85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB85Cu; }
        if (ctx->pc != 0x2EB85Cu) { return; }
    }
    ctx->pc = 0x2EB85Cu;
label_2eb85c:
    // 0x2eb85c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x2EB85Cu;
    {
        const bool branch_taken_0x2eb85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb85c) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB864u;
label_2eb864:
    // 0x2eb864: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb868: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2eb868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2eb86c: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x2eb86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2eb870: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x2eb870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2eb874: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2eb874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb878: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x2eb878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2eb87c: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x2eb87cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x2eb880: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x2EB880u;
    SET_GPR_U32(ctx, 31, 0x2EB888u);
    ctx->pc = 0x2EB884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB880u;
            // 0x2eb884: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB888u; }
        if (ctx->pc != 0x2EB888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB888u; }
        if (ctx->pc != 0x2EB888u) { return; }
    }
    ctx->pc = 0x2EB888u;
label_2eb888:
    // 0x2eb888: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2EB888u;
    {
        const bool branch_taken_0x2eb888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb888) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB890u;
label_2eb890:
    // 0x2eb890: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eb890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb894: 0x10a3002d  beq         $a1, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2EB894u;
    {
        const bool branch_taken_0x2eb894 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb894) {
            ctx->pc = 0x2EB94Cu;
            goto label_2eb94c;
        }
    }
    ctx->pc = 0x2EB89Cu;
    // 0x2eb89c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB89Cu;
    {
        const bool branch_taken_0x2eb89c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb89c) {
            ctx->pc = 0x2EB8ACu;
            goto label_2eb8ac;
        }
    }
    ctx->pc = 0x2EB8A4u;
    // 0x2eb8a4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2EB8A4u;
    {
        const bool branch_taken_0x2eb8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb8a4) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB8ACu;
label_2eb8ac:
    // 0x2eb8ac: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EB8ACu;
    {
        const bool branch_taken_0x2eb8ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb8ac) {
            ctx->pc = 0x2EB8D8u;
            goto label_2eb8d8;
        }
    }
    ctx->pc = 0x2EB8B4u;
    // 0x2eb8b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb8b8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb8bc: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb8bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb8c0: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x2eb8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2eb8c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb8c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb8c8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb8c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb8cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb8ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb8d0: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB8D0u;
    SET_GPR_U32(ctx, 31, 0x2EB8D8u);
    ctx->pc = 0x2EB8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB8D0u;
            // 0x2eb8d4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB8D8u; }
        if (ctx->pc != 0x2EB8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB8D8u; }
        if (ctx->pc != 0x2EB8D8u) { return; }
    }
    ctx->pc = 0x2EB8D8u;
label_2eb8d8:
    // 0x2eb8d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb8dc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb8e0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb8e4: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x2eb8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2eb8e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb8ec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb8ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb8f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb8f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb8f4: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB8F4u;
    SET_GPR_U32(ctx, 31, 0x2EB8FCu);
    ctx->pc = 0x2EB8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB8F4u;
            // 0x2eb8f8: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB8FCu; }
        if (ctx->pc != 0x2EB8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB8FCu; }
        if (ctx->pc != 0x2EB8FCu) { return; }
    }
    ctx->pc = 0x2EB8FCu;
label_2eb8fc:
    // 0x2eb8fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb900: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb904: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb904u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb908: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eb908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eb90c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb90cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb910: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb914: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb914u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb918: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB918u;
    SET_GPR_U32(ctx, 31, 0x2EB920u);
    ctx->pc = 0x2EB91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB918u;
            // 0x2eb91c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB920u; }
        if (ctx->pc != 0x2EB920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB920u; }
        if (ctx->pc != 0x2EB920u) { return; }
    }
    ctx->pc = 0x2EB920u;
label_2eb920:
    // 0x2eb920: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb924: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb928: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb928u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb92c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb930: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2eb930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2eb934: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb938: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb938u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb93c: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB93Cu;
    SET_GPR_U32(ctx, 31, 0x2EB944u);
    ctx->pc = 0x2EB940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB93Cu;
            // 0x2eb940: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB944u; }
        if (ctx->pc != 0x2EB944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB944u; }
        if (ctx->pc != 0x2EB944u) { return; }
    }
    ctx->pc = 0x2EB944u;
label_2eb944:
    // 0x2eb944: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2EB944u;
    {
        const bool branch_taken_0x2eb944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb944) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB94Cu;
label_2eb94c:
    // 0x2eb94c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb950: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb954: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb954u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb958: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb95c: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x2eb95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2eb960: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb964: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb964u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb968: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB968u;
    SET_GPR_U32(ctx, 31, 0x2EB970u);
    ctx->pc = 0x2EB96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB968u;
            // 0x2eb96c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB970u; }
        if (ctx->pc != 0x2EB970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB970u; }
        if (ctx->pc != 0x2EB970u) { return; }
    }
    ctx->pc = 0x2EB970u;
label_2eb970:
    // 0x2eb970: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2EB970u;
    {
        const bool branch_taken_0x2eb970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb970) {
            ctx->pc = 0x2EBA08u;
            goto label_2eba08;
        }
    }
    ctx->pc = 0x2EB978u;
label_2eb978:
    // 0x2eb978: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EB978u;
    {
        const bool branch_taken_0x2eb978 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb978) {
            ctx->pc = 0x2EB99Cu;
            goto label_2eb99c;
        }
    }
    ctx->pc = 0x2EB980u;
    // 0x2eb980: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb984: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x2eb984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2eb988: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb988u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb98c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb98cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb990: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb994: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB994u;
    SET_GPR_U32(ctx, 31, 0x2EB99Cu);
    ctx->pc = 0x2EB998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB994u;
            // 0x2eb998: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB99Cu; }
        if (ctx->pc != 0x2EB99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB99Cu; }
        if (ctx->pc != 0x2EB99Cu) { return; }
    }
    ctx->pc = 0x2EB99Cu;
label_2eb99c:
    // 0x2eb99c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb9a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb9a4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb9a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb9a8: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x2eb9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2eb9ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb9b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb9b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb9b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb9b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb9b8: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB9B8u;
    SET_GPR_U32(ctx, 31, 0x2EB9C0u);
    ctx->pc = 0x2EB9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB9B8u;
            // 0x2eb9bc: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB9C0u; }
        if (ctx->pc != 0x2EB9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB9C0u; }
        if (ctx->pc != 0x2EB9C0u) { return; }
    }
    ctx->pc = 0x2EB9C0u;
label_2eb9c0:
    // 0x2eb9c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb9c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb9c8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb9c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb9cc: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x2eb9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eb9d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb9d4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb9d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb9d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb9d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb9dc: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EB9DCu;
    SET_GPR_U32(ctx, 31, 0x2EB9E4u);
    ctx->pc = 0x2EB9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB9DCu;
            // 0x2eb9e0: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB9E4u; }
        if (ctx->pc != 0x2EB9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB9E4u; }
        if (ctx->pc != 0x2EB9E4u) { return; }
    }
    ctx->pc = 0x2EB9E4u;
label_2eb9e4:
    // 0x2eb9e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eb9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eb9e8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2eb9e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb9ec: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2eb9ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eb9f0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eb9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb9f4: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x2eb9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2eb9f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb9fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb9fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eba00: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EBA00u;
    SET_GPR_U32(ctx, 31, 0x2EBA08u);
    ctx->pc = 0x2EBA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBA00u;
            // 0x2eba04: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBA08u; }
        if (ctx->pc != 0x2EBA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBA08u; }
        if (ctx->pc != 0x2EBA08u) { return; }
    }
    ctx->pc = 0x2EBA08u;
label_2eba08:
    // 0x2eba08: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2eba08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2eba0c: 0x8c7014b0  lw          $s0, 0x14B0($v1)
    ctx->pc = 0x2eba0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5296)));
    // 0x2eba10: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EBA10u;
    {
        const bool branch_taken_0x2eba10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eba10) {
            ctx->pc = 0x2EBA48u;
            goto label_2eba48;
        }
    }
    ctx->pc = 0x2EBA18u;
    // 0x2eba18: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eba18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eba1c: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x2eba1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
    // 0x2eba20: 0x8c521ce8  lw          $s2, 0x1CE8($v0)
    ctx->pc = 0x2eba20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7400)));
    // 0x2eba24: 0x263114c0  addiu       $s1, $s1, 0x14C0
    ctx->pc = 0x2eba24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5312));
label_2eba28:
    // 0x2eba28: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2eba28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eba2c: 0xc15a838  jal         func_56A0E0
    ctx->pc = 0x2EBA2Cu;
    SET_GPR_U32(ctx, 31, 0x2EBA34u);
    ctx->pc = 0x2EBA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBA2Cu;
            // 0x2eba30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x56A0E0u;
    if (runtime->hasFunction(0x56A0E0u)) {
        auto targetFn = runtime->lookupFunction(0x56A0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBA34u; }
        if (ctx->pc != 0x2EBA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0056A0E0_0x56a0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBA34u; }
        if (ctx->pc != 0x2EBA34u) { return; }
    }
    ctx->pc = 0x2EBA34u;
label_2eba34:
    // 0x2eba34: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2eba34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2eba38: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2eba38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2eba3c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EBA3Cu;
    {
        const bool branch_taken_0x2eba3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eba3c) {
            ctx->pc = 0x2EBA28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eba28;
        }
    }
    ctx->pc = 0x2EBA44u;
    // 0x2eba44: 0x0  nop
    ctx->pc = 0x2eba44u;
    // NOP
label_2eba48:
    // 0x2eba48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2eba48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eba4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2eba4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eba50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2eba50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eba54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2eba54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eba58: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBA58u;
            // 0x2eba5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EBA60u;
}
