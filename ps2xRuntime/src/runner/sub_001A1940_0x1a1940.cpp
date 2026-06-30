#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1940
// Address: 0x1a1940 - 0x1a1978
void sub_001A1940_0x1a1940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1940_0x1a1940");
#endif

    switch (ctx->pc) {
        case 0x1a1964u: goto label_1a1964;
        default: break;
    }

    ctx->pc = 0x1a1940u;

    // 0x1a1940: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1a1940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1944: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a1944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a194c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1a194cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1950: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a1950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a1954: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a1954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a195c: 0xc062094  jal         func_188250
    ctx->pc = 0x1A195Cu;
    SET_GPR_U32(ctx, 31, 0x1A1964u);
    ctx->pc = 0x1A1960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A195Cu;
            // 0x1a1960: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188250u;
    if (runtime->hasFunction(0x188250u)) {
        auto targetFn = runtime->lookupFunction(0x188250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1964u; }
        if (ctx->pc != 0x1A1964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188250_0x188250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1964u; }
        if (ctx->pc != 0x1A1964u) { return; }
    }
    ctx->pc = 0x1A1964u;
label_1a1964:
    // 0x1a1964: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1a1964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1a1968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a196c: 0xac62be8c  sw          $v0, -0x4174($v1)
    ctx->pc = 0x1a196cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950540), GPR_U32(ctx, 2));
    // 0x1a1970: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1970u;
            // 0x1a1974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1978u;
}
