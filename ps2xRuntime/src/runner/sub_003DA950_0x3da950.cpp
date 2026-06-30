#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DA950
// Address: 0x3da950 - 0x3da9c0
void sub_003DA950_0x3da950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA950_0x3da950");
#endif

    switch (ctx->pc) {
        case 0x3da974u: goto label_3da974;
        case 0x3da980u: goto label_3da980;
        default: break;
    }

    ctx->pc = 0x3da950u;

    // 0x3da950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3da950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3da954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3da954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3da958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3da958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3da95c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3da95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3da960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3da960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da964: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3da964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da968: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3da968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3da96c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3DA96Cu;
    SET_GPR_U32(ctx, 31, 0x3DA974u);
    ctx->pc = 0x3DA970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA96Cu;
            // 0x3da970: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA974u; }
        if (ctx->pc != 0x3DA974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA974u; }
        if (ctx->pc != 0x3DA974u) { return; }
    }
    ctx->pc = 0x3DA974u;
label_3da974:
    // 0x3da974: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3da974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3da978: 0xc04c720  jal         func_131C80
    ctx->pc = 0x3DA978u;
    SET_GPR_U32(ctx, 31, 0x3DA980u);
    ctx->pc = 0x3DA97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA978u;
            // 0x3da97c: 0x26050830  addiu       $a1, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA980u; }
        if (ctx->pc != 0x3DA980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DA980u; }
        if (ctx->pc != 0x3DA980u) { return; }
    }
    ctx->pc = 0x3DA980u;
label_3da980:
    // 0x3da980: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3da980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3da984: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x3da984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x3da988: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x3da988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
    // 0x3da98c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3da98cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x3da990: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x3da990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
    // 0x3da994: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x3da994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x3da998: 0xae250078  sw          $a1, 0x78($s1)
    ctx->pc = 0x3da998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 5));
    // 0x3da99c: 0xae24007c  sw          $a0, 0x7C($s1)
    ctx->pc = 0x3da99cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 4));
    // 0x3da9a0: 0xae30006c  sw          $s0, 0x6C($s1)
    ctx->pc = 0x3da9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 16));
    // 0x3da9a4: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x3da9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x3da9a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3da9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3da9ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3da9acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3da9b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3da9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA9B4u;
            // 0x3da9b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DA9BCu;
    // 0x3da9bc: 0x0  nop
    ctx->pc = 0x3da9bcu;
    // NOP
}
