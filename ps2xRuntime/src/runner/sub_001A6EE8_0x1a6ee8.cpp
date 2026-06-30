#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6EE8
// Address: 0x1a6ee8 - 0x1a6fd0
void sub_001A6EE8_0x1a6ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6EE8_0x1a6ee8");
#endif

    switch (ctx->pc) {
        case 0x1a6f24u: goto label_1a6f24;
        case 0x1a6f44u: goto label_1a6f44;
        case 0x1a6f64u: goto label_1a6f64;
        case 0x1a6fa4u: goto label_1a6fa4;
        default: break;
    }

    ctx->pc = 0x1a6ee8u;

    // 0x1a6ee8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a6ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a6eec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1a6eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1a6ef0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1a6ef0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ef4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a6ef8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x1a6ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x1a6efc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a6f00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a6f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a6f04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a6f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6f08: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a6f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a6f0c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a6f0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6f10: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a6f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a6f14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6f18: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1a6f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1a6f1c: 0xc069cac  jal         func_1A72B0
    ctx->pc = 0x1A6F1Cu;
    SET_GPR_U32(ctx, 31, 0x1A6F24u);
    ctx->pc = 0x1A6F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F1Cu;
            // 0x1a6f20: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A72B0u;
    if (runtime->hasFunction(0x1A72B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A72B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F24u; }
        if (ctx->pc != 0x1A6F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A72B0_0x1a72b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F24u; }
        if (ctx->pc != 0x1A6F24u) { return; }
    }
    ctx->pc = 0x1A6F24u;
label_1a6f24:
    // 0x1a6f24: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x1a6f24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x1a6f28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a6f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6f2c: 0x2339023  subu        $s2, $s1, $s3
    ctx->pc = 0x1a6f2cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1a6f30: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x1a6f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a6f34: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A6F34u;
    {
        const bool branch_taken_0x1a6f34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F34u;
            // 0x1a6f38: 0x292a823  subu        $s5, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f34) {
            ctx->pc = 0x1A6FA8u;
            goto label_1a6fa8;
        }
    }
    ctx->pc = 0x1A6F3Cu;
    // 0x1a6f3c: 0xc069cac  jal         func_1A72B0
    ctx->pc = 0x1A6F3Cu;
    SET_GPR_U32(ctx, 31, 0x1A6F44u);
    ctx->pc = 0x1A6F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F3Cu;
            // 0x1a6f40: 0x26a5ffff  addiu       $a1, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A72B0u;
    if (runtime->hasFunction(0x1A72B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A72B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F44u; }
        if (ctx->pc != 0x1A6F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A72B0_0x1a72b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F44u; }
        if (ctx->pc != 0x1A6F44u) { return; }
    }
    ctx->pc = 0x1A6F44u;
label_1a6f44:
    // 0x1a6f44: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x1a6f44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x1a6f48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a6f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6f4c: 0x2131823  subu        $v1, $s0, $s3
    ctx->pc = 0x1a6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1a6f50: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1a6f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a6f54: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A6F54u;
    {
        const bool branch_taken_0x1a6f54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F54u;
            // 0x1a6f58: 0x2832823  subu        $a1, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f54) {
            ctx->pc = 0x1A6FA8u;
            goto label_1a6fa8;
        }
    }
    ctx->pc = 0x1A6F5Cu;
    // 0x1a6f5c: 0xc069cac  jal         func_1A72B0
    ctx->pc = 0x1A6F5Cu;
    SET_GPR_U32(ctx, 31, 0x1A6F64u);
    ctx->pc = 0x1A6F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F5Cu;
            // 0x1a6f60: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A72B0u;
    if (runtime->hasFunction(0x1A72B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A72B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F64u; }
        if (ctx->pc != 0x1A6F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A72B0_0x1a72b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6F64u; }
        if (ctx->pc != 0x1A6F64u) { return; }
    }
    ctx->pc = 0x1A6F64u;
label_1a6f64:
    // 0x1a6f64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a6f64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6f68: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A6F68u;
    {
        const bool branch_taken_0x1a6f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F68u;
            // 0x1a6f6c: 0x702023  subu        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f68) {
            ctx->pc = 0x1A6FA8u;
            goto label_1a6fa8;
        }
    }
    ctx->pc = 0x1A6F70u;
    // 0x1a6f70: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x1a6f70u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1a6f74: 0x1604000c  bne         $s0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A6F74u;
    {
        const bool branch_taken_0x1a6f74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A6F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F74u;
            // 0x1a6f78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f74) {
            ctx->pc = 0x1A6FA8u;
            goto label_1a6fa8;
        }
    }
    ctx->pc = 0x1A6F7Cu;
    // 0x1a6f7c: 0x250001a  div         $zero, $s2, $s0
    ctx->pc = 0x1a6f7cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a6f80: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A6F80u;
    {
        const bool branch_taken_0x1a6f80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f80) {
            ctx->pc = 0x1A6F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F80u;
            // 0x1a6f84: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6F88u;
            goto label_1a6f88;
        }
    }
    ctx->pc = 0x1A6F88u;
label_1a6f88:
    // 0x1a6f88: 0x1810  mfhi        $v1
    ctx->pc = 0x1a6f88u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1a6f8c: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6F8Cu;
    {
        const bool branch_taken_0x1a6f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f8c) {
            ctx->pc = 0x1A6F90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F8Cu;
            // 0x1a6f90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6FACu;
            goto label_1a6fac;
        }
    }
    ctx->pc = 0x1A6F94u;
    // 0x1a6f94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6f98: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a6f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6f9c: 0xc069bf4  jal         func_1A6FD0
    ctx->pc = 0x1A6F9Cu;
    SET_GPR_U32(ctx, 31, 0x1A6FA4u);
    ctx->pc = 0x1A6FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6F9Cu;
            // 0x1a6fa0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FD0u;
    if (runtime->hasFunction(0x1A6FD0u)) {
        auto targetFn = runtime->lookupFunction(0x1A6FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6FA4u; }
        if (ctx->pc != 0x1A6FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6FD0_0x1a6fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6FA4u; }
        if (ctx->pc != 0x1A6FA4u) { return; }
    }
    ctx->pc = 0x1A6FA4u;
label_1a6fa4:
    // 0x1a6fa4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a6fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6fa8:
    // 0x1a6fa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6fac:
    // 0x1a6fac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6fb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a6fb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6fb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a6fb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6fb8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a6fb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6fbc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a6fbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a6fc0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1a6fc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6fc4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a6fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a6fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6FC8u;
            // 0x1a6fcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6FD0u;
}
