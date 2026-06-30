#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4540
// Address: 0x1b4540 - 0x1b45c0
void sub_001B4540_0x1b4540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4540_0x1b4540");
#endif

    switch (ctx->pc) {
        case 0x1b4564u: goto label_1b4564;
        default: break;
    }

    ctx->pc = 0x1b4540u;

    // 0x1b4540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b4548: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b4548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b454c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b454cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b4550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b4550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4554: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b4554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b4558: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b4558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b455c: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B455Cu;
    SET_GPR_U32(ctx, 31, 0x1B4564u);
    ctx->pc = 0x1B4560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B455Cu;
            // 0x1b4560: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4564u; }
        if (ctx->pc != 0x1B4564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4564u; }
        if (ctx->pc != 0x1B4564u) { return; }
    }
    ctx->pc = 0x1B4564u;
label_1b4564:
    // 0x1b4564: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b4564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b4568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b456c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b456cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4570: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1b4570u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4574: 0x34a50135  ori         $a1, $a1, 0x135
    ctx->pc = 0x1b4574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)309);
    // 0x1b4578: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4578u;
    {
        const bool branch_taken_0x1b4578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B457Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4578u;
            // 0x1b457c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4578) {
            ctx->pc = 0x1B45A0u;
            goto label_1b45a0;
        }
    }
    ctx->pc = 0x1B4580u;
    // 0x1b4580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4584: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b4584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b4588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b458c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b458cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4590: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b4590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b4594: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B4594u;
    ctx->pc = 0x1B4598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4594u;
            // 0x1b4598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B459Cu;
    // 0x1b459c: 0x0  nop
    ctx->pc = 0x1b459cu;
    // NOP
label_1b45a0:
    // 0x1b45a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b45a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b45a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b45a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b45a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b45ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b45acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b45b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b45b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b45b4: 0x806e35c  j           func_1B8D70
    ctx->pc = 0x1B45B4u;
    ctx->pc = 0x1B45B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B45B4u;
            // 0x1b45b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8D70u;
    if (runtime->hasFunction(0x1B8D70u)) {
        auto targetFn = runtime->lookupFunction(0x1B8D70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8D70_0x1b8d70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B45BCu;
    // 0x1b45bc: 0x0  nop
    ctx->pc = 0x1b45bcu;
    // NOP
}
