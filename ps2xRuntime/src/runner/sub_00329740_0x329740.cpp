#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00329740
// Address: 0x329740 - 0x3297a0
void sub_00329740_0x329740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329740_0x329740");
#endif

    switch (ctx->pc) {
        case 0x32975cu: goto label_32975c;
        default: break;
    }

    ctx->pc = 0x329740u;

    // 0x329740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329744: 0x3508000a  ori         $t0, $t0, 0xA
    ctx->pc = 0x329744u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)10);
    // 0x329748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32974c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32974cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x329750: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x329750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x329754: 0xc0b9404  jal         func_2E5010
    ctx->pc = 0x329754u;
    SET_GPR_U32(ctx, 31, 0x32975Cu);
    ctx->pc = 0x329758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329754u;
            // 0x329758: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32975Cu; }
        if (ctx->pc != 0x32975Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32975Cu; }
        if (ctx->pc != 0x32975Cu) { return; }
    }
    ctx->pc = 0x32975Cu;
label_32975c:
    // 0x32975c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32975cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x329760: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x329760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x329764: 0x24424660  addiu       $v0, $v0, 0x4660
    ctx->pc = 0x329764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18016));
    // 0x329768: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x329768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32976c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x32976cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x329770: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x329770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329774: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x329774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x329778: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x329778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x32977c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x32977cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x329780: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x329780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x329784: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x329784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    // 0x329788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32978c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32978cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329790: 0x3e00008  jr          $ra
    ctx->pc = 0x329790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329790u;
            // 0x329794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x329798u;
    // 0x329798: 0x0  nop
    ctx->pc = 0x329798u;
    // NOP
    // 0x32979c: 0x0  nop
    ctx->pc = 0x32979cu;
    // NOP
}
