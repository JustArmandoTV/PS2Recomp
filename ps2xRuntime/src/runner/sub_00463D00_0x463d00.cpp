#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00463D00
// Address: 0x463d00 - 0x463da0
void sub_00463D00_0x463d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463D00_0x463d00");
#endif

    switch (ctx->pc) {
        case 0x463d00u: goto label_463d00;
        case 0x463d04u: goto label_463d04;
        case 0x463d08u: goto label_463d08;
        case 0x463d0cu: goto label_463d0c;
        case 0x463d10u: goto label_463d10;
        case 0x463d14u: goto label_463d14;
        case 0x463d18u: goto label_463d18;
        case 0x463d1cu: goto label_463d1c;
        case 0x463d20u: goto label_463d20;
        case 0x463d24u: goto label_463d24;
        case 0x463d28u: goto label_463d28;
        case 0x463d2cu: goto label_463d2c;
        case 0x463d30u: goto label_463d30;
        case 0x463d34u: goto label_463d34;
        case 0x463d38u: goto label_463d38;
        case 0x463d3cu: goto label_463d3c;
        case 0x463d40u: goto label_463d40;
        case 0x463d44u: goto label_463d44;
        case 0x463d48u: goto label_463d48;
        case 0x463d4cu: goto label_463d4c;
        case 0x463d50u: goto label_463d50;
        case 0x463d54u: goto label_463d54;
        case 0x463d58u: goto label_463d58;
        case 0x463d5cu: goto label_463d5c;
        case 0x463d60u: goto label_463d60;
        case 0x463d64u: goto label_463d64;
        case 0x463d68u: goto label_463d68;
        case 0x463d6cu: goto label_463d6c;
        case 0x463d70u: goto label_463d70;
        case 0x463d74u: goto label_463d74;
        case 0x463d78u: goto label_463d78;
        case 0x463d7cu: goto label_463d7c;
        case 0x463d80u: goto label_463d80;
        case 0x463d84u: goto label_463d84;
        case 0x463d88u: goto label_463d88;
        case 0x463d8cu: goto label_463d8c;
        case 0x463d90u: goto label_463d90;
        case 0x463d94u: goto label_463d94;
        case 0x463d98u: goto label_463d98;
        case 0x463d9cu: goto label_463d9c;
        default: break;
    }

    ctx->pc = 0x463d00u;

label_463d00:
    // 0x463d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x463d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_463d04:
    // 0x463d04: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x463d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_463d08:
    // 0x463d08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x463d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_463d0c:
    // 0x463d0c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x463d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_463d10:
    // 0x463d10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x463d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_463d14:
    // 0x463d14: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x463d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_463d18:
    // 0x463d18: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x463d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_463d1c:
    // 0x463d1c: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x463d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_463d20:
    // 0x463d20: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x463d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_463d24:
    // 0x463d24: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x463d24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_463d28:
    // 0x463d28: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x463d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_463d2c:
    // 0x463d2c: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x463d2cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_463d30:
    // 0x463d30: 0xe7a60028  swc1        $f6, 0x28($sp)
    ctx->pc = 0x463d30u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_463d34:
    // 0x463d34: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x463d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_463d38:
    // 0x463d38: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x463d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_463d3c:
    // 0x463d3c: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x463d3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_463d40:
    // 0x463d40: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x463d40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_463d44:
    // 0x463d44: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x463d44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_463d48:
    // 0x463d48: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x463d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_463d4c:
    // 0x463d4c: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x463d4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_463d50:
    // 0x463d50: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x463d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_463d54:
    // 0x463d54: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x463d54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_463d58:
    // 0x463d58: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x463d58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_463d5c:
    // 0x463d5c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x463d5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_463d60:
    // 0x463d60: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x463d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_463d64:
    // 0x463d64: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x463d64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_463d68:
    // 0x463d68: 0xc088b74  jal         func_222DD0
label_463d6c:
    if (ctx->pc == 0x463D6Cu) {
        ctx->pc = 0x463D6Cu;
            // 0x463d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463D70u;
        goto label_463d70;
    }
    ctx->pc = 0x463D68u;
    SET_GPR_U32(ctx, 31, 0x463D70u);
    ctx->pc = 0x463D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463D68u;
            // 0x463d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463D70u; }
        if (ctx->pc != 0x463D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463D70u; }
        if (ctx->pc != 0x463D70u) { return; }
    }
    ctx->pc = 0x463D70u;
label_463d70:
    // 0x463d70: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x463d70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_463d74:
    // 0x463d74: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x463d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_463d78:
    // 0x463d78: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x463d78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_463d7c:
    // 0x463d7c: 0x320f809  jalr        $t9
label_463d80:
    if (ctx->pc == 0x463D80u) {
        ctx->pc = 0x463D80u;
            // 0x463d80: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x463D84u;
        goto label_463d84;
    }
    ctx->pc = 0x463D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x463D84u);
        ctx->pc = 0x463D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463D7Cu;
            // 0x463d80: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x463D84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x463D84u; }
            if (ctx->pc != 0x463D84u) { return; }
        }
        }
    }
    ctx->pc = 0x463D84u;
label_463d84:
    // 0x463d84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x463d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_463d88:
    // 0x463d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x463d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_463d8c:
    // 0x463d8c: 0x3e00008  jr          $ra
label_463d90:
    if (ctx->pc == 0x463D90u) {
        ctx->pc = 0x463D90u;
            // 0x463d90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x463D94u;
        goto label_463d94;
    }
    ctx->pc = 0x463D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x463D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463D8Cu;
            // 0x463d90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x463D94u;
label_463d94:
    // 0x463d94: 0x0  nop
    ctx->pc = 0x463d94u;
    // NOP
label_463d98:
    // 0x463d98: 0x0  nop
    ctx->pc = 0x463d98u;
    // NOP
label_463d9c:
    // 0x463d9c: 0x0  nop
    ctx->pc = 0x463d9cu;
    // NOP
}
