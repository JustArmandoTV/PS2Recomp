#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00206F90
// Address: 0x206f90 - 0x207150
void sub_00206F90_0x206f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206F90_0x206f90");
#endif

    ctx->pc = 0x206f90u;

    // 0x206f90: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x206f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x206f94: 0x2c410023  sltiu       $at, $v0, 0x23
    ctx->pc = 0x206f94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x206f98: 0x10200068  beqz        $at, . + 4 + (0x68 << 2)
    ctx->pc = 0x206F98u;
    {
        const bool branch_taken_0x206f98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x206f98) {
            ctx->pc = 0x20713Cu;
            goto label_20713c;
        }
    }
    ctx->pc = 0x206FA0u;
    // 0x206fa0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x206fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x206fa4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x206fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x206fa8: 0x2463e0a0  addiu       $v1, $v1, -0x1F60
    ctx->pc = 0x206fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959264));
    // 0x206fac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206fb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x206fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206fb4: 0x400008  jr          $v0
    ctx->pc = 0x206FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206FBCu: goto label_206fbc;
            case 0x206FC8u: goto label_206fc8;
            case 0x206FD4u: goto label_206fd4;
            case 0x206FE0u: goto label_206fe0;
            case 0x206FECu: goto label_206fec;
            case 0x206FF8u: goto label_206ff8;
            case 0x207004u: goto label_207004;
            case 0x207010u: goto label_207010;
            case 0x20701Cu: goto label_20701c;
            case 0x207028u: goto label_207028;
            case 0x207034u: goto label_207034;
            case 0x207040u: goto label_207040;
            case 0x20704Cu: goto label_20704c;
            case 0x207058u: goto label_207058;
            case 0x207064u: goto label_207064;
            case 0x207070u: goto label_207070;
            case 0x20707Cu: goto label_20707c;
            case 0x207088u: goto label_207088;
            case 0x207094u: goto label_207094;
            case 0x2070A0u: goto label_2070a0;
            case 0x2070ACu: goto label_2070ac;
            case 0x2070B8u: goto label_2070b8;
            case 0x2070C4u: goto label_2070c4;
            case 0x2070D0u: goto label_2070d0;
            case 0x2070DCu: goto label_2070dc;
            case 0x2070E8u: goto label_2070e8;
            case 0x2070F4u: goto label_2070f4;
            case 0x207100u: goto label_207100;
            case 0x20710Cu: goto label_20710c;
            case 0x207118u: goto label_207118;
            case 0x207124u: goto label_207124;
            case 0x207130u: goto label_207130;
            case 0x20713Cu: goto label_20713c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206FBCu;
