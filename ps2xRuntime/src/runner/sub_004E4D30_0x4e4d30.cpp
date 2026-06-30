#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E4D30
// Address: 0x4e4d30 - 0x4e4e50
void sub_004E4D30_0x4e4d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4D30_0x4e4d30");
#endif

    switch (ctx->pc) {
        case 0x4e4d30u: goto label_4e4d30;
        case 0x4e4d34u: goto label_4e4d34;
        case 0x4e4d38u: goto label_4e4d38;
        case 0x4e4d3cu: goto label_4e4d3c;
        case 0x4e4d40u: goto label_4e4d40;
        case 0x4e4d44u: goto label_4e4d44;
        case 0x4e4d48u: goto label_4e4d48;
        case 0x4e4d4cu: goto label_4e4d4c;
        case 0x4e4d50u: goto label_4e4d50;
        case 0x4e4d54u: goto label_4e4d54;
        case 0x4e4d58u: goto label_4e4d58;
        case 0x4e4d5cu: goto label_4e4d5c;
        case 0x4e4d60u: goto label_4e4d60;
        case 0x4e4d64u: goto label_4e4d64;
        case 0x4e4d68u: goto label_4e4d68;
        case 0x4e4d6cu: goto label_4e4d6c;
        case 0x4e4d70u: goto label_4e4d70;
        case 0x4e4d74u: goto label_4e4d74;
        case 0x4e4d78u: goto label_4e4d78;
        case 0x4e4d7cu: goto label_4e4d7c;
        case 0x4e4d80u: goto label_4e4d80;
        case 0x4e4d84u: goto label_4e4d84;
        case 0x4e4d88u: goto label_4e4d88;
        case 0x4e4d8cu: goto label_4e4d8c;
        case 0x4e4d90u: goto label_4e4d90;
        case 0x4e4d94u: goto label_4e4d94;
        case 0x4e4d98u: goto label_4e4d98;
        case 0x4e4d9cu: goto label_4e4d9c;
        case 0x4e4da0u: goto label_4e4da0;
        case 0x4e4da4u: goto label_4e4da4;
        case 0x4e4da8u: goto label_4e4da8;
        case 0x4e4dacu: goto label_4e4dac;
        case 0x4e4db0u: goto label_4e4db0;
        case 0x4e4db4u: goto label_4e4db4;
        case 0x4e4db8u: goto label_4e4db8;
        case 0x4e4dbcu: goto label_4e4dbc;
        case 0x4e4dc0u: goto label_4e4dc0;
        case 0x4e4dc4u: goto label_4e4dc4;
        case 0x4e4dc8u: goto label_4e4dc8;
        case 0x4e4dccu: goto label_4e4dcc;
        case 0x4e4dd0u: goto label_4e4dd0;
        case 0x4e4dd4u: goto label_4e4dd4;
        case 0x4e4dd8u: goto label_4e4dd8;
        case 0x4e4ddcu: goto label_4e4ddc;
        case 0x4e4de0u: goto label_4e4de0;
        case 0x4e4de4u: goto label_4e4de4;
        case 0x4e4de8u: goto label_4e4de8;
        case 0x4e4decu: goto label_4e4dec;
        case 0x4e4df0u: goto label_4e4df0;
        case 0x4e4df4u: goto label_4e4df4;
        case 0x4e4df8u: goto label_4e4df8;
        case 0x4e4dfcu: goto label_4e4dfc;
        case 0x4e4e00u: goto label_4e4e00;
        case 0x4e4e04u: goto label_4e4e04;
        case 0x4e4e08u: goto label_4e4e08;
        case 0x4e4e0cu: goto label_4e4e0c;
        case 0x4e4e10u: goto label_4e4e10;
        case 0x4e4e14u: goto label_4e4e14;
        case 0x4e4e18u: goto label_4e4e18;
        case 0x4e4e1cu: goto label_4e4e1c;
        case 0x4e4e20u: goto label_4e4e20;
        case 0x4e4e24u: goto label_4e4e24;
        case 0x4e4e28u: goto label_4e4e28;
        case 0x4e4e2cu: goto label_4e4e2c;
        case 0x4e4e30u: goto label_4e4e30;
        case 0x4e4e34u: goto label_4e4e34;
        case 0x4e4e38u: goto label_4e4e38;
        case 0x4e4e3cu: goto label_4e4e3c;
        case 0x4e4e40u: goto label_4e4e40;
        case 0x4e4e44u: goto label_4e4e44;
        case 0x4e4e48u: goto label_4e4e48;
        case 0x4e4e4cu: goto label_4e4e4c;
        default: break;
    }

    ctx->pc = 0x4e4d30u;

