#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F0A10
// Address: 0x2f0a10 - 0x2f0aa0
void sub_002F0A10_0x2f0a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0A10_0x2f0a10");
#endif

    switch (ctx->pc) {
        case 0x2f0a10u: goto label_2f0a10;
        case 0x2f0a14u: goto label_2f0a14;
        case 0x2f0a18u: goto label_2f0a18;
        case 0x2f0a1cu: goto label_2f0a1c;
        case 0x2f0a20u: goto label_2f0a20;
        case 0x2f0a24u: goto label_2f0a24;
        case 0x2f0a28u: goto label_2f0a28;
        case 0x2f0a2cu: goto label_2f0a2c;
        case 0x2f0a30u: goto label_2f0a30;
        case 0x2f0a34u: goto label_2f0a34;
        case 0x2f0a38u: goto label_2f0a38;
        case 0x2f0a3cu: goto label_2f0a3c;
        case 0x2f0a40u: goto label_2f0a40;
        case 0x2f0a44u: goto label_2f0a44;
        case 0x2f0a48u: goto label_2f0a48;
        case 0x2f0a4cu: goto label_2f0a4c;
        case 0x2f0a50u: goto label_2f0a50;
        case 0x2f0a54u: goto label_2f0a54;
        case 0x2f0a58u: goto label_2f0a58;
        case 0x2f0a5cu: goto label_2f0a5c;
        case 0x2f0a60u: goto label_2f0a60;
        case 0x2f0a64u: goto label_2f0a64;
        case 0x2f0a68u: goto label_2f0a68;
        case 0x2f0a6cu: goto label_2f0a6c;
        case 0x2f0a70u: goto label_2f0a70;
        case 0x2f0a74u: goto label_2f0a74;
        case 0x2f0a78u: goto label_2f0a78;
        case 0x2f0a7cu: goto label_2f0a7c;
        case 0x2f0a80u: goto label_2f0a80;
        case 0x2f0a84u: goto label_2f0a84;
        case 0x2f0a88u: goto label_2f0a88;
        case 0x2f0a8cu: goto label_2f0a8c;
        case 0x2f0a90u: goto label_2f0a90;
        case 0x2f0a94u: goto label_2f0a94;
        case 0x2f0a98u: goto label_2f0a98;
        case 0x2f0a9cu: goto label_2f0a9c;
        default: break;
    }

    ctx->pc = 0x2f0a10u;

label_2f0a10:
    // 0x2f0a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f0a14:
    // 0x2f0a14: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2f0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2f0a18:
    // 0x2f0a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f0a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f0a1c:
    // 0x2f0a1c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2f0a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f0a20:
    // 0x2f0a20: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2f0a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0a24:
    // 0x2f0a24: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x2f0a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_2f0a28:
    // 0x2f0a28: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2f0a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0a2c:
    // 0x2f0a2c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2f0a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0a30:
    // 0x2f0a30: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2f0a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0a34:
    // 0x2f0a34: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2f0a34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2f0a38:
    // 0x2f0a38: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f0a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f0a3c:
    // 0x2f0a3c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2f0a3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2f0a40:
    // 0x2f0a40: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2f0a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f0a44:
    // 0x2f0a44: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2f0a44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2f0a48:
    // 0x2f0a48: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2f0a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2f0a4c:
    // 0x2f0a4c: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x2f0a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f0a50:
    // 0x2f0a50: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2f0a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0a54:
    // 0x2f0a54: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2f0a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0a58:
    // 0x2f0a58: 0x46102003  div.s       $f0, $f4, $f16
    ctx->pc = 0x2f0a58u;
    if (ctx->f[16] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[16];
label_2f0a5c:
    // 0x2f0a5c: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x2f0a5cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_2f0a60:
    // 0x2f0a60: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2f0a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2f0a64:
    // 0x2f0a64: 0x46101803  div.s       $f0, $f3, $f16
    ctx->pc = 0x2f0a64u;
    if (ctx->f[16] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[16];
label_2f0a68:
    // 0x2f0a68: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2f0a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0a6c:
    // 0x2f0a6c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2f0a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2f0a70:
    // 0x2f0a70: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x2f0a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2f0a74:
    // 0x2f0a74: 0x46110043  div.s       $f1, $f0, $f17
    ctx->pc = 0x2f0a74u;
    if (ctx->f[17] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[17];
label_2f0a78:
    // 0x2f0a78: 0x46111003  div.s       $f0, $f2, $f17
    ctx->pc = 0x2f0a78u;
    if (ctx->f[17] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[17];
label_2f0a7c:
    // 0x2f0a7c: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2f0a7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2f0a80:
    // 0x2f0a80: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2f0a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2f0a84:
    // 0x2f0a84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f0a84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f0a88:
    // 0x2f0a88: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2f0a88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2f0a8c:
    // 0x2f0a8c: 0x320f809  jalr        $t9
label_2f0a90:
    if (ctx->pc == 0x2F0A90u) {
        ctx->pc = 0x2F0A90u;
            // 0x2f0a90: 0x46009406  mov.s       $f16, $f18 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[18]);
        ctx->pc = 0x2F0A94u;
        goto label_2f0a94;
    }
    ctx->pc = 0x2F0A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F0A94u);
        ctx->pc = 0x2F0A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0A8Cu;
            // 0x2f0a90: 0x46009406  mov.s       $f16, $f18 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[18]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F0A94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F0A94u; }
            if (ctx->pc != 0x2F0A94u) { return; }
        }
        }
    }
    ctx->pc = 0x2F0A94u;
label_2f0a94:
    // 0x2f0a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f0a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f0a98:
    // 0x2f0a98: 0x3e00008  jr          $ra
label_2f0a9c:
    if (ctx->pc == 0x2F0A9Cu) {
        ctx->pc = 0x2F0A9Cu;
            // 0x2f0a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2F0AA0u;
        goto label_fallthrough_0x2f0a98;
    }
    ctx->pc = 0x2F0A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0A98u;
            // 0x2f0a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f0a98:
    ctx->pc = 0x2F0AA0u;
}
