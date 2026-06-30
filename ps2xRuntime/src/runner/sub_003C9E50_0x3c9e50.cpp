#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C9E50
// Address: 0x3c9e50 - 0x3ca0e0
void sub_003C9E50_0x3c9e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9E50_0x3c9e50");
#endif

    switch (ctx->pc) {
        case 0x3c9e50u: goto label_3c9e50;
        case 0x3c9e54u: goto label_3c9e54;
        case 0x3c9e58u: goto label_3c9e58;
        case 0x3c9e5cu: goto label_3c9e5c;
        case 0x3c9e60u: goto label_3c9e60;
        case 0x3c9e64u: goto label_3c9e64;
        case 0x3c9e68u: goto label_3c9e68;
        case 0x3c9e6cu: goto label_3c9e6c;
        case 0x3c9e70u: goto label_3c9e70;
        case 0x3c9e74u: goto label_3c9e74;
        case 0x3c9e78u: goto label_3c9e78;
        case 0x3c9e7cu: goto label_3c9e7c;
        case 0x3c9e80u: goto label_3c9e80;
        case 0x3c9e84u: goto label_3c9e84;
        case 0x3c9e88u: goto label_3c9e88;
        case 0x3c9e8cu: goto label_3c9e8c;
        case 0x3c9e90u: goto label_3c9e90;
        case 0x3c9e94u: goto label_3c9e94;
        case 0x3c9e98u: goto label_3c9e98;
        case 0x3c9e9cu: goto label_3c9e9c;
        case 0x3c9ea0u: goto label_3c9ea0;
        case 0x3c9ea4u: goto label_3c9ea4;
        case 0x3c9ea8u: goto label_3c9ea8;
        case 0x3c9eacu: goto label_3c9eac;
        case 0x3c9eb0u: goto label_3c9eb0;
        case 0x3c9eb4u: goto label_3c9eb4;
        case 0x3c9eb8u: goto label_3c9eb8;
        case 0x3c9ebcu: goto label_3c9ebc;
        case 0x3c9ec0u: goto label_3c9ec0;
        case 0x3c9ec4u: goto label_3c9ec4;
        case 0x3c9ec8u: goto label_3c9ec8;
        case 0x3c9eccu: goto label_3c9ecc;
        case 0x3c9ed0u: goto label_3c9ed0;
        case 0x3c9ed4u: goto label_3c9ed4;
        case 0x3c9ed8u: goto label_3c9ed8;
        case 0x3c9edcu: goto label_3c9edc;
        case 0x3c9ee0u: goto label_3c9ee0;
        case 0x3c9ee4u: goto label_3c9ee4;
        case 0x3c9ee8u: goto label_3c9ee8;
        case 0x3c9eecu: goto label_3c9eec;
        case 0x3c9ef0u: goto label_3c9ef0;
        case 0x3c9ef4u: goto label_3c9ef4;
        case 0x3c9ef8u: goto label_3c9ef8;
        case 0x3c9efcu: goto label_3c9efc;
        case 0x3c9f00u: goto label_3c9f00;
        case 0x3c9f04u: goto label_3c9f04;
        case 0x3c9f08u: goto label_3c9f08;
        case 0x3c9f0cu: goto label_3c9f0c;
        case 0x3c9f10u: goto label_3c9f10;
        case 0x3c9f14u: goto label_3c9f14;
        case 0x3c9f18u: goto label_3c9f18;
        case 0x3c9f1cu: goto label_3c9f1c;
        case 0x3c9f20u: goto label_3c9f20;
        case 0x3c9f24u: goto label_3c9f24;
        case 0x3c9f28u: goto label_3c9f28;
        case 0x3c9f2cu: goto label_3c9f2c;
        case 0x3c9f30u: goto label_3c9f30;
        case 0x3c9f34u: goto label_3c9f34;
        case 0x3c9f38u: goto label_3c9f38;
        case 0x3c9f3cu: goto label_3c9f3c;
        case 0x3c9f40u: goto label_3c9f40;
        case 0x3c9f44u: goto label_3c9f44;
        case 0x3c9f48u: goto label_3c9f48;
        case 0x3c9f4cu: goto label_3c9f4c;
        case 0x3c9f50u: goto label_3c9f50;
        case 0x3c9f54u: goto label_3c9f54;
        case 0x3c9f58u: goto label_3c9f58;
        case 0x3c9f5cu: goto label_3c9f5c;
        case 0x3c9f60u: goto label_3c9f60;
        case 0x3c9f64u: goto label_3c9f64;
        case 0x3c9f68u: goto label_3c9f68;
        case 0x3c9f6cu: goto label_3c9f6c;
        case 0x3c9f70u: goto label_3c9f70;
        case 0x3c9f74u: goto label_3c9f74;
        case 0x3c9f78u: goto label_3c9f78;
        case 0x3c9f7cu: goto label_3c9f7c;
        case 0x3c9f80u: goto label_3c9f80;
        case 0x3c9f84u: goto label_3c9f84;
        case 0x3c9f88u: goto label_3c9f88;
        case 0x3c9f8cu: goto label_3c9f8c;
        case 0x3c9f90u: goto label_3c9f90;
        case 0x3c9f94u: goto label_3c9f94;
        case 0x3c9f98u: goto label_3c9f98;
        case 0x3c9f9cu: goto label_3c9f9c;
        case 0x3c9fa0u: goto label_3c9fa0;
        case 0x3c9fa4u: goto label_3c9fa4;
        case 0x3c9fa8u: goto label_3c9fa8;
        case 0x3c9facu: goto label_3c9fac;
        case 0x3c9fb0u: goto label_3c9fb0;
        case 0x3c9fb4u: goto label_3c9fb4;
        case 0x3c9fb8u: goto label_3c9fb8;
        case 0x3c9fbcu: goto label_3c9fbc;
        case 0x3c9fc0u: goto label_3c9fc0;
        case 0x3c9fc4u: goto label_3c9fc4;
        case 0x3c9fc8u: goto label_3c9fc8;
        case 0x3c9fccu: goto label_3c9fcc;
        case 0x3c9fd0u: goto label_3c9fd0;
        case 0x3c9fd4u: goto label_3c9fd4;
        case 0x3c9fd8u: goto label_3c9fd8;
        case 0x3c9fdcu: goto label_3c9fdc;
        case 0x3c9fe0u: goto label_3c9fe0;
        case 0x3c9fe4u: goto label_3c9fe4;
        case 0x3c9fe8u: goto label_3c9fe8;
        case 0x3c9fecu: goto label_3c9fec;
        case 0x3c9ff0u: goto label_3c9ff0;
        case 0x3c9ff4u: goto label_3c9ff4;
        case 0x3c9ff8u: goto label_3c9ff8;
        case 0x3c9ffcu: goto label_3c9ffc;
        case 0x3ca000u: goto label_3ca000;
        case 0x3ca004u: goto label_3ca004;
        case 0x3ca008u: goto label_3ca008;
        case 0x3ca00cu: goto label_3ca00c;
        case 0x3ca010u: goto label_3ca010;
        case 0x3ca014u: goto label_3ca014;
        case 0x3ca018u: goto label_3ca018;
        case 0x3ca01cu: goto label_3ca01c;
        case 0x3ca020u: goto label_3ca020;
        case 0x3ca024u: goto label_3ca024;
        case 0x3ca028u: goto label_3ca028;
        case 0x3ca02cu: goto label_3ca02c;
        case 0x3ca030u: goto label_3ca030;
        case 0x3ca034u: goto label_3ca034;
        case 0x3ca038u: goto label_3ca038;
        case 0x3ca03cu: goto label_3ca03c;
        case 0x3ca040u: goto label_3ca040;
        case 0x3ca044u: goto label_3ca044;
        case 0x3ca048u: goto label_3ca048;
        case 0x3ca04cu: goto label_3ca04c;
        case 0x3ca050u: goto label_3ca050;
        case 0x3ca054u: goto label_3ca054;
        case 0x3ca058u: goto label_3ca058;
        case 0x3ca05cu: goto label_3ca05c;
        case 0x3ca060u: goto label_3ca060;
        case 0x3ca064u: goto label_3ca064;
        case 0x3ca068u: goto label_3ca068;
        case 0x3ca06cu: goto label_3ca06c;
        case 0x3ca070u: goto label_3ca070;
        case 0x3ca074u: goto label_3ca074;
        case 0x3ca078u: goto label_3ca078;
        case 0x3ca07cu: goto label_3ca07c;
        case 0x3ca080u: goto label_3ca080;
        case 0x3ca084u: goto label_3ca084;
        case 0x3ca088u: goto label_3ca088;
        case 0x3ca08cu: goto label_3ca08c;
        case 0x3ca090u: goto label_3ca090;
        case 0x3ca094u: goto label_3ca094;
        case 0x3ca098u: goto label_3ca098;
        case 0x3ca09cu: goto label_3ca09c;
        case 0x3ca0a0u: goto label_3ca0a0;
        case 0x3ca0a4u: goto label_3ca0a4;
        case 0x3ca0a8u: goto label_3ca0a8;
        case 0x3ca0acu: goto label_3ca0ac;
        case 0x3ca0b0u: goto label_3ca0b0;
        case 0x3ca0b4u: goto label_3ca0b4;
        case 0x3ca0b8u: goto label_3ca0b8;
        case 0x3ca0bcu: goto label_3ca0bc;
        case 0x3ca0c0u: goto label_3ca0c0;
        case 0x3ca0c4u: goto label_3ca0c4;
        case 0x3ca0c8u: goto label_3ca0c8;
        case 0x3ca0ccu: goto label_3ca0cc;
        case 0x3ca0d0u: goto label_3ca0d0;
        case 0x3ca0d4u: goto label_3ca0d4;
        case 0x3ca0d8u: goto label_3ca0d8;
        case 0x3ca0dcu: goto label_3ca0dc;
        default: break;
    }

    ctx->pc = 0x3c9e50u;

