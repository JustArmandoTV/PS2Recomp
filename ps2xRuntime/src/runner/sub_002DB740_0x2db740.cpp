#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB740
// Address: 0x2db740 - 0x2db780
void sub_002DB740_0x2db740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB740_0x2db740");
#endif

    switch (ctx->pc) {
        case 0x2db770u: goto label_2db770;
        default: break;
    }

    ctx->pc = 0x2db740u;

    // 0x2db740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2db740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2db744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2db744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2db748: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2db748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2db74c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2db74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2db750: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2db750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db754: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2db754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db758: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2db758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2db75c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2db75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2db760: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2db760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2db764: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2db764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2db768: 0xc08af48  jal         func_22BD20
    ctx->pc = 0x2DB768u;
    SET_GPR_U32(ctx, 31, 0x2DB770u);
    ctx->pc = 0x2DB76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB768u;
            // 0x2db76c: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BD20u;
    if (runtime->hasFunction(0x22BD20u)) {
        auto targetFn = runtime->lookupFunction(0x22BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB770u; }
        if (ctx->pc != 0x2DB770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BD20_0x22bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB770u; }
        if (ctx->pc != 0x2DB770u) { return; }
    }
    ctx->pc = 0x2DB770u;
label_2db770:
    // 0x2db770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db774: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB774u;
            // 0x2db778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB77Cu;
    // 0x2db77c: 0x0  nop
    ctx->pc = 0x2db77cu;
    // NOP
}