label_4e4d30:
    // 0x4e4d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e4d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e4d34:
    // 0x4e4d34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e4d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e4d38:
    // 0x4e4d38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e4d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e4d3c:
    // 0x4e4d3c: 0xc0d8760  jal         func_361D80
label_4e4d40:
    if (ctx->pc == 0x4E4D40u) {
        ctx->pc = 0x4E4D40u;
            // 0x4e4d40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E4D44u;
        goto label_4e4d44;
    }
    ctx->pc = 0x4E4D3Cu;
    SET_GPR_U32(ctx, 31, 0x4E4D44u);
    ctx->pc = 0x4E4D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4D3Cu;
            // 0x4e4d40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361D80u;
    if (runtime->hasFunction(0x361D80u)) {
        auto targetFn = runtime->lookupFunction(0x361D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4D44u; }
        if (ctx->pc != 0x4E4D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361D80_0x361d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4D44u; }
        if (ctx->pc != 0x4E4D44u) { return; }
    }
    ctx->pc = 0x4E4D44u;
label_4e4d44:
    // 0x4e4d44: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4e4d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e4d48:
    // 0x4e4d48: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4e4d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4e4d4c:
    // 0x4e4d4c: 0x320f809  jalr        $t9
label_4e4d50:
    if (ctx->pc == 0x4E4D50u) {
        ctx->pc = 0x4E4D50u;
            // 0x4e4d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E4D54u;
        goto label_4e4d54;
    }
    ctx->pc = 0x4E4D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E4D54u);
        ctx->pc = 0x4E4D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4D4Cu;
            // 0x4e4d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E4D54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E4D54u; }
            if (ctx->pc != 0x4E4D54u) { return; }
        }
        }
    }
    ctx->pc = 0x4E4D54u;
label_4e4d54:
    // 0x4e4d54: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4e4d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e4d58:
    // 0x4e4d58: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4e4d58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4e4d5c:
    // 0x4e4d5c: 0x320f809  jalr        $t9
label_4e4d60:
    if (ctx->pc == 0x4E4D60u) {
        ctx->pc = 0x4E4D60u;
            // 0x4e4d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E4D64u;
        goto label_4e4d64;
    }
    ctx->pc = 0x4E4D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E4D64u);
        ctx->pc = 0x4E4D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4D5Cu;
            // 0x4e4d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E4D64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E4D64u; }
            if (ctx->pc != 0x4E4D64u) { return; }
        }
        }
    }
    ctx->pc = 0x4E4D64u;
label_4e4d64:
    // 0x4e4d64: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x4e4d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4e4d68:
    // 0x4e4d68: 0x3c02ff1e  lui         $v0, 0xFF1E
    ctx->pc = 0x4e4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65310 << 16));
label_4e4d6c:
    // 0x4e4d6c: 0x3444ffbf  ori         $a0, $v0, 0xFFBF
    ctx->pc = 0x4e4d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65471);
label_4e4d70:
    // 0x4e4d70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e4d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e4d74:
    // 0x4e4d74: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4e4d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4e4d78:
    // 0x4e4d78: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x4e4d78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_4e4d7c:
    // 0x4e4d7c: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x4e4d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_4e4d80:
    // 0x4e4d80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e4d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e4d84:
    // 0x4e4d84: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x4e4d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_4e4d88:
    // 0x4e4d88: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x4e4d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4e4d8c:
    // 0x4e4d8c: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4e4d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_4e4d90:
    // 0x4e4d90: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4e4d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4e4d94:
    // 0x4e4d94: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4e4d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e4d98:
    // 0x4e4d98: 0xc08bff0  jal         func_22FFC0
label_4e4d9c:
    if (ctx->pc == 0x4E4D9Cu) {
        ctx->pc = 0x4E4D9Cu;
            // 0x4e4d9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E4DA0u;
        goto label_4e4da0;
    }
    ctx->pc = 0x4E4D98u;
    SET_GPR_U32(ctx, 31, 0x4E4DA0u);
    ctx->pc = 0x4E4D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4D98u;
            // 0x4e4d9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4DA0u; }
        if (ctx->pc != 0x4E4DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4DA0u; }
        if (ctx->pc != 0x4E4DA0u) { return; }
    }
    ctx->pc = 0x4E4DA0u;
label_4e4da0:
    // 0x4e4da0: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x4e4da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_4e4da4:
    // 0x4e4da4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4e4da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_4e4da8:
    // 0x4e4da8: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x4e4da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_4e4dac:
    // 0x4e4dac: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e4dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4e4db0:
    // 0x4e4db0: 0x24638298  addiu       $v1, $v1, -0x7D68
    ctx->pc = 0x4e4db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935192));