label_3c9e50:
    // 0x3c9e50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3c9e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3c9e54:
    // 0x3c9e54: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3c9e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3c9e58:
    // 0x3c9e58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c9e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c9e5c:
    // 0x3c9e5c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x3c9e5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_3c9e60:
    // 0x3c9e60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c9e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c9e64:
    // 0x3c9e64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c9e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c9e68:
    // 0x3c9e68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c9e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c9e6c:
    // 0x3c9e6c: 0xc0f2870  jal         func_3CA1C0
label_3c9e70:
    if (ctx->pc == 0x3C9E70u) {
        ctx->pc = 0x3C9E70u;
            // 0x3c9e70: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3C9E74u;
        goto label_3c9e74;
    }
    ctx->pc = 0x3C9E6Cu;
    SET_GPR_U32(ctx, 31, 0x3C9E74u);
    ctx->pc = 0x3C9E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9E6Cu;
            // 0x3c9e70: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CA1C0u;
    if (runtime->hasFunction(0x3CA1C0u)) {
        auto targetFn = runtime->lookupFunction(0x3CA1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9E74u; }
        if (ctx->pc != 0x3C9E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CA1C0_0x3ca1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9E74u; }
        if (ctx->pc != 0x3C9E74u) { return; }
    }
    ctx->pc = 0x3C9E74u;
