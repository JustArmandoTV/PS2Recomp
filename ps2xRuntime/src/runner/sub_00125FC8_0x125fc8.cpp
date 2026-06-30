#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125FC8
// Address: 0x125fc8 - 0x126068
void sub_00125FC8_0x125fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125FC8_0x125fc8");
#endif

    switch (ctx->pc) {
        case 0x125fe4u: goto label_125fe4;
        case 0x126040u: goto label_126040;
        default: break;
    }

    ctx->pc = 0x125fc8u;

    // 0x125fc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x125fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x125fcc: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x125fccu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fd0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fd4: 0xffaf0020  sd          $t7, 0x20($sp)
    ctx->pc = 0x125fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 15));
    // 0x125fd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x125fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x125fdc: 0xc04955a  jal         func_125568
    ctx->pc = 0x125FDCu;
    SET_GPR_U32(ctx, 31, 0x125FE4u);
    ctx->pc = 0x125FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125FDCu;
            // 0x125fe0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125568u;
    if (runtime->hasFunction(0x125568u)) {
        auto targetFn = runtime->lookupFunction(0x125568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125FE4u; }
        if (ctx->pc != 0x125FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125568_0x125568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125FE4u; }
        if (ctx->pc != 0x125FE4u) { return; }
    }
    ctx->pc = 0x125FE4u;
label_125fe4:
    // 0x125fe4: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x125fe4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125fe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x125fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fec: 0x39cf0002  xori        $t7, $t6, 0x2
    ctx->pc = 0x125fecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
    // 0x125ff0: 0x11e00015  beqz        $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x125FF0u;
    {
        const bool branch_taken_0x125ff0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125FF0u;
            // 0x125ff4: 0x2dcd0002  sltiu       $t5, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ff0) {
            ctx->pc = 0x126048u;
            goto label_126048;
        }
    }
    ctx->pc = 0x125FF8u;
    // 0x125ff8: 0x15a00014  bnez        $t5, . + 4 + (0x14 << 2)
    ctx->pc = 0x125FF8u;
    {
        const bool branch_taken_0x125ff8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x125FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125FF8u;
            // 0x125ffc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ff8) {
            ctx->pc = 0x12604Cu;
            goto label_12604c;
        }
    }
    ctx->pc = 0x126000u;
    // 0x126000: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x126000u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x126004: 0x15e00011  bnez        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x126004u;
    {
        const bool branch_taken_0x126004 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126004u;
            // 0x126008: 0x39ce0004  xori        $t6, $t6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126004) {
            ctx->pc = 0x12604Cu;
            goto label_12604c;
        }
    }
    ctx->pc = 0x12600Cu;
    // 0x12600c: 0x11c0000f  beqz        $t6, . + 4 + (0xF << 2)
    ctx->pc = 0x12600Cu;
    {
        const bool branch_taken_0x12600c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x126010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12600Cu;
            // 0x126010: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12600c) {
            ctx->pc = 0x12604Cu;
            goto label_12604c;
        }
    }
    ctx->pc = 0x126014u;
    // 0x126014: 0x8faf0008  lw          $t7, 0x8($sp)
    ctx->pc = 0x126014u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126018: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x126018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12601c: 0x5e0000b  bltz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12601Cu;
    {
        const bool branch_taken_0x12601c = (GPR_S32(ctx, 15) < 0);
        ctx->pc = 0x126020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12601Cu;
            // 0x126020: 0x29ee0020  slti        $t6, $t7, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12601c) {
            ctx->pc = 0x12604Cu;
            goto label_12604c;
        }
    }
    ctx->pc = 0x126024u;
    // 0x126024: 0x29ed003d  slti        $t5, $t7, 0x3D
    ctx->pc = 0x126024u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x126028: 0x11c00008  beqz        $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x126028u;
    {
        const bool branch_taken_0x126028 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12602Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126028u;
            // 0x12602c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126028) {
            ctx->pc = 0x12604Cu;
            goto label_12604c;
        }
    }
    ctx->pc = 0x126030u;
    // 0x126030: 0x15a00008  bnez        $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x126030u;
    {
        const bool branch_taken_0x126030 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x126034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126030u;
            // 0x126034: 0x25eeffc4  addiu       $t6, $t7, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126030) {
            ctx->pc = 0x126054u;
            goto label_126054;
        }
    }
    ctx->pc = 0x126038u;
    // 0x126038: 0xdfaf0010  ld          $t7, 0x10($sp)
    ctx->pc = 0x126038u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12603c: 0x1cf7814  dsllv       $t7, $t7, $t6
    ctx->pc = 0x12603cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (GPR_U32(ctx, 14) & 0x3F));
label_126040:
    // 0x126040: 0xf103c  dsll32      $v0, $t7, 0
    ctx->pc = 0x126040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) << (32 + 0));
    // 0x126044: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x126044u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_126048:
    // 0x126048: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x126048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12604c:
    // 0x12604c: 0x3e00008  jr          $ra
    ctx->pc = 0x12604Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12604Cu;
            // 0x126050: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x126054u;
label_126054:
    // 0x126054: 0x240e003c  addiu       $t6, $zero, 0x3C
    ctx->pc = 0x126054u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x126058: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x126058u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12605c: 0xdfaf0010  ld          $t7, 0x10($sp)
    ctx->pc = 0x12605cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126060: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x126060u;
    {
        const bool branch_taken_0x126060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126060u;
            // 0x126064: 0x1cf7816  dsrlv       $t7, $t7, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (GPR_U32(ctx, 14) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126060) {
            ctx->pc = 0x126040u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126040;
        }
    }
    ctx->pc = 0x126068u;
}
