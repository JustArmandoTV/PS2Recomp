#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00129EE0
// Address: 0x129ee0 - 0x12a010
void sub_00129EE0_0x129ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129EE0_0x129ee0");
#endif

    switch (ctx->pc) {
        case 0x129f40u: goto label_129f40;
        case 0x129f68u: goto label_129f68;
        case 0x129f80u: goto label_129f80;
        case 0x129f9cu: goto label_129f9c;
        case 0x129facu: goto label_129fac;
        case 0x129fbcu: goto label_129fbc;
        case 0x129fd8u: goto label_129fd8;
        default: break;
    }

    ctx->pc = 0x129ee0u;

    // 0x129ee0: 0x240f0009  addiu       $t7, $zero, 0x9
    ctx->pc = 0x129ee0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x129ee4: 0x24ee0008  addiu       $t6, $a3, 0x8
    ctx->pc = 0x129ee4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x129ee8: 0x1cf001a  div         $zero, $t6, $t7
    ctx->pc = 0x129ee8u;
    { int32_t divisor = GPR_S32(ctx, 15);    int32_t dividend = GPR_S32(ctx, 14);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x129eec: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x129eecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x129ef0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x129ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x129ef4: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x129ef4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129ef8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x129ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x129efc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x129efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x129f00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x129f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f04: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x129f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x129f08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x129f08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f0c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x129f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x129f10: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x129f10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x129f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x129f18: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x129f18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x129f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x129f20: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x129f20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x129f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f28: 0x51e00001  beql        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x129F28u;
    {
        const bool branch_taken_0x129f28 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x129f28) {
            ctx->pc = 0x129F2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129F28u;
            // 0x129f2c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129F30u;
            goto label_129f30;
        }
    }
    ctx->pc = 0x129F30u;
label_129f30:
    // 0x129f30: 0x7012  mflo        $t6
    ctx->pc = 0x129f30u;
    SET_GPR_U64(ctx, 14, ctx->lo);
    // 0x129f34: 0x18e782a  slt         $t7, $t4, $t6
    ctx->pc = 0x129f34u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x129f38: 0x11e00009  beqz        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x129F38u;
    {
        const bool branch_taken_0x129f38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F38u;
            // 0x129f3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f38) {
            ctx->pc = 0x129F60u;
            goto label_129f60;
        }
    }
    ctx->pc = 0x129F40u;
label_129f40:
    // 0x129f40: 0xc6040  sll         $t4, $t4, 1
    ctx->pc = 0x129f40u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x129f44: 0x18e782a  slt         $t7, $t4, $t6
    ctx->pc = 0x129f44u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x129f48: 0x0  nop
    ctx->pc = 0x129f48u;
    // NOP
    // 0x129f4c: 0x0  nop
    ctx->pc = 0x129f4cu;
    // NOP
    // 0x129f50: 0x0  nop
    ctx->pc = 0x129f50u;
    // NOP
    // 0x129f54: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129F54u;
    {
        const bool branch_taken_0x129f54 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F54u;
            // 0x129f58: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f54) {
            ctx->pc = 0x129F40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129f40;
        }
    }
    ctx->pc = 0x129F5Cu;
    // 0x129f5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x129f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_129f60:
    // 0x129f60: 0xc04a740  jal         func_129D00
    ctx->pc = 0x129F60u;
    SET_GPR_U32(ctx, 31, 0x129F68u);
    ctx->pc = 0x129F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129F60u;
            // 0x129f64: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129D00u;
    if (runtime->hasFunction(0x129D00u)) {
        auto targetFn = runtime->lookupFunction(0x129D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F68u; }
        if (ctx->pc != 0x129F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129D00_0x129d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F68u; }
        if (ctx->pc != 0x129F68u) { return; }
    }
    ctx->pc = 0x129F68u;