label_3c9e74:
    // 0x3c9e74: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3c9e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3c9e78:
    // 0x3c9e78: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3c9e7c:
    // 0x3c9e7c: 0x24638f50  addiu       $v1, $v1, -0x70B0
    ctx->pc = 0x3c9e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938448));
label_3c9e80:
    // 0x3c9e80: 0x24428f88  addiu       $v0, $v0, -0x7078
    ctx->pc = 0x3c9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938504));
label_3c9e84:
    // 0x3c9e84: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3c9e84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3c9e88:
    // 0x3c9e88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c9e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9e8c:
    // 0x3c9e8c: 0xc0f286c  jal         func_3CA1B0
label_3c9e90:
    if (ctx->pc == 0x3C9E90u) {
        ctx->pc = 0x3C9E90u;
            // 0x3c9e90: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3C9E94u;
        goto label_3c9e94;
    }
    ctx->pc = 0x3C9E8Cu;
    SET_GPR_U32(ctx, 31, 0x3C9E94u);
    ctx->pc = 0x3C9E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9E8Cu;
            // 0x3c9e90: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CA1B0u;
    if (runtime->hasFunction(0x3CA1B0u)) {
        auto targetFn = runtime->lookupFunction(0x3CA1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9E94u; }
        if (ctx->pc != 0x3C9E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CA1B0_0x3ca1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9E94u; }
        if (ctx->pc != 0x3C9E94u) { return; }
    }
    ctx->pc = 0x3C9E94u;
label_3c9e94:
    // 0x3c9e94: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3c9e94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3c9e98:
    // 0x3c9e98: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x3c9e98u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
label_3c9e9c:
    // 0x3c9e9c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c9e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c9ea0:
    // 0x3c9ea0: 0x3c09006b  lui         $t1, 0x6B
    ctx->pc = 0x3c9ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)107 << 16));
label_3c9ea4:
    // 0x3c9ea4: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x3c9ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3c9ea8:
    // 0x3c9ea8: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x3c9ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
label_3c9eac:
    // 0x3c9eac: 0x254ac4f0  addiu       $t2, $t2, -0x3B10
    ctx->pc = 0x3c9eacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952176));
