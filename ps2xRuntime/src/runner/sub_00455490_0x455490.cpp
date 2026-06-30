#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00455490
// Address: 0x455490 - 0x4554d0
void sub_00455490_0x455490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00455490_0x455490");
#endif

    switch (ctx->pc) {
        case 0x4554bcu: goto label_4554bc;
        default: break;
    }

    ctx->pc = 0x455490u;

    // 0x455490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x455490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x455494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x455494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x455498: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x455498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45549c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x45549cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4554a0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4554a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4554a4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x4554a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4554a8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4554a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4554ac: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x4554acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4554b0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x4554b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x4554b4: 0xc089290  jal         func_224A40
    ctx->pc = 0x4554B4u;
    SET_GPR_U32(ctx, 31, 0x4554BCu);
    ctx->pc = 0x4554B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4554B4u;
            // 0x4554b8: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4554BCu; }
        if (ctx->pc != 0x4554BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4554BCu; }
        if (ctx->pc != 0x4554BCu) { return; }
    }
    ctx->pc = 0x4554BCu;
label_4554bc:
    // 0x4554bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4554bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4554c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4554C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4554C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4554C0u;
            // 0x4554c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4554C8u;
    // 0x4554c8: 0x0  nop
    ctx->pc = 0x4554c8u;
    // NOP
    // 0x4554cc: 0x0  nop
    ctx->pc = 0x4554ccu;
    // NOP
}
