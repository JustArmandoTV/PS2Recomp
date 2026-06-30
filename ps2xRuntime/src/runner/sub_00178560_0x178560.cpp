#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178560
// Address: 0x178560 - 0x1785f8
void sub_00178560_0x178560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178560_0x178560");
#endif

    switch (ctx->pc) {
        case 0x17858cu: goto label_17858c;
        case 0x1785a0u: goto label_1785a0;
        case 0x1785b4u: goto label_1785b4;
        default: break;
    }

    ctx->pc = 0x178560u;

    // 0x178560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x178560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x178564: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178568: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x178568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17856c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17856cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178570: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x178570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x178574: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x178574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x178578: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x178578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17857c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17857cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178580: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x178580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x178584: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x178584u;
    SET_GPR_U32(ctx, 31, 0x17858Cu);
    ctx->pc = 0x178588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178584u;
            // 0x178588: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17858Cu; }
        if (ctx->pc != 0x17858Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17858Cu; }
        if (ctx->pc != 0x17858Cu) { return; }
    }
    ctx->pc = 0x17858Cu;
label_17858c:
    // 0x17858c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17858cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178590: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x178590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x178594: 0x2452d3dc  addiu       $s2, $v0, -0x2C24
    ctx->pc = 0x178594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955996));
    // 0x178598: 0x2655fffc  addiu       $s5, $s2, -0x4
    ctx->pc = 0x178598u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x17859c: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x17859cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1785a0:
    // 0x1785a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1785a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1785a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1785a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1785a8: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x1785a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1785ac: 0xc04b0e8  jal         func_12C3A0
    ctx->pc = 0x1785ACu;
    SET_GPR_U32(ctx, 31, 0x1785B4u);
    ctx->pc = 0x1785B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1785ACu;
            // 0x1785b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C3A0u;
    if (runtime->hasFunction(0x12C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x12C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1785B4u; }
        if (ctx->pc != 0x1785B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C3A0_0x12c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1785B4u; }
        if (ctx->pc != 0x1785B4u) { return; }
    }
    ctx->pc = 0x1785B4u;
label_1785b4:
    // 0x1785b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1785B4u;
    {
        const bool branch_taken_0x1785b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1785B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1785B4u;
            // 0x1785b8: 0x2e230020  sltiu       $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1785b4) {
            ctx->pc = 0x1785C8u;
            goto label_1785c8;
        }
    }
    ctx->pc = 0x1785BCu;
    // 0x1785bc: 0x2151821  addu        $v1, $s0, $s5
    ctx->pc = 0x1785bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x1785c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1785C0u;
    {
        const bool branch_taken_0x1785c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1785C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1785C0u;
            // 0x1785c4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1785c0) {
            ctx->pc = 0x1785D4u;
            goto label_1785d4;
        }
    }
    ctx->pc = 0x1785C8u;
label_1785c8:
    // 0x1785c8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1785C8u;
    {
        const bool branch_taken_0x1785c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1785CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1785C8u;
            // 0x1785cc: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1785c8) {
            ctx->pc = 0x1785A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1785a0;
        }
    }
    ctx->pc = 0x1785D0u;
    // 0x1785d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1785d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1785d4:
    // 0x1785d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1785d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1785d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1785d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1785dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1785dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1785e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1785e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1785e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1785e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1785e8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1785e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1785ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1785ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1785f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1785F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1785F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1785F0u;
            // 0x1785f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1785F8u;
}