label_3c9eb0:
    // 0x3c9eb0: 0x25298ea0  addiu       $t1, $t1, -0x7160
    ctx->pc = 0x3c9eb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294938272));
label_3c9eb4:
    // 0x3c9eb4: 0x25088ed8  addiu       $t0, $t0, -0x7128
    ctx->pc = 0x3c9eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938328));
label_3c9eb8:
    // 0x3c9eb8: 0x3c073fc0  lui         $a3, 0x3FC0
    ctx->pc = 0x3c9eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16320 << 16));
label_3c9ebc:
    // 0x3c9ebc: 0x8c6b0968  lw          $t3, 0x968($v1)
    ctx->pc = 0x3c9ebcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_3c9ec0:
    // 0x3c9ec0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x3c9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_3c9ec4:
    // 0x3c9ec4: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x3c9ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3c9ec8:
    // 0x3c9ec8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3c9ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3c9ecc:
    // 0x3c9ecc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3c9eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3c9ed0:
    // 0x3c9ed0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3c9ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3c9ed4:
    // 0x3c9ed4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x3c9ed4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_3c9ed8:
    // 0x3c9ed8: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x3c9ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_3c9edc:
    // 0x3c9edc: 0x914a0000  lbu         $t2, 0x0($t2)
    ctx->pc = 0x3c9edcu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_3c9ee0:
    // 0x3c9ee0: 0xa24a00a8  sb          $t2, 0xA8($s2)
    ctx->pc = 0x3c9ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 168), (uint8_t)GPR_U32(ctx, 10));
label_3c9ee4:
    // 0x3c9ee4: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x3c9ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
label_3c9ee8:
    // 0x3c9ee8: 0xae480064  sw          $t0, 0x64($s2)
    ctx->pc = 0x3c9ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 8));
label_3c9eec:
    // 0x3c9eec: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x3c9eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_3c9ef0:
    // 0x3c9ef0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3c9ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3c9ef4:
    // 0x3c9ef4: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x3c9ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
label_3c9ef8:
    // 0x3c9ef8: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x3c9ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_3c9efc:
    // 0x3c9efc: 0xc0a7a88  jal         func_29EA20
label_3c9f00:
    if (ctx->pc == 0x3C9F00u) {
        ctx->pc = 0x3C9F00u;
            // 0x3c9f00: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x3C9F04u;
        goto label_3c9f04;
    }
    ctx->pc = 0x3C9EFCu;
    SET_GPR_U32(ctx, 31, 0x3C9F04u);
    ctx->pc = 0x3C9F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9EFCu;
            // 0x3c9f00: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9F04u; }
        if (ctx->pc != 0x3C9F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9F04u; }
        if (ctx->pc != 0x3C9F04u) { return; }
    }
    ctx->pc = 0x3C9F04u;
label_3c9f04:
    // 0x3c9f04: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3c9f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3c9f08:
    // 0x3c9f08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c9f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c9f0c:
    // 0x3c9f0c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_3c9f10:
    if (ctx->pc == 0x3C9F10u) {
        ctx->pc = 0x3C9F10u;
            // 0x3c9f10: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3C9F14u;
        goto label_3c9f14;
    }
    ctx->pc = 0x3C9F0Cu;
    {
        const bool branch_taken_0x3c9f0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9F0Cu;
            // 0x3c9f10: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9f0c) {
            ctx->pc = 0x3C9F2Cu;
            goto label_3c9f2c;
        }
    }
    ctx->pc = 0x3C9F14u;
label_3c9f14:
    // 0x3c9f14: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3c9f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3c9f18:
    // 0x3c9f18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c9f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9f1c:
    // 0x3c9f1c: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x3c9f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c9f20:
    // 0x3c9f20: 0xc0804bc  jal         func_2012F0
label_3c9f24:
    if (ctx->pc == 0x3C9F24u) {
        ctx->pc = 0x3C9F24u;
            // 0x3c9f24: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3C9F28u;
        goto label_3c9f28;
    }
    ctx->pc = 0x3C9F20u;
    SET_GPR_U32(ctx, 31, 0x3C9F28u);
    ctx->pc = 0x3C9F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9F20u;
            // 0x3c9f24: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9F28u; }
        if (ctx->pc != 0x3C9F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9F28u; }
        if (ctx->pc != 0x3C9F28u) { return; }
    }
    ctx->pc = 0x3C9F28u;