label_4e4db4:
    // 0x4e4db4: 0x2442829c  addiu       $v0, $v0, -0x7D64
    ctx->pc = 0x4e4db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935196));
label_4e4db8:
    // 0x4e4db8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4e4db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4e4dbc:
    // 0x4e4dbc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4e4dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_4e4dc0:
    // 0x4e4dc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4e4dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4e4dc4:
    // 0x4e4dc4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4e4dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e4dc8:
    // 0x4e4dc8: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x4e4dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_4e4dcc:
    // 0x4e4dcc: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x4e4dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_4e4dd0:
    // 0x4e4dd0: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x4e4dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e4dd4:
    // 0x4e4dd4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4e4dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4e4dd8:
    // 0x4e4dd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e4dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4e4ddc:
    // 0x4e4ddc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x4e4ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e4de0:
    // 0x4e4de0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4e4de0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_4e4de4:
    // 0x4e4de4: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x4e4de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_4e4de8:
    // 0x4e4de8: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x4e4de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
label_4e4dec:
    // 0x4e4dec: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x4e4decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
label_4e4df0:
    // 0x4e4df0: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x4e4df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
label_4e4df4:
    // 0x4e4df4: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x4e4df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
label_4e4df8:
    // 0x4e4df8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4e4df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4e4dfc:
    // 0x4e4dfc: 0xc6020118  lwc1        $f2, 0x118($s0)
    ctx->pc = 0x4e4dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e4e00:
    // 0x4e4e00: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x4e4e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e4e04:
    // 0x4e4e04: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x4e4e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e4e08:
    // 0x4e4e08: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4e4e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4e4e0c:
    // 0x4e4e0c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x4e4e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_4e4e10:
    // 0x4e4e10: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x4e4e10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_4e4e14:
    // 0x4e4e14: 0xc089290  jal         func_224A40
label_4e4e18:
    if (ctx->pc == 0x4E4E18u) {
        ctx->pc = 0x4E4E18u;
            // 0x4e4e18: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->pc = 0x4E4E1Cu;
        goto label_4e4e1c;
    }
    ctx->pc = 0x4E4E14u;
    SET_GPR_U32(ctx, 31, 0x4E4E1Cu);
    ctx->pc = 0x4E4E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4E14u;
            // 0x4e4e18: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4E1Cu; }
        if (ctx->pc != 0x4E4E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4E1Cu; }
        if (ctx->pc != 0x4E4E1Cu) { return; }
    }
    ctx->pc = 0x4E4E1Cu;
label_4e4e1c:
    // 0x4e4e1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e4e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e4e20:
    // 0x4e4e20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e4e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e4e24:
    // 0x4e4e24: 0x3e00008  jr          $ra
label_4e4e28:
    if (ctx->pc == 0x4E4E28u) {
        ctx->pc = 0x4E4E28u;
            // 0x4e4e28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E4E2Cu;
        goto label_4e4e2c;
    }
    ctx->pc = 0x4E4E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4E24u;
            // 0x4e4e28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E4E2Cu;
label_4e4e2c:
    // 0x4e4e2c: 0x0  nop
    ctx->pc = 0x4e4e2cu;
    // NOP
label_4e4e30:
    // 0x4e4e30: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x4e4e30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
label_4e4e34:
    // 0x4e4e34: 0xac8000ec  sw          $zero, 0xEC($a0)
    ctx->pc = 0x4e4e34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 0));
label_4e4e38:
    // 0x4e4e38: 0xa4800100  sh          $zero, 0x100($a0)
    ctx->pc = 0x4e4e38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 0));
label_4e4e3c:
    // 0x4e4e3c: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x4e4e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
label_4e4e40:
    // 0x4e4e40: 0x3e00008  jr          $ra
label_4e4e44:
    if (ctx->pc == 0x4E4E44u) {
        ctx->pc = 0x4E4E44u;
            // 0x4e4e44: 0xac800120  sw          $zero, 0x120($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 0));
        ctx->pc = 0x4E4E48u;
        goto label_4e4e48;
    }
    ctx->pc = 0x4E4E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4E40u;
            // 0x4e4e44: 0xac800120  sw          $zero, 0x120($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E4E48u;
label_4e4e48:
    // 0x4e4e48: 0x0  nop
    ctx->pc = 0x4e4e48u;
    // NOP
label_4e4e4c:
    // 0x4e4e4c: 0x0  nop
    ctx->pc = 0x4e4e4cu;
    // NOP
}
