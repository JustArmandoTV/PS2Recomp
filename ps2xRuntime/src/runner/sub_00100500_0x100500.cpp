#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100500
// Address: 0x100500 - 0x100580
void sub_00100500_0x100500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100500_0x100500");
#endif

    switch (ctx->pc) {
        case 0x100534u: goto label_100534;
        case 0x100558u: goto label_100558;
        case 0x100568u: goto label_100568;
        default: break;
    }

    ctx->pc = 0x100500u;

    // 0x100500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100504: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x100504u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10050c: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x10050cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x100510: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x100510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x100514: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x100514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x100518: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x100518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x10051c: 0x8c42e080  lw          $v0, -0x1F80($v0)
    ctx->pc = 0x10051cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959232)));
    // 0x100520: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x100520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x100524: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x100524u;
    {
        const bool branch_taken_0x100524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100524) {
            ctx->pc = 0x10053Cu;
            goto label_10053c;
        }
    }
    ctx->pc = 0x10052Cu;
    // 0x10052c: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x10052Cu;
    SET_GPR_U32(ctx, 31, 0x100534u);
    ctx->pc = 0x100530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10052Cu;
            // 0x100530: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100534u; }
        if (ctx->pc != 0x100534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100534u; }
        if (ctx->pc != 0x100534u) { return; }
    }
    ctx->pc = 0x100534u;
label_100534:
    // 0x100534: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x100534u;
    {
        const bool branch_taken_0x100534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100534u;
            // 0x100538: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100534) {
            ctx->pc = 0x10056Cu;
            goto label_10056c;
        }
    }
    ctx->pc = 0x10053Cu;
label_10053c:
    // 0x10053c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x10053cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x100540: 0x8c42e088  lw          $v0, -0x1F78($v0)
    ctx->pc = 0x100540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959240)));
    // 0x100544: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x100544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x100548: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x100548u;
    {
        const bool branch_taken_0x100548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100548) {
            ctx->pc = 0x10054Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100548u;
            // 0x10054c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100560u;
            goto label_100560;
        }
    }
    ctx->pc = 0x100550u;
    // 0x100550: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x100550u;
    SET_GPR_U32(ctx, 31, 0x100558u);
    ctx->pc = 0x100554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100550u;
            // 0x100554: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100558u; }
        if (ctx->pc != 0x100558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100558u; }
        if (ctx->pc != 0x100558u) { return; }
    }
    ctx->pc = 0x100558u;
label_100558:
    // 0x100558: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x100558u;
    {
        const bool branch_taken_0x100558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100558) {
            ctx->pc = 0x100568u;
            goto label_100568;
        }
    }
    ctx->pc = 0x100560u;
label_100560:
    // 0x100560: 0xc0fe41c  jal         func_3F9070
    ctx->pc = 0x100560u;
    SET_GPR_U32(ctx, 31, 0x100568u);
    ctx->pc = 0x3F9070u;
    if (runtime->hasFunction(0x3F9070u)) {
        auto targetFn = runtime->lookupFunction(0x3F9070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100568u; }
        if (ctx->pc != 0x100568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9070_0x3f9070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100568u; }
        if (ctx->pc != 0x100568u) { return; }
    }
    ctx->pc = 0x100568u;
label_100568:
    // 0x100568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10056c:
    // 0x10056c: 0x3e00008  jr          $ra
    ctx->pc = 0x10056Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10056Cu;
            // 0x100570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100574u;
    // 0x100574: 0x0  nop
    ctx->pc = 0x100574u;
    // NOP
    // 0x100578: 0x0  nop
    ctx->pc = 0x100578u;
    // NOP
    // 0x10057c: 0x0  nop
    ctx->pc = 0x10057cu;
    // NOP
}