label_3c9f28:
    // 0x3c9f28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c9f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c9f2c:
    // 0x3c9f2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c9f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3c9f30:
    // 0x3c9f30: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3c9f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c9f34:
    // 0x3c9f34: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x3c9f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_3c9f38:
    // 0x3c9f38: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3c9f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3c9f3c:
    // 0x3c9f3c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3c9f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_3c9f40:
    // 0x3c9f40: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x3c9f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_3c9f44:
    // 0x3c9f44: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x3c9f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_3c9f48:
    // 0x3c9f48: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x3c9f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_3c9f4c:
    // 0x3c9f4c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x3c9f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_3c9f50:
    // 0x3c9f50: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x3c9f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_3c9f54:
    // 0x3c9f54: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x3c9f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_3c9f58:
    // 0x3c9f58: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x3c9f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_3c9f5c:
    // 0x3c9f5c: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x3c9f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_3c9f60:
    // 0x3c9f60: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3c9f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3c9f64:
    // 0x3c9f64: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3c9f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3c9f68:
    // 0x3c9f68: 0xc0a3830  jal         func_28E0C0
label_3c9f6c:
    if (ctx->pc == 0x3C9F6Cu) {
        ctx->pc = 0x3C9F6Cu;
            // 0x3c9f6c: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x3C9F70u;
        goto label_3c9f70;
    }
    ctx->pc = 0x3C9F68u;
    SET_GPR_U32(ctx, 31, 0x3C9F70u);
    ctx->pc = 0x3C9F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9F68u;
            // 0x3c9f6c: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9F70u; }
        if (ctx->pc != 0x3C9F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9F70u; }
        if (ctx->pc != 0x3C9F70u) { return; }
    }
    ctx->pc = 0x3C9F70u;
label_3c9f70:
    // 0x3c9f70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3c9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3c9f74:
    // 0x3c9f74: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x3c9f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_3c9f78:
    // 0x3c9f78: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3c9f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3c9f7c:
    // 0x3c9f7c: 0xc0a7a88  jal         func_29EA20
label_3c9f80:
    if (ctx->pc == 0x3C9F80u) {
        ctx->pc = 0x3C9F80u;
            // 0x3c9f80: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x3C9F84u;
        goto label_3c9f84;
    }
    ctx->pc = 0x3C9F7Cu;
    SET_GPR_U32(ctx, 31, 0x3C9F84u);
    ctx->pc = 0x3C9F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9F7Cu;
            // 0x3c9f80: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9F84u; }
        if (ctx->pc != 0x3C9F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9F84u; }
        if (ctx->pc != 0x3C9F84u) { return; }
    }
    ctx->pc = 0x3C9F84u;
label_3c9f84:
    // 0x3c9f84: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x3c9f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_3c9f88:
    // 0x3c9f88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c9f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c9f8c:
    // 0x3c9f8c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_3c9f90:
    if (ctx->pc == 0x3C9F90u) {
        ctx->pc = 0x3C9F90u;
            // 0x3c9f90: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3C9F94u;
        goto label_3c9f94;
    }
    ctx->pc = 0x3C9F8Cu;
    {
        const bool branch_taken_0x3c9f8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9F8Cu;
            // 0x3c9f90: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9f8c) {
            ctx->pc = 0x3C9FA8u;
            goto label_3c9fa8;
        }
    }
    ctx->pc = 0x3C9F94u;
label_3c9f94:
    // 0x3c9f94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c9f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9f98:
    // 0x3c9f98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c9f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9f9c:
    // 0x3c9f9c: 0xc082940  jal         func_20A500
label_3c9fa0:
    if (ctx->pc == 0x3C9FA0u) {
        ctx->pc = 0x3C9FA0u;
            // 0x3c9fa0: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3C9FA4u;
        goto label_3c9fa4;
    }
    ctx->pc = 0x3C9F9Cu;
    SET_GPR_U32(ctx, 31, 0x3C9FA4u);
    ctx->pc = 0x3C9FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9F9Cu;
            // 0x3c9fa0: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9FA4u; }
        if (ctx->pc != 0x3C9FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C9FA4u; }
        if (ctx->pc != 0x3C9FA4u) { return; }
    }
    ctx->pc = 0x3C9FA4u;
