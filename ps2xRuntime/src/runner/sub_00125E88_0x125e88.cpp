#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125E88
// Address: 0x125e88 - 0x125f40
void sub_00125E88_0x125e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125E88_0x125e88");
#endif

    switch (ctx->pc) {
        case 0x125ea4u: goto label_125ea4;
        case 0x125ed8u: goto label_125ed8;
        default: break;
    }

    ctx->pc = 0x125e88u;

    // 0x125e88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x125e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x125e8c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x125e8cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e94: 0xffaf0020  sd          $t7, 0x20($sp)
    ctx->pc = 0x125e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 15));
    // 0x125e98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x125e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x125e9c: 0xc04955a  jal         func_125568
    ctx->pc = 0x125E9Cu;
    SET_GPR_U32(ctx, 31, 0x125EA4u);
    ctx->pc = 0x125EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125E9Cu;
            // 0x125ea0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125568u;
    if (runtime->hasFunction(0x125568u)) {
        auto targetFn = runtime->lookupFunction(0x125568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125EA4u; }
        if (ctx->pc != 0x125EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125568_0x125568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125EA4u; }
        if (ctx->pc != 0x125EA4u) { return; }
    }
    ctx->pc = 0x125EA4u;
label_125ea4:
    // 0x125ea4: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x125ea4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125ea8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x125ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125eac: 0x39cf0002  xori        $t7, $t6, 0x2
    ctx->pc = 0x125eacu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
    // 0x125eb0: 0x11e00009  beqz        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x125EB0u;
    {
        const bool branch_taken_0x125eb0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125EB0u;
            // 0x125eb4: 0x2dcd0002  sltiu       $t5, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125eb0) {
            ctx->pc = 0x125ED8u;
            goto label_125ed8;
        }
    }
    ctx->pc = 0x125EB8u;
    // 0x125eb8: 0x15a00007  bnez        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x125EB8u;
    {
        const bool branch_taken_0x125eb8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x125EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125EB8u;
            // 0x125ebc: 0x39cf0004  xori        $t7, $t6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125eb8) {
            ctx->pc = 0x125ED8u;
            goto label_125ed8;
        }
    }
    ctx->pc = 0x125EC0u;
    // 0x125ec0: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x125ec0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x125ec4: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x125EC4u;
    {
        const bool branch_taken_0x125ec4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125EC4u;
            // 0x125ec8: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ec4) {
            ctx->pc = 0x125EE8u;
            goto label_125ee8;
        }
    }
    ctx->pc = 0x125ECCu;
    // 0x125ecc: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x125eccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x125ed0: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x125ed0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x125ed4: 0x1cf100a  movz        $v0, $t6, $t7
    ctx->pc = 0x125ed4u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
label_125ed8:
    // 0x125ed8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x125ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125edc: 0x3e00008  jr          $ra
    ctx->pc = 0x125EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125EDCu;
            // 0x125ee0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125EE4u;
    // 0x125ee4: 0x0  nop
    ctx->pc = 0x125ee4u;
    // NOP
label_125ee8:
    // 0x125ee8: 0x8fae0008  lw          $t6, 0x8($sp)
    ctx->pc = 0x125ee8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125eec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x125eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ef0: 0x5c0fff9  bltz        $t6, . + 4 + (-0x7 << 2)
    ctx->pc = 0x125EF0u;
    {
        const bool branch_taken_0x125ef0 = (GPR_S32(ctx, 14) < 0);
        ctx->pc = 0x125EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125EF0u;
            // 0x125ef4: 0x29cf001f  slti        $t7, $t6, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ef0) {
            ctx->pc = 0x125ED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125ed8;
        }
    }
    ctx->pc = 0x125EF8u;
    // 0x125ef8: 0x3c0d7fff  lui         $t5, 0x7FFF
    ctx->pc = 0x125ef8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32767 << 16));
    // 0x125efc: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x125EFCu;
    {
        const bool branch_taken_0x125efc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125EFCu;
            // 0x125f00: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125efc) {
            ctx->pc = 0x125F14u;
            goto label_125f14;
        }
    }
    ctx->pc = 0x125F04u;
    // 0x125f04: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x125f04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x125f08: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x125f08u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x125f0c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x125F0Cu;
    {
        const bool branch_taken_0x125f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125F0Cu;
            // 0x125f10: 0x1af100a  movz        $v0, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f0c) {
            ctx->pc = 0x125ED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125ed8;
        }
    }
    ctx->pc = 0x125F14u;
label_125f14:
    // 0x125f14: 0x240f003c  addiu       $t7, $zero, 0x3C
    ctx->pc = 0x125f14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x125f18: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x125f18u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x125f1c: 0xdfae0010  ld          $t6, 0x10($sp)
    ctx->pc = 0x125f1cu;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125f20: 0x1ee7016  dsrlv       $t6, $t6, $t7
    ctx->pc = 0x125f20u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (GPR_U32(ctx, 15) & 0x3F));
    // 0x125f24: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x125f24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x125f28: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x125f28u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x125f2c: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x125f2cu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x125f30: 0xe6823  negu        $t5, $t6
    ctx->pc = 0x125f30u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 14)));
    // 0x125f34: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x125f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f38: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x125F38u;
    {
        const bool branch_taken_0x125f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125F38u;
            // 0x125f3c: 0x1af100b  movn        $v0, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f38) {
            ctx->pc = 0x125ED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125ed8;
        }
    }
    ctx->pc = 0x125F40u;
}
