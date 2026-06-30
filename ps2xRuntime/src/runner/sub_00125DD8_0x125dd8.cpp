#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125DD8
// Address: 0x125dd8 - 0x125e88
void sub_00125DD8_0x125dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125DD8_0x125dd8");
#endif

    switch (ctx->pc) {
        case 0x125dfcu: goto label_125dfc;
        case 0x125e04u: goto label_125e04;
        case 0x125e60u: goto label_125e60;
        default: break;
    }

    ctx->pc = 0x125dd8u;

    // 0x125dd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125ddc: 0x477c2  srl         $t6, $a0, 31
    ctx->pc = 0x125ddcu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x125de0: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x125de0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x125de4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x125de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x125de8: 0xafaf0000  sw          $t7, 0x0($sp)
    ctx->pc = 0x125de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
    // 0x125dec: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x125DECu;
    {
        const bool branch_taken_0x125dec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x125DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125DECu;
            // 0x125df0: 0xafae0004  sw          $t6, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125dec) {
            ctx->pc = 0x125E10u;
            goto label_125e10;
        }
    }
    ctx->pc = 0x125DF4u;
    // 0x125df4: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x125df4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125df8: 0xafaf0000  sw          $t7, 0x0($sp)
    ctx->pc = 0x125df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
label_125dfc:
    // 0x125dfc: 0xc049524  jal         func_125490
    ctx->pc = 0x125DFCu;
    SET_GPR_U32(ctx, 31, 0x125E04u);
    ctx->pc = 0x125E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125DFCu;
            // 0x125e00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125490u;
    if (runtime->hasFunction(0x125490u)) {
        auto targetFn = runtime->lookupFunction(0x125490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125E04u; }
        if (ctx->pc != 0x125E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125490_0x125490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125E04u; }
        if (ctx->pc != 0x125E04u) { return; }
    }
    ctx->pc = 0x125E04u;
label_125e04:
    // 0x125e04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x125e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125e08: 0x3e00008  jr          $ra
    ctx->pc = 0x125E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E08u;
            // 0x125e0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125E10u;
label_125e10:
    // 0x125e10: 0x240f003c  addiu       $t7, $zero, 0x3C
    ctx->pc = 0x125e10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x125e14: 0xafaf0008  sw          $t7, 0x8($sp)
    ctx->pc = 0x125e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 15));
    // 0x125e18: 0x11c00007  beqz        $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x125E18u;
    {
        const bool branch_taken_0x125e18 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E18u;
            // 0x125e1c: 0x80782d  daddu       $t7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e18) {
            ctx->pc = 0x125E38u;
            goto label_125e38;
        }
    }
    ctx->pc = 0x125E20u;
    // 0x125e20: 0x2402fe0f  addiu       $v0, $zero, -0x1F1
    ctx->pc = 0x125e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966799));
    // 0x125e24: 0x3c0f8000  lui         $t7, 0x8000
    ctx->pc = 0x125e24u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32768 << 16));
    // 0x125e28: 0x108ffff6  beq         $a0, $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x125E28u;
    {
        const bool branch_taken_0x125e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x125E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E28u;
            // 0x125e2c: 0x2157c  dsll32      $v0, $v0, 21 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e28) {
            ctx->pc = 0x125E04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125e04;
        }
    }
    ctx->pc = 0x125E30u;
    // 0x125e30: 0x47823  negu        $t7, $a0
    ctx->pc = 0x125e30u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x125e34: 0x1e0782d  daddu       $t7, $t7, $zero
    ctx->pc = 0x125e34u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_125e38:
    // 0x125e38: 0xffaf0010  sd          $t7, 0x10($sp)
    ctx->pc = 0x125e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 15));
    // 0x125e3c: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x125e3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x125e40: 0xdfad0010  ld          $t5, 0x10($sp)
    ctx->pc = 0x125e40u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125e44: 0xf793a  dsrl        $t7, $t7, 4
    ctx->pc = 0x125e44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 4);
    // 0x125e48: 0x1ed782b  sltu        $t7, $t7, $t5
    ctx->pc = 0x125e48u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x125e4c: 0x15e0ffeb  bnez        $t7, . + 4 + (-0x15 << 2)
    ctx->pc = 0x125E4Cu;
    {
        const bool branch_taken_0x125e4c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E4Cu;
            // 0x125e50: 0x240bfff0  addiu       $t3, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e4c) {
            ctx->pc = 0x125DFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125dfc;
        }
    }
    ctx->pc = 0x125E54u;
    // 0x125e54: 0x8fac0008  lw          $t4, 0x8($sp)
    ctx->pc = 0x125e54u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125e58: 0xb593a  dsrl        $t3, $t3, 4
    ctx->pc = 0x125e58u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> 4);
    // 0x125e5c: 0x0  nop
    ctx->pc = 0x125e5cu;
    // NOP
label_125e60:
    // 0x125e60: 0xd7078  dsll        $t6, $t5, 1
    ctx->pc = 0x125e60u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) << 1);
    // 0x125e64: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x125e64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x125e68: 0x16e782b  sltu        $t7, $t3, $t6
    ctx->pc = 0x125e68u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x125e6c: 0x0  nop
    ctx->pc = 0x125e6cu;
    // NOP
    // 0x125e70: 0x0  nop
    ctx->pc = 0x125e70u;
    // NOP
    // 0x125e74: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x125E74u;
    {
        const bool branch_taken_0x125e74 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E74u;
            // 0x125e78: 0x1c0682d  daddu       $t5, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e74) {
            ctx->pc = 0x125E60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125e60;
        }
    }
    ctx->pc = 0x125E7Cu;
    // 0x125e7c: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x125e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x125e80: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x125E80u;
    {
        const bool branch_taken_0x125e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E80u;
            // 0x125e84: 0xffae0010  sd          $t6, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e80) {
            ctx->pc = 0x125DFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125dfc;
        }
    }
    ctx->pc = 0x125E88u;
}