label_3c9fa4:
    // 0x3c9fa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c9fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c9fa8:
    // 0x3c9fa8: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x3c9fa8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_3c9fac:
    // 0x3c9fac: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3c9fb0:
    if (ctx->pc == 0x3C9FB0u) {
        ctx->pc = 0x3C9FB0u;
            // 0x3c9fb0: 0xae500060  sw          $s0, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 16));
        ctx->pc = 0x3C9FB4u;
        goto label_3c9fb4;
    }
    ctx->pc = 0x3C9FACu;
    {
        const bool branch_taken_0x3c9fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9fac) {
            ctx->pc = 0x3C9FB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9FACu;
            // 0x3c9fb0: 0xae500060  sw          $s0, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C9FF0u;
            goto label_3c9ff0;
        }
    }
    ctx->pc = 0x3C9FB4u;
label_3c9fb4:
    // 0x3c9fb4: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x3c9fb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_3c9fb8:
    // 0x3c9fb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c9fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3c9fbc:
    // 0x3c9fbc: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x3c9fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_3c9fc0:
    // 0x3c9fc0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3c9fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3c9fc4:
    // 0x3c9fc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c9fc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3c9fc8:
    // 0x3c9fc8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3c9fcc:
    if (ctx->pc == 0x3C9FCCu) {
        ctx->pc = 0x3C9FD0u;
        goto label_3c9fd0;
    }
    ctx->pc = 0x3C9FC8u;
    {
        const bool branch_taken_0x3c9fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c9fc8) {
            ctx->pc = 0x3C9FECu;
            goto label_3c9fec;
        }
    }
    ctx->pc = 0x3C9FD0u;
label_3c9fd0:
    // 0x3c9fd0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_3c9fd4:
    if (ctx->pc == 0x3C9FD4u) {
        ctx->pc = 0x3C9FD8u;
        goto label_3c9fd8;
    }
    ctx->pc = 0x3C9FD0u;
    {
        const bool branch_taken_0x3c9fd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9fd0) {
            ctx->pc = 0x3C9FECu;
            goto label_3c9fec;
        }
    }
    ctx->pc = 0x3C9FD8u;
label_3c9fd8:
    // 0x3c9fd8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3c9fd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c9fdc:
    // 0x3c9fdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c9fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9fe0:
    // 0x3c9fe0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3c9fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3c9fe4:
    // 0x3c9fe4: 0x320f809  jalr        $t9
label_3c9fe8:
    if (ctx->pc == 0x3C9FE8u) {
        ctx->pc = 0x3C9FE8u;
            // 0x3c9fe8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C9FECu;
        goto label_3c9fec;
    }
    ctx->pc = 0x3C9FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C9FECu);
        ctx->pc = 0x3C9FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C9FE4u;
            // 0x3c9fe8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C9FECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C9FECu; }
            if (ctx->pc != 0x3C9FECu) { return; }
        }
        }
    }
    ctx->pc = 0x3C9FECu;
label_3c9fec:
    // 0x3c9fec: 0xae500060  sw          $s0, 0x60($s2)
    ctx->pc = 0x3c9fecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 16));
label_3c9ff0:
    // 0x3c9ff0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3c9ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9ff4:
    // 0x3c9ff4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c9ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c9ff8:
    // 0x3c9ff8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c9ff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c9ffc:
    // 0x3c9ffc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c9ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ca000:
    // 0x3ca000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ca000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ca004:
    // 0x3ca004: 0x3e00008  jr          $ra
label_3ca008:
    if (ctx->pc == 0x3CA008u) {
        ctx->pc = 0x3CA008u;
            // 0x3ca008: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3CA00Cu;
        goto label_3ca00c;
    }
    ctx->pc = 0x3CA004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA004u;
            // 0x3ca008: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CA00Cu;
label_3ca00c:
    // 0x3ca00c: 0x0  nop
    ctx->pc = 0x3ca00cu;
    // NOP
label_3ca010:
    // 0x3ca010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ca010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ca014:
    // 0x3ca014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ca014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3ca018:
    // 0x3ca018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ca018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ca01c:
    // 0x3ca01c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ca01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ca020:
    // 0x3ca020: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ca020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ca024:
    // 0x3ca024: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_3ca028:
    if (ctx->pc == 0x3CA028u) {
        ctx->pc = 0x3CA028u;
            // 0x3ca028: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CA02Cu;
        goto label_3ca02c;
    }
    ctx->pc = 0x3CA024u;
    {
        const bool branch_taken_0x3ca024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA024u;
            // 0x3ca028: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca024) {
            ctx->pc = 0x3CA0C4u;
            goto label_3ca0c4;
        }
    }
    ctx->pc = 0x3CA02Cu;
label_3ca02c:
    // 0x3ca02c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3ca02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3ca030:
    // 0x3ca030: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3ca030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3ca034:
    // 0x3ca034: 0x24638f50  addiu       $v1, $v1, -0x70B0
    ctx->pc = 0x3ca034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938448));