label_129f68:
    // 0x129f68: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x129f68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129f6c: 0xac540014  sw          $s4, 0x14($v0)
    ctx->pc = 0x129f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 20));
    // 0x129f70: 0x2a6e000a  slti        $t6, $s3, 0xA
    ctx->pc = 0x129f70u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x129f74: 0x15c00023  bnez        $t6, . + 4 + (0x23 << 2)
    ctx->pc = 0x129F74u;
    {
        const bool branch_taken_0x129f74 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x129F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F74u;
            // 0x129f78: 0xac4f0010  sw          $t7, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f74) {
            ctx->pc = 0x12A004u;
            goto label_12a004;
        }
    }
    ctx->pc = 0x129F7Cu;
    // 0x129f7c: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x129f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_129f80:
    // 0x129f80: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x129f80u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x129f84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x129f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x129f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f8c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x129f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x129f90: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x129f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x129f94: 0xc04a776  jal         func_129DD8
    ctx->pc = 0x129F94u;
    SET_GPR_U32(ctx, 31, 0x129F9Cu);
    ctx->pc = 0x129F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129F94u;
            // 0x129f98: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DD8u;
    if (runtime->hasFunction(0x129DD8u)) {
        auto targetFn = runtime->lookupFunction(0x129DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F9Cu; }
        if (ctx->pc != 0x129F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DD8_0x129dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F9Cu; }
        if (ctx->pc != 0x129F9Cu) { return; }
    }
    ctx->pc = 0x129F9Cu;
label_129f9c:
    // 0x129f9c: 0x233782a  slt         $t7, $s1, $s3
    ctx->pc = 0x129f9cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x129fa0: 0x15e0fff7  bnez        $t7, . + 4 + (-0x9 << 2)
    ctx->pc = 0x129FA0u;
    {
        const bool branch_taken_0x129fa0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129FA0u;
            // 0x129fa4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fa0) {
            ctx->pc = 0x129F80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129f80;
        }
    }
    ctx->pc = 0x129FA8u;
    // 0x129fa8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x129fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_129fac:
    // 0x129fac: 0x235782a  slt         $t7, $s1, $s5
    ctx->pc = 0x129facu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x129fb0: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x129FB0u;
    {
        const bool branch_taken_0x129fb0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129FB0u;
            // 0x129fb4: 0x2b18823  subu        $s1, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fb0) {
            ctx->pc = 0x129FE0u;
            goto label_129fe0;
        }
    }
    ctx->pc = 0x129FB8u;
    // 0x129fb8: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x129fb8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_129fbc:
    // 0x129fbc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x129fbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x129fc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x129fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129fc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x129fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129fc8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x129fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x129fcc: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x129fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x129fd0: 0xc04a776  jal         func_129DD8
    ctx->pc = 0x129FD0u;
    SET_GPR_U32(ctx, 31, 0x129FD8u);
    ctx->pc = 0x129FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129FD0u;
            // 0x129fd4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DD8u;
    if (runtime->hasFunction(0x129DD8u)) {
        auto targetFn = runtime->lookupFunction(0x129DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129FD8u; }
        if (ctx->pc != 0x129FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DD8_0x129dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129FD8u; }
        if (ctx->pc != 0x129FD8u) { return; }
    }
    ctx->pc = 0x129FD8u;
label_129fd8:
    // 0x129fd8: 0x5620fff8  bnel        $s1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x129FD8u;
    {
        const bool branch_taken_0x129fd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x129fd8) {
            ctx->pc = 0x129FDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129FD8u;
            // 0x129fdc: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129FBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129fbc;
        }
    }
    ctx->pc = 0x129FE0u;
label_129fe0:
    // 0x129fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x129fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129fe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x129fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129fe8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x129fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129fec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x129fecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x129ff0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x129ff0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129ff4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x129ff4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x129ff8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x129ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x129FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129FFCu;
            // 0x12a000: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A004u;
label_12a004:
    // 0x12a004: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x12A004u;
    {
        const bool branch_taken_0x12a004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A004u;
            // 0x12a008: 0x2610000a  addiu       $s0, $s0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a004) {
            ctx->pc = 0x129FACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129fac;
        }
    }
    ctx->pc = 0x12A00Cu;
    // 0x12a00c: 0x0  nop
    ctx->pc = 0x12a00cu;
    // NOP
}