label_206fbc:
    // 0x206fbc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x206fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x206fc0: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x206FC0u;
    {
        const bool branch_taken_0x206fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206FC0u;
            // 0x206fc4: 0x2442b828  addiu       $v0, $v0, -0x47D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206fc0) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x206FC8u;
label_206fc8:
    // 0x206fc8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x206fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x206fcc: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x206FCCu;
    {
        const bool branch_taken_0x206fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206FCCu;
            // 0x206fd0: 0x2442b840  addiu       $v0, $v0, -0x47C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206fcc) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x206FD4u;
label_206fd4:
    // 0x206fd4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x206fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x206fd8: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x206FD8u;
    {
        const bool branch_taken_0x206fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206FD8u;
            // 0x206fdc: 0x2442b850  addiu       $v0, $v0, -0x47B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206fd8) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x206FE0u;
label_206fe0:
    // 0x206fe0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x206fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x206fe4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x206FE4u;
    {
        const bool branch_taken_0x206fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206FE4u;
            // 0x206fe8: 0x2442b870  addiu       $v0, $v0, -0x4790 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206fe4) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x206FECu;
label_206fec:
    // 0x206fec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x206fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x206ff0: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x206FF0u;
    {
        const bool branch_taken_0x206ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206FF0u;
            // 0x206ff4: 0x2442b890  addiu       $v0, $v0, -0x4770 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ff0) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x206FF8u;
label_206ff8:
    // 0x206ff8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x206ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x206ffc: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x206FFCu;
    {
        const bool branch_taken_0x206ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206FFCu;
            // 0x207000: 0x2442b8a0  addiu       $v0, $v0, -0x4760 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ffc) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x207004u;
label_207004:
    // 0x207004: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x207004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x207008: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x207008u;
    {
        const bool branch_taken_0x207008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20700Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207008u;
            // 0x20700c: 0x2442b8b8  addiu       $v0, $v0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207008) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x207010u;
label_207010:
    // 0x207010: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x207010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x207014: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x207014u;
    {
        const bool branch_taken_0x207014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207014u;
            // 0x207018: 0x2442b8d0  addiu       $v0, $v0, -0x4730 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207014) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x20701Cu;
label_20701c:
    // 0x20701c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20701cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x207020: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x207020u;
    {
        const bool branch_taken_0x207020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207020u;
            // 0x207024: 0x2442b8f0  addiu       $v0, $v0, -0x4710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207020) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x207028u;
label_207028:
    // 0x207028: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x207028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x20702c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x20702Cu;
    {
        const bool branch_taken_0x20702c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20702Cu;
            // 0x207030: 0x2442b910  addiu       $v0, $v0, -0x46F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20702c) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x207034u;
label_207034:
    // 0x207034: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x207034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x207038: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x207038u;
    {
        const bool branch_taken_0x207038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20703Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207038u;
            // 0x20703c: 0x2442b930  addiu       $v0, $v0, -0x46D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207038) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x207040u;
label_207040:
    // 0x207040: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x207040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x207044: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x207044u;
    {
        const bool branch_taken_0x207044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207044u;
            // 0x207048: 0x2442b950  addiu       $v0, $v0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207044) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x20704Cu;
label_20704c:
    // 0x20704c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20704cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x207050: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x207050u;
    {
        const bool branch_taken_0x207050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207050u;
            // 0x207054: 0x2442b970  addiu       $v0, $v0, -0x4690 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207050) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x207058u;
label_207058:
    // 0x207058: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x207058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x20705c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x20705Cu;
    {
        const bool branch_taken_0x20705c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20705Cu;
            // 0x207060: 0x2442b988  addiu       $v0, $v0, -0x4678 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20705c) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x207064u;
label_207064:
    // 0x207064: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x207064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x207068: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x207068u;
    {
        const bool branch_taken_0x207068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20706Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207068u;
            // 0x20706c: 0x2442b9a0  addiu       $v0, $v0, -0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207068) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x207070u;
label_207070:
    // 0x207070: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x207070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x207074: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x207074u;
    {
        const bool branch_taken_0x207074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207074u;
            // 0x207078: 0x2442b9c0  addiu       $v0, $v0, -0x4640 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207074) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x20707Cu;
label_20707c:
    // 0x20707c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20707cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x207080: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x207080u;
    {
        const bool branch_taken_0x207080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207080u;
            // 0x207084: 0x2442b9e0  addiu       $v0, $v0, -0x4620 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207080) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x207088u;
label_207088:
    // 0x207088: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x207088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x20708c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x20708Cu;
    {
        const bool branch_taken_0x20708c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20708Cu;
            // 0x207090: 0x2442ba00  addiu       $v0, $v0, -0x4600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20708c) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x207094u;
label_207094:
    // 0x207094: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x207094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x207098: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x207098u;
    {
        const bool branch_taken_0x207098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20709Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207098u;
            // 0x20709c: 0x2442ba20  addiu       $v0, $v0, -0x45E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207098) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x2070A0u;
label_2070a0:
    // 0x2070a0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2070a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2070a4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2070A4u;
    {
        const bool branch_taken_0x2070a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2070A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2070A4u;
            // 0x2070a8: 0x2442ba40  addiu       $v0, $v0, -0x45C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070a4) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x2070ACu;
label_2070ac:
    // 0x2070ac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2070acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2070b0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2070B0u;
    {
        const bool branch_taken_0x2070b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2070B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2070B0u;
            // 0x2070b4: 0x2442ba60  addiu       $v0, $v0, -0x45A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070b0) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x2070B8u;
label_2070b8:
    // 0x2070b8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2070b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2070bc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2070BCu;
    {
        const bool branch_taken_0x2070bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2070C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2070BCu;
            // 0x2070c0: 0x2442ba80  addiu       $v0, $v0, -0x4580 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070bc) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x2070C4u;
label_2070c4:
    // 0x2070c4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2070c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2070c8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2070C8u;
    {
        const bool branch_taken_0x2070c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2070CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2070C8u;
            // 0x2070cc: 0x2442ba98  addiu       $v0, $v0, -0x4568 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070c8) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x2070D0u;
label_2070d0:
    // 0x2070d0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2070d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2070d4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2070D4u;
    {
        const bool branch_taken_0x2070d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2070D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2070D4u;
            // 0x2070d8: 0x2442baa8  addiu       $v0, $v0, -0x4558 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070d4) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x2070DCu;
label_2070dc:
    // 0x2070dc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2070dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2070e0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2070E0u;
    {
        const bool branch_taken_0x2070e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2070E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2070E0u;
            // 0x2070e4: 0x2442bab8  addiu       $v0, $v0, -0x4548 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070e0) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x2070E8u;
label_2070e8:
    // 0x2070e8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2070e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2070ec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2070ECu;
    {
        const bool branch_taken_0x2070ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2070F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2070ECu;
            // 0x2070f0: 0x2442bad0  addiu       $v0, $v0, -0x4530 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070ec) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x2070F4u;
label_2070f4:
    // 0x2070f4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2070f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2070f8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2070F8u;
    {
        const bool branch_taken_0x2070f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2070FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2070F8u;
            // 0x2070fc: 0x2442baf0  addiu       $v0, $v0, -0x4510 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070f8) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x207100u;
label_207100:
    // 0x207100: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x207100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x207104: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x207104u;
    {
        const bool branch_taken_0x207104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207104u;
            // 0x207108: 0x2442bb10  addiu       $v0, $v0, -0x44F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207104) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x20710Cu;
label_20710c:
    // 0x20710c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20710cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x207110: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x207110u;
    {
        const bool branch_taken_0x207110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207110u;
            // 0x207114: 0x2442bb30  addiu       $v0, $v0, -0x44D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207110) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x207118u;
label_207118:
    // 0x207118: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x207118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x20711c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20711Cu;
    {
        const bool branch_taken_0x20711c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20711Cu;
            // 0x207120: 0x2442bb50  addiu       $v0, $v0, -0x44B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20711c) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x207124u;
label_207124:
    // 0x207124: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x207124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x207128: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x207128u;
    {
        const bool branch_taken_0x207128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20712Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207128u;
            // 0x20712c: 0x2442bb60  addiu       $v0, $v0, -0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207128) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x207130u;
label_207130:
    // 0x207130: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x207130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x207134: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x207134u;
    {
        const bool branch_taken_0x207134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207134u;
            // 0x207138: 0x2442bb70  addiu       $v0, $v0, -0x4490 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207134) {
            ctx->pc = 0x207144u;
            goto label_207144;
        }
    }
    ctx->pc = 0x20713Cu;
label_20713c:
    // 0x20713c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20713cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x207140: 0x2442bb80  addiu       $v0, $v0, -0x4480
    ctx->pc = 0x207140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949760));
label_207144:
    // 0x207144: 0x3e00008  jr          $ra
    ctx->pc = 0x207144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20714Cu;
    // 0x20714c: 0x0  nop
    ctx->pc = 0x20714cu;
    // NOP
}