label_3ca038:
    // 0x3ca038: 0x24428f88  addiu       $v0, $v0, -0x7078
    ctx->pc = 0x3ca038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938504));
label_3ca03c:
    // 0x3ca03c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3ca03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3ca040:
    // 0x3ca040: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_3ca044:
    if (ctx->pc == 0x3CA044u) {
        ctx->pc = 0x3CA044u;
            // 0x3ca044: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3CA048u;
        goto label_3ca048;
    }
    ctx->pc = 0x3CA040u;
    {
        const bool branch_taken_0x3ca040 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA040u;
            // 0x3ca044: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca040) {
            ctx->pc = 0x3CA0ACu;
            goto label_3ca0ac;
        }
    }
    ctx->pc = 0x3CA048u;
label_3ca048:
    // 0x3ca048: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3ca048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3ca04c:
    // 0x3ca04c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3ca04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3ca050:
    // 0x3ca050: 0x24638f00  addiu       $v1, $v1, -0x7100
    ctx->pc = 0x3ca050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938368));
label_3ca054:
    // 0x3ca054: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3ca054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
label_3ca058:
    // 0x3ca058: 0x24428f38  addiu       $v0, $v0, -0x70C8
    ctx->pc = 0x3ca058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938424));
label_3ca05c:
    // 0x3ca05c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3ca05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3ca060:
    // 0x3ca060: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3ca060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_3ca064:
    // 0x3ca064: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3ca064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_3ca068:
    // 0x3ca068: 0xc0407c0  jal         func_101F00
label_3ca06c:
    if (ctx->pc == 0x3CA06Cu) {
        ctx->pc = 0x3CA06Cu;
            // 0x3ca06c: 0x24a596b0  addiu       $a1, $a1, -0x6950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940336));
        ctx->pc = 0x3CA070u;
        goto label_3ca070;
    }
    ctx->pc = 0x3CA068u;
    SET_GPR_U32(ctx, 31, 0x3CA070u);
    ctx->pc = 0x3CA06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA068u;
            // 0x3ca06c: 0x24a596b0  addiu       $a1, $a1, -0x6950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA070u; }
        if (ctx->pc != 0x3CA070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA070u; }
        if (ctx->pc != 0x3CA070u) { return; }
    }
    ctx->pc = 0x3CA070u;
label_3ca070:
    // 0x3ca070: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3ca070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_3ca074:
    // 0x3ca074: 0xc0a8c98  jal         func_2A3260
label_3ca078:
    if (ctx->pc == 0x3CA078u) {
        ctx->pc = 0x3CA078u;
            // 0x3ca078: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3CA07Cu;
        goto label_3ca07c;
    }
    ctx->pc = 0x3CA074u;
    SET_GPR_U32(ctx, 31, 0x3CA07Cu);
    ctx->pc = 0x3CA078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA074u;
            // 0x3ca078: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA07Cu; }
        if (ctx->pc != 0x3CA07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA07Cu; }
        if (ctx->pc != 0x3CA07Cu) { return; }
    }
    ctx->pc = 0x3CA07Cu;
label_3ca07c:
    // 0x3ca07c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x3ca07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_3ca080:
    // 0x3ca080: 0xc0f2850  jal         func_3CA140
label_3ca084:
    if (ctx->pc == 0x3CA084u) {
        ctx->pc = 0x3CA084u;
            // 0x3ca084: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3CA088u;
        goto label_3ca088;
    }
    ctx->pc = 0x3CA080u;
    SET_GPR_U32(ctx, 31, 0x3CA088u);
    ctx->pc = 0x3CA084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA080u;
            // 0x3ca084: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CA140u;
    if (runtime->hasFunction(0x3CA140u)) {
        auto targetFn = runtime->lookupFunction(0x3CA140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA088u; }
        if (ctx->pc != 0x3CA088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CA140_0x3ca140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA088u; }
        if (ctx->pc != 0x3CA088u) { return; }
    }
    ctx->pc = 0x3CA088u;
label_3ca088:
    // 0x3ca088: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3ca088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_3ca08c:
    // 0x3ca08c: 0xc0f2850  jal         func_3CA140
