#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00376040
// Address: 0x376040 - 0x376080
void sub_00376040_0x376040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376040_0x376040");
#endif

    switch (ctx->pc) {
        case 0x376070u: goto label_376070;
        default: break;
    }

    ctx->pc = 0x376040u;

    // 0x376040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x376040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x376044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376048: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x376048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x37604c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x37604cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x376050: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x376050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376054: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x376054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376058: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x376058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x37605c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x37605cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x376060: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x376060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x376064: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x376064u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x376068: 0xc0892a0  jal         func_224A80
    ctx->pc = 0x376068u;
    SET_GPR_U32(ctx, 31, 0x376070u);
    ctx->pc = 0x37606Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376068u;
            // 0x37606c: 0xe7a3001c  swc1        $f3, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A80u;
    if (runtime->hasFunction(0x224A80u)) {
        auto targetFn = runtime->lookupFunction(0x224A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376070u; }
        if (ctx->pc != 0x376070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A80_0x224a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376070u; }
        if (ctx->pc != 0x376070u) { return; }
    }
    ctx->pc = 0x376070u;
label_376070:
    // 0x376070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x376070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376074: 0x3e00008  jr          $ra
    ctx->pc = 0x376074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376074u;
            // 0x376078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37607Cu;
    // 0x37607c: 0x0  nop
    ctx->pc = 0x37607cu;
    // NOP
}