label_3ca090:
    if (ctx->pc == 0x3CA090u) {
        ctx->pc = 0x3CA090u;
            // 0x3ca090: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3CA094u;
        goto label_3ca094;
    }
    ctx->pc = 0x3CA08Cu;
    SET_GPR_U32(ctx, 31, 0x3CA094u);
    ctx->pc = 0x3CA090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA08Cu;
            // 0x3ca090: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CA140u;
    if (runtime->hasFunction(0x3CA140u)) {
        auto targetFn = runtime->lookupFunction(0x3CA140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA094u; }
        if (ctx->pc != 0x3CA094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CA140_0x3ca140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA094u; }
        if (ctx->pc != 0x3CA094u) { return; }
    }
    ctx->pc = 0x3CA094u;
label_3ca094:
    // 0x3ca094: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x3ca094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_3ca098:
    // 0x3ca098: 0xc0f2838  jal         func_3CA0E0
label_3ca09c:
    if (ctx->pc == 0x3CA09Cu) {
        ctx->pc = 0x3CA09Cu;
            // 0x3ca09c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CA0A0u;
        goto label_3ca0a0;
    }
    ctx->pc = 0x3CA098u;
    SET_GPR_U32(ctx, 31, 0x3CA0A0u);
    ctx->pc = 0x3CA09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA098u;
            // 0x3ca09c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CA0E0u;
    if (runtime->hasFunction(0x3CA0E0u)) {
        auto targetFn = runtime->lookupFunction(0x3CA0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA0A0u; }
        if (ctx->pc != 0x3CA0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CA0E0_0x3ca0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA0A0u; }
        if (ctx->pc != 0x3CA0A0u) { return; }
    }
    ctx->pc = 0x3CA0A0u;
label_3ca0a0:
    // 0x3ca0a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ca0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ca0a4:
    // 0x3ca0a4: 0xc0ae1c0  jal         func_2B8700
label_3ca0a8:
    if (ctx->pc == 0x3CA0A8u) {
        ctx->pc = 0x3CA0A8u;
            // 0x3ca0a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CA0ACu;
        goto label_3ca0ac;
    }
    ctx->pc = 0x3CA0A4u;
    SET_GPR_U32(ctx, 31, 0x3CA0ACu);
    ctx->pc = 0x3CA0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA0A4u;
            // 0x3ca0a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA0ACu; }
        if (ctx->pc != 0x3CA0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA0ACu; }
        if (ctx->pc != 0x3CA0ACu) { return; }
    }
    ctx->pc = 0x3CA0ACu;
label_3ca0ac:
    // 0x3ca0ac: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3ca0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3ca0b0:
    // 0x3ca0b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3ca0b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3ca0b4:
    // 0x3ca0b4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3ca0b8:
    if (ctx->pc == 0x3CA0B8u) {
        ctx->pc = 0x3CA0B8u;
            // 0x3ca0b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CA0BCu;
        goto label_3ca0bc;
    }
    ctx->pc = 0x3CA0B4u;
    {
        const bool branch_taken_0x3ca0b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3ca0b4) {
            ctx->pc = 0x3CA0B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA0B4u;
            // 0x3ca0b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CA0C8u;
            goto label_3ca0c8;
        }
    }
    ctx->pc = 0x3CA0BCu;
label_3ca0bc:
    // 0x3ca0bc: 0xc0400a8  jal         func_1002A0
label_3ca0c0:
    if (ctx->pc == 0x3CA0C0u) {
        ctx->pc = 0x3CA0C0u;
            // 0x3ca0c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CA0C4u;
        goto label_3ca0c4;
    }
    ctx->pc = 0x3CA0BCu;
    SET_GPR_U32(ctx, 31, 0x3CA0C4u);
    ctx->pc = 0x3CA0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA0BCu;
            // 0x3ca0c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA0C4u; }
        if (ctx->pc != 0x3CA0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CA0C4u; }
        if (ctx->pc != 0x3CA0C4u) { return; }
    }
    ctx->pc = 0x3CA0C4u;
label_3ca0c4:
    // 0x3ca0c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3ca0c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ca0c8:
    // 0x3ca0c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ca0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ca0cc:
    // 0x3ca0cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ca0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ca0d0:
    // 0x3ca0d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ca0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ca0d4:
    // 0x3ca0d4: 0x3e00008  jr          $ra
label_3ca0d8:
    if (ctx->pc == 0x3CA0D8u) {
        ctx->pc = 0x3CA0D8u;
            // 0x3ca0d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3CA0DCu;
        goto label_3ca0dc;
    }
    ctx->pc = 0x3CA0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA0D4u;
            // 0x3ca0d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CA0DCu;
label_3ca0dc:
    // 0x3ca0dc: 0x0  nop
    ctx->pc = 0x3ca0dcu;
    // NOP
}
