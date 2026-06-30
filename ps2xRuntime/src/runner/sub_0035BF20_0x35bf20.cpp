#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035BF20
// Address: 0x35bf20 - 0x35c260
void sub_0035BF20_0x35bf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BF20_0x35bf20");
#endif

    switch (ctx->pc) {
        case 0x35bf20u: goto label_35bf20;
        case 0x35bf24u: goto label_35bf24;
        case 0x35bf28u: goto label_35bf28;
        case 0x35bf2cu: goto label_35bf2c;
        case 0x35bf30u: goto label_35bf30;
        case 0x35bf34u: goto label_35bf34;
        case 0x35bf38u: goto label_35bf38;
        case 0x35bf3cu: goto label_35bf3c;
        case 0x35bf40u: goto label_35bf40;
        case 0x35bf44u: goto label_35bf44;
        case 0x35bf48u: goto label_35bf48;
        case 0x35bf4cu: goto label_35bf4c;
        case 0x35bf50u: goto label_35bf50;
        case 0x35bf54u: goto label_35bf54;
        case 0x35bf58u: goto label_35bf58;
        case 0x35bf5cu: goto label_35bf5c;
        case 0x35bf60u: goto label_35bf60;
        case 0x35bf64u: goto label_35bf64;
        case 0x35bf68u: goto label_35bf68;
        case 0x35bf6cu: goto label_35bf6c;
        case 0x35bf70u: goto label_35bf70;
        case 0x35bf74u: goto label_35bf74;
        case 0x35bf78u: goto label_35bf78;
        case 0x35bf7cu: goto label_35bf7c;
        case 0x35bf80u: goto label_35bf80;
        case 0x35bf84u: goto label_35bf84;
        case 0x35bf88u: goto label_35bf88;
        case 0x35bf8cu: goto label_35bf8c;
        case 0x35bf90u: goto label_35bf90;
        case 0x35bf94u: goto label_35bf94;
        case 0x35bf98u: goto label_35bf98;
        case 0x35bf9cu: goto label_35bf9c;
        case 0x35bfa0u: goto label_35bfa0;
        case 0x35bfa4u: goto label_35bfa4;
        case 0x35bfa8u: goto label_35bfa8;
        case 0x35bfacu: goto label_35bfac;
        case 0x35bfb0u: goto label_35bfb0;
        case 0x35bfb4u: goto label_35bfb4;
        case 0x35bfb8u: goto label_35bfb8;
        case 0x35bfbcu: goto label_35bfbc;
        case 0x35bfc0u: goto label_35bfc0;
        case 0x35bfc4u: goto label_35bfc4;
        case 0x35bfc8u: goto label_35bfc8;
        case 0x35bfccu: goto label_35bfcc;
        case 0x35bfd0u: goto label_35bfd0;
        case 0x35bfd4u: goto label_35bfd4;
        case 0x35bfd8u: goto label_35bfd8;
        case 0x35bfdcu: goto label_35bfdc;
        case 0x35bfe0u: goto label_35bfe0;
        case 0x35bfe4u: goto label_35bfe4;
        case 0x35bfe8u: goto label_35bfe8;
        case 0x35bfecu: goto label_35bfec;
        case 0x35bff0u: goto label_35bff0;
        case 0x35bff4u: goto label_35bff4;
        case 0x35bff8u: goto label_35bff8;
        case 0x35bffcu: goto label_35bffc;
        case 0x35c000u: goto label_35c000;
        case 0x35c004u: goto label_35c004;
        case 0x35c008u: goto label_35c008;
        case 0x35c00cu: goto label_35c00c;
        case 0x35c010u: goto label_35c010;
        case 0x35c014u: goto label_35c014;
        case 0x35c018u: goto label_35c018;
        case 0x35c01cu: goto label_35c01c;
        case 0x35c020u: goto label_35c020;
        case 0x35c024u: goto label_35c024;
        case 0x35c028u: goto label_35c028;
        case 0x35c02cu: goto label_35c02c;
        case 0x35c030u: goto label_35c030;
        case 0x35c034u: goto label_35c034;
        case 0x35c038u: goto label_35c038;
        case 0x35c03cu: goto label_35c03c;
        case 0x35c040u: goto label_35c040;
        case 0x35c044u: goto label_35c044;
        case 0x35c048u: goto label_35c048;
        case 0x35c04cu: goto label_35c04c;
        case 0x35c050u: goto label_35c050;
        case 0x35c054u: goto label_35c054;
        case 0x35c058u: goto label_35c058;
        case 0x35c05cu: goto label_35c05c;
        case 0x35c060u: goto label_35c060;
        case 0x35c064u: goto label_35c064;
        case 0x35c068u: goto label_35c068;
        case 0x35c06cu: goto label_35c06c;
        case 0x35c070u: goto label_35c070;
        case 0x35c074u: goto label_35c074;
        case 0x35c078u: goto label_35c078;
        case 0x35c07cu: goto label_35c07c;
        case 0x35c080u: goto label_35c080;
        case 0x35c084u: goto label_35c084;
        case 0x35c088u: goto label_35c088;
        case 0x35c08cu: goto label_35c08c;
        case 0x35c090u: goto label_35c090;
        case 0x35c094u: goto label_35c094;
        case 0x35c098u: goto label_35c098;
        case 0x35c09cu: goto label_35c09c;
        case 0x35c0a0u: goto label_35c0a0;
        case 0x35c0a4u: goto label_35c0a4;
        case 0x35c0a8u: goto label_35c0a8;
        case 0x35c0acu: goto label_35c0ac;
        case 0x35c0b0u: goto label_35c0b0;
        case 0x35c0b4u: goto label_35c0b4;
        case 0x35c0b8u: goto label_35c0b8;
        case 0x35c0bcu: goto label_35c0bc;
        case 0x35c0c0u: goto label_35c0c0;
        case 0x35c0c4u: goto label_35c0c4;
        case 0x35c0c8u: goto label_35c0c8;
        case 0x35c0ccu: goto label_35c0cc;
        case 0x35c0d0u: goto label_35c0d0;
        case 0x35c0d4u: goto label_35c0d4;
        case 0x35c0d8u: goto label_35c0d8;
        case 0x35c0dcu: goto label_35c0dc;
        case 0x35c0e0u: goto label_35c0e0;
        case 0x35c0e4u: goto label_35c0e4;
        case 0x35c0e8u: goto label_35c0e8;
        case 0x35c0ecu: goto label_35c0ec;
        case 0x35c0f0u: goto label_35c0f0;
        case 0x35c0f4u: goto label_35c0f4;
        case 0x35c0f8u: goto label_35c0f8;
        case 0x35c0fcu: goto label_35c0fc;
        case 0x35c100u: goto label_35c100;
        case 0x35c104u: goto label_35c104;
        case 0x35c108u: goto label_35c108;
        case 0x35c10cu: goto label_35c10c;
        case 0x35c110u: goto label_35c110;
        case 0x35c114u: goto label_35c114;
        case 0x35c118u: goto label_35c118;
        case 0x35c11cu: goto label_35c11c;
        case 0x35c120u: goto label_35c120;
        case 0x35c124u: goto label_35c124;
        case 0x35c128u: goto label_35c128;
        case 0x35c12cu: goto label_35c12c;
        case 0x35c130u: goto label_35c130;
        case 0x35c134u: goto label_35c134;
        case 0x35c138u: goto label_35c138;
        case 0x35c13cu: goto label_35c13c;
        case 0x35c140u: goto label_35c140;
        case 0x35c144u: goto label_35c144;
        case 0x35c148u: goto label_35c148;
        case 0x35c14cu: goto label_35c14c;
        case 0x35c150u: goto label_35c150;
        case 0x35c154u: goto label_35c154;
        case 0x35c158u: goto label_35c158;
        case 0x35c15cu: goto label_35c15c;
        case 0x35c160u: goto label_35c160;
        case 0x35c164u: goto label_35c164;
        case 0x35c168u: goto label_35c168;
        case 0x35c16cu: goto label_35c16c;
        case 0x35c170u: goto label_35c170;
        case 0x35c174u: goto label_35c174;
        case 0x35c178u: goto label_35c178;
        case 0x35c17cu: goto label_35c17c;
        case 0x35c180u: goto label_35c180;
        case 0x35c184u: goto label_35c184;
        case 0x35c188u: goto label_35c188;
        case 0x35c18cu: goto label_35c18c;
        case 0x35c190u: goto label_35c190;
        case 0x35c194u: goto label_35c194;
        case 0x35c198u: goto label_35c198;
        case 0x35c19cu: goto label_35c19c;
        case 0x35c1a0u: goto label_35c1a0;
        case 0x35c1a4u: goto label_35c1a4;
        case 0x35c1a8u: goto label_35c1a8;
        case 0x35c1acu: goto label_35c1ac;
        case 0x35c1b0u: goto label_35c1b0;
        case 0x35c1b4u: goto label_35c1b4;
        case 0x35c1b8u: goto label_35c1b8;
        case 0x35c1bcu: goto label_35c1bc;
        case 0x35c1c0u: goto label_35c1c0;
        case 0x35c1c4u: goto label_35c1c4;
        case 0x35c1c8u: goto label_35c1c8;
        case 0x35c1ccu: goto label_35c1cc;
        case 0x35c1d0u: goto label_35c1d0;
        case 0x35c1d4u: goto label_35c1d4;
        case 0x35c1d8u: goto label_35c1d8;
        case 0x35c1dcu: goto label_35c1dc;
        case 0x35c1e0u: goto label_35c1e0;
        case 0x35c1e4u: goto label_35c1e4;
        case 0x35c1e8u: goto label_35c1e8;
        case 0x35c1ecu: goto label_35c1ec;
        case 0x35c1f0u: goto label_35c1f0;
        case 0x35c1f4u: goto label_35c1f4;
        case 0x35c1f8u: goto label_35c1f8;
        case 0x35c1fcu: goto label_35c1fc;
        case 0x35c200u: goto label_35c200;
        case 0x35c204u: goto label_35c204;
        case 0x35c208u: goto label_35c208;
        case 0x35c20cu: goto label_35c20c;
        case 0x35c210u: goto label_35c210;
        case 0x35c214u: goto label_35c214;
        case 0x35c218u: goto label_35c218;
        case 0x35c21cu: goto label_35c21c;
        case 0x35c220u: goto label_35c220;
        case 0x35c224u: goto label_35c224;
        case 0x35c228u: goto label_35c228;
        case 0x35c22cu: goto label_35c22c;
        case 0x35c230u: goto label_35c230;
        case 0x35c234u: goto label_35c234;
        case 0x35c238u: goto label_35c238;
        case 0x35c23cu: goto label_35c23c;
        case 0x35c240u: goto label_35c240;
        case 0x35c244u: goto label_35c244;
        case 0x35c248u: goto label_35c248;
        case 0x35c24cu: goto label_35c24c;
        case 0x35c250u: goto label_35c250;
        case 0x35c254u: goto label_35c254;
        case 0x35c258u: goto label_35c258;
        case 0x35c25cu: goto label_35c25c;
        default: break;
    }

    ctx->pc = 0x35bf20u;

label_35bf20:
    // 0x35bf20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x35bf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_35bf24:
    // 0x35bf24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35bf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_35bf28:
    // 0x35bf28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35bf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35bf2c:
    // 0x35bf2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35bf2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35bf30:
    // 0x35bf30: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x35bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_35bf34:
    // 0x35bf34: 0xc04f278  jal         func_13C9E0
label_35bf38:
    if (ctx->pc == 0x35BF38u) {
        ctx->pc = 0x35BF38u;
            // 0x35bf38: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x35BF3Cu;
        goto label_35bf3c;
    }
    ctx->pc = 0x35BF34u;
    SET_GPR_U32(ctx, 31, 0x35BF3Cu);
    ctx->pc = 0x35BF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35BF34u;
            // 0x35bf38: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BF3Cu; }
        if (ctx->pc != 0x35BF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BF3Cu; }
        if (ctx->pc != 0x35BF3Cu) { return; }
    }
    ctx->pc = 0x35BF3Cu;
label_35bf3c:
    // 0x35bf3c: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x35bf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_35bf40:
    // 0x35bf40: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x35bf40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_35bf44:
    // 0x35bf44: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x35bf44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_35bf48:
    // 0x35bf48: 0xc04cca0  jal         func_133280
label_35bf4c:
    if (ctx->pc == 0x35BF4Cu) {
        ctx->pc = 0x35BF4Cu;
            // 0x35bf4c: 0x24c64550  addiu       $a2, $a2, 0x4550 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17744));
        ctx->pc = 0x35BF50u;
        goto label_35bf50;
    }
    ctx->pc = 0x35BF48u;
    SET_GPR_U32(ctx, 31, 0x35BF50u);
    ctx->pc = 0x35BF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35BF48u;
            // 0x35bf4c: 0x24c64550  addiu       $a2, $a2, 0x4550 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BF50u; }
        if (ctx->pc != 0x35BF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BF50u; }
        if (ctx->pc != 0x35BF50u) { return; }
    }
    ctx->pc = 0x35BF50u;
label_35bf50:
    // 0x35bf50: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x35bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_35bf54:
    // 0x35bf54: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x35bf54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_35bf58:
    // 0x35bf58: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x35bf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_35bf5c:
    // 0x35bf5c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x35bf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_35bf60:
    // 0x35bf60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35bf60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35bf64:
    // 0x35bf64: 0xc04cc7c  jal         func_1331F0
label_35bf68:
    if (ctx->pc == 0x35BF68u) {
        ctx->pc = 0x35BF68u;
            // 0x35bf68: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35BF6Cu;
        goto label_35bf6c;
    }
    ctx->pc = 0x35BF64u;
    SET_GPR_U32(ctx, 31, 0x35BF6Cu);
    ctx->pc = 0x35BF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35BF64u;
            // 0x35bf68: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BF6Cu; }
        if (ctx->pc != 0x35BF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BF6Cu; }
        if (ctx->pc != 0x35BF6Cu) { return; }
    }
    ctx->pc = 0x35BF6Cu;
label_35bf6c:
    // 0x35bf6c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x35bf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35bf70:
    // 0x35bf70: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x35bf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_35bf74:
    // 0x35bf74: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x35bf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35bf78:
    // 0x35bf78: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x35bf78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35bf7c:
    // 0x35bf7c: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x35bf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35bf80:
    // 0x35bf80: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x35bf80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_35bf84:
    // 0x35bf84: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x35bf84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_35bf88:
    // 0x35bf88: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x35bf88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_35bf8c:
    // 0x35bf8c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x35bf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_35bf90:
    // 0x35bf90: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x35bf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35bf94:
    // 0x35bf94: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x35bf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35bf98:
    // 0x35bf98: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x35bf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35bf9c:
    // 0x35bf9c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x35bf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35bfa0:
    // 0x35bfa0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x35bfa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_35bfa4:
    // 0x35bfa4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x35bfa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_35bfa8:
    // 0x35bfa8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x35bfa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_35bfac:
    // 0x35bfac: 0xc0a3830  jal         func_28E0C0
label_35bfb0:
    if (ctx->pc == 0x35BFB0u) {
        ctx->pc = 0x35BFB0u;
            // 0x35bfb0: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x35BFB4u;
        goto label_35bfb4;
    }
    ctx->pc = 0x35BFACu;
    SET_GPR_U32(ctx, 31, 0x35BFB4u);
    ctx->pc = 0x35BFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35BFACu;
            // 0x35bfb0: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BFB4u; }
        if (ctx->pc != 0x35BFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BFB4u; }
        if (ctx->pc != 0x35BFB4u) { return; }
    }
    ctx->pc = 0x35BFB4u;
label_35bfb4:
    // 0x35bfb4: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x35bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_35bfb8:
    // 0x35bfb8: 0xc0892c0  jal         func_224B00
label_35bfbc:
    if (ctx->pc == 0x35BFBCu) {
        ctx->pc = 0x35BFBCu;
            // 0x35bfbc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x35BFC0u;
        goto label_35bfc0;
    }
    ctx->pc = 0x35BFB8u;
    SET_GPR_U32(ctx, 31, 0x35BFC0u);
    ctx->pc = 0x35BFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35BFB8u;
            // 0x35bfbc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B00u;
    if (runtime->hasFunction(0x224B00u)) {
        auto targetFn = runtime->lookupFunction(0x224B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BFC0u; }
        if (ctx->pc != 0x35BFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B00_0x224b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BFC0u; }
        if (ctx->pc != 0x35BFC0u) { return; }
    }
    ctx->pc = 0x35BFC0u;
label_35bfc0:
    // 0x35bfc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35bfc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35bfc4:
    // 0x35bfc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35bfc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35bfc8:
    // 0x35bfc8: 0x3e00008  jr          $ra
label_35bfcc:
    if (ctx->pc == 0x35BFCCu) {
        ctx->pc = 0x35BFCCu;
            // 0x35bfcc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x35BFD0u;
        goto label_35bfd0;
    }
    ctx->pc = 0x35BFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BFC8u;
            // 0x35bfcc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35BFD0u;
label_35bfd0:
    // 0x35bfd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35bfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35bfd4:
    // 0x35bfd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35bfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_35bfd8:
    // 0x35bfd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35bfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35bfdc:
    // 0x35bfdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35bfdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35bfe0:
    // 0x35bfe0: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x35bfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_35bfe4:
    // 0x35bfe4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_35bfe8:
    if (ctx->pc == 0x35BFE8u) {
        ctx->pc = 0x35BFE8u;
            // 0x35bfe8: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x35BFECu;
        goto label_35bfec;
    }
    ctx->pc = 0x35BFE4u;
    {
        const bool branch_taken_0x35bfe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bfe4) {
            ctx->pc = 0x35BFE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35BFE4u;
            // 0x35bfe8: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35C000u;
            goto label_35c000;
        }
    }
    ctx->pc = 0x35BFECu;
label_35bfec:
    // 0x35bfec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35bfecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35bff0:
    // 0x35bff0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x35bff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_35bff4:
    // 0x35bff4: 0x320f809  jalr        $t9
label_35bff8:
    if (ctx->pc == 0x35BFF8u) {
        ctx->pc = 0x35BFF8u;
            // 0x35bff8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35BFFCu;
        goto label_35bffc;
    }
    ctx->pc = 0x35BFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35BFFCu);
        ctx->pc = 0x35BFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BFF4u;
            // 0x35bff8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35BFFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35BFFCu; }
            if (ctx->pc != 0x35BFFCu) { return; }
        }
        }
    }
    ctx->pc = 0x35BFFCu;
label_35bffc:
    // 0x35bffc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x35bffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_35c000:
    // 0x35c000: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35c000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35c004:
    // 0x35c004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35c008:
    // 0x35c008: 0x3e00008  jr          $ra
label_35c00c:
    if (ctx->pc == 0x35C00Cu) {
        ctx->pc = 0x35C00Cu;
            // 0x35c00c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x35C010u;
        goto label_35c010;
    }
    ctx->pc = 0x35C008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C008u;
            // 0x35c00c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C010u;
label_35c010:
    // 0x35c010: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x35c010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_35c014:
    // 0x35c014: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35c014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_35c018:
    // 0x35c018: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35c018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35c01c:
    // 0x35c01c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35c01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35c020:
    // 0x35c020: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35c020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35c024:
    // 0x35c024: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35c024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35c028:
    // 0x35c028: 0xc0892d0  jal         func_224B40
label_35c02c:
    if (ctx->pc == 0x35C02Cu) {
        ctx->pc = 0x35C02Cu;
            // 0x35c02c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x35C030u;
        goto label_35c030;
    }
    ctx->pc = 0x35C028u;
    SET_GPR_U32(ctx, 31, 0x35C030u);
    ctx->pc = 0x35C02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C028u;
            // 0x35c02c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C030u; }
        if (ctx->pc != 0x35C030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C030u; }
        if (ctx->pc != 0x35C030u) { return; }
    }
    ctx->pc = 0x35C030u;
label_35c030:
    // 0x35c030: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35c030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35c034:
    // 0x35c034: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x35c034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_35c038:
    // 0x35c038: 0x8c420e48  lw          $v0, 0xE48($v0)
    ctx->pc = 0x35c038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3656)));
label_35c03c:
    // 0x35c03c: 0x346acccd  ori         $t2, $v1, 0xCCCD
    ctx->pc = 0x35c03cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_35c040:
    // 0x35c040: 0x3c094120  lui         $t1, 0x4120
    ctx->pc = 0x35c040u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16672 << 16));
label_35c044:
    // 0x35c044: 0x3c083e80  lui         $t0, 0x3E80
    ctx->pc = 0x35c044u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16000 << 16));
label_35c048:
    // 0x35c048: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35c048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35c04c:
    // 0x35c04c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35c04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35c050:
    // 0x35c050: 0x8c4b0060  lw          $t3, 0x60($v0)
    ctx->pc = 0x35c050u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_35c054:
    // 0x35c054: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x35c054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_35c058:
    // 0x35c058: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x35c058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_35c05c:
    // 0x35c05c: 0xafab0044  sw          $t3, 0x44($sp)
    ctx->pc = 0x35c05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 11));
label_35c060:
    // 0x35c060: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35c060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35c064:
    // 0x35c064: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x35c064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35c068:
    // 0x35c068: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x35c068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_35c06c:
    // 0x35c06c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x35c06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35c070:
    // 0x35c070: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x35c070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35c074:
    // 0x35c074: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x35c074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_35c078:
    // 0x35c078: 0xafaa00d8  sw          $t2, 0xD8($sp)
    ctx->pc = 0x35c078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 10));
label_35c07c:
    // 0x35c07c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x35c07cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_35c080:
    // 0x35c080: 0xafa900d0  sw          $t1, 0xD0($sp)
    ctx->pc = 0x35c080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 9));
label_35c084:
    // 0x35c084: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x35c084u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_35c088:
    // 0x35c088: 0xafa800dc  sw          $t0, 0xDC($sp)
    ctx->pc = 0x35c088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 8));
label_35c08c:
    // 0x35c08c: 0xa3a700f0  sb          $a3, 0xF0($sp)
    ctx->pc = 0x35c08cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 7));
label_35c090:
    // 0x35c090: 0xa3a300f2  sb          $v1, 0xF2($sp)
    ctx->pc = 0x35c090u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 242), (uint8_t)GPR_U32(ctx, 3));
label_35c094:
    // 0x35c094: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x35c094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_35c098:
    // 0x35c098: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x35c098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
label_35c09c:
    // 0x35c09c: 0xc0a7a88  jal         func_29EA20
label_35c0a0:
    if (ctx->pc == 0x35C0A0u) {
        ctx->pc = 0x35C0A0u;
            // 0x35c0a0: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x35C0A4u;
        goto label_35c0a4;
    }
    ctx->pc = 0x35C09Cu;
    SET_GPR_U32(ctx, 31, 0x35C0A4u);
    ctx->pc = 0x35C0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C09Cu;
            // 0x35c0a0: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C0A4u; }
        if (ctx->pc != 0x35C0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C0A4u; }
        if (ctx->pc != 0x35C0A4u) { return; }
    }
    ctx->pc = 0x35C0A4u;
label_35c0a4:
    // 0x35c0a4: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x35c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_35c0a8:
    // 0x35c0a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35c0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35c0ac:
    // 0x35c0ac: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_35c0b0:
    if (ctx->pc == 0x35C0B0u) {
        ctx->pc = 0x35C0B0u;
            // 0x35c0b0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x35C0B4u;
        goto label_35c0b4;
    }
    ctx->pc = 0x35C0ACu;
    {
        const bool branch_taken_0x35c0ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C0ACu;
            // 0x35c0b0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c0ac) {
            ctx->pc = 0x35C0FCu;
            goto label_35c0fc;
        }
    }
    ctx->pc = 0x35C0B4u;
label_35c0b4:
    // 0x35c0b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35c0b8:
    // 0x35c0b8: 0xc088ef4  jal         func_223BD0
label_35c0bc:
    if (ctx->pc == 0x35C0BCu) {
        ctx->pc = 0x35C0BCu;
            // 0x35c0bc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x35C0C0u;
        goto label_35c0c0;
    }
    ctx->pc = 0x35C0B8u;
    SET_GPR_U32(ctx, 31, 0x35C0C0u);
    ctx->pc = 0x35C0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C0B8u;
            // 0x35c0bc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C0C0u; }
        if (ctx->pc != 0x35C0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C0C0u; }
        if (ctx->pc != 0x35C0C0u) { return; }
    }
    ctx->pc = 0x35C0C0u;
label_35c0c0:
    // 0x35c0c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x35c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_35c0c4:
    // 0x35c0c4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x35c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_35c0c8:
    // 0x35c0c8: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x35c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_35c0cc:
    // 0x35c0cc: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x35c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_35c0d0:
    // 0x35c0d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x35c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_35c0d4:
    // 0x35c0d4: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x35c0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_35c0d8:
    // 0x35c0d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35c0dc:
    // 0x35c0dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x35c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_35c0e0:
    // 0x35c0e0: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x35c0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_35c0e4:
    // 0x35c0e4: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x35c0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_35c0e8:
    // 0x35c0e8: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x35c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_35c0ec:
    // 0x35c0ec: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x35c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_35c0f0:
    // 0x35c0f0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x35c0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_35c0f4:
    // 0x35c0f4: 0xc088b38  jal         func_222CE0
label_35c0f8:
    if (ctx->pc == 0x35C0F8u) {
        ctx->pc = 0x35C0F8u;
            // 0x35c0f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C0FCu;
        goto label_35c0fc;
    }
    ctx->pc = 0x35C0F4u;
    SET_GPR_U32(ctx, 31, 0x35C0FCu);
    ctx->pc = 0x35C0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C0F4u;
            // 0x35c0f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C0FCu; }
        if (ctx->pc != 0x35C0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C0FCu; }
        if (ctx->pc != 0x35C0FCu) { return; }
    }
    ctx->pc = 0x35C0FCu;
label_35c0fc:
    // 0x35c0fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35c100:
    // 0x35c100: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35c100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_35c104:
    // 0x35c104: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35c104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35c108:
    // 0x35c108: 0xc08914c  jal         func_224530
label_35c10c:
    if (ctx->pc == 0x35C10Cu) {
        ctx->pc = 0x35C10Cu;
            // 0x35c10c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C110u;
        goto label_35c110;
    }
    ctx->pc = 0x35C108u;
    SET_GPR_U32(ctx, 31, 0x35C110u);
    ctx->pc = 0x35C10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C108u;
            // 0x35c10c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C110u; }
        if (ctx->pc != 0x35C110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C110u; }
        if (ctx->pc != 0x35C110u) { return; }
    }
    ctx->pc = 0x35C110u;
label_35c110:
    // 0x35c110: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35c110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35c114:
    // 0x35c114: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35c114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35c118:
    // 0x35c118: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x35c118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_35c11c:
    // 0x35c11c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35c11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35c120:
    // 0x35c120: 0xc08c164  jal         func_230590
label_35c124:
    if (ctx->pc == 0x35C124u) {
        ctx->pc = 0x35C124u;
            // 0x35c124: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35C128u;
        goto label_35c128;
    }
    ctx->pc = 0x35C120u;
    SET_GPR_U32(ctx, 31, 0x35C128u);
    ctx->pc = 0x35C124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C120u;
            // 0x35c124: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C128u; }
        if (ctx->pc != 0x35C128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C128u; }
        if (ctx->pc != 0x35C128u) { return; }
    }
    ctx->pc = 0x35C128u;
label_35c128:
    // 0x35c128: 0xae300060  sw          $s0, 0x60($s1)
    ctx->pc = 0x35c128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 16));
label_35c12c:
    // 0x35c12c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35c130:
    // 0x35c130: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x35c130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_35c134:
    // 0x35c134: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x35c134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_35c138:
    // 0x35c138: 0xc0a7a88  jal         func_29EA20
label_35c13c:
    if (ctx->pc == 0x35C13Cu) {
        ctx->pc = 0x35C13Cu;
            // 0x35c13c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x35C140u;
        goto label_35c140;
    }
    ctx->pc = 0x35C138u;
    SET_GPR_U32(ctx, 31, 0x35C140u);
    ctx->pc = 0x35C13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C138u;
            // 0x35c13c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C140u; }
        if (ctx->pc != 0x35C140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C140u; }
        if (ctx->pc != 0x35C140u) { return; }
    }
    ctx->pc = 0x35C140u;
label_35c140:
    // 0x35c140: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x35c140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_35c144:
    // 0x35c144: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35c144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35c148:
    // 0x35c148: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_35c14c:
    if (ctx->pc == 0x35C14Cu) {
        ctx->pc = 0x35C14Cu;
            // 0x35c14c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x35C150u;
        goto label_35c150;
    }
    ctx->pc = 0x35C148u;
    {
        const bool branch_taken_0x35c148 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C148u;
            // 0x35c14c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c148) {
            ctx->pc = 0x35C16Cu;
            goto label_35c16c;
        }
    }
    ctx->pc = 0x35C150u;
label_35c150:
    // 0x35c150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35c150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35c154:
    // 0x35c154: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35c154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35c158:
    // 0x35c158: 0xc0869d0  jal         func_21A740
label_35c15c:
    if (ctx->pc == 0x35C15Cu) {
        ctx->pc = 0x35C15Cu;
            // 0x35c15c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C160u;
        goto label_35c160;
    }
    ctx->pc = 0x35C158u;
    SET_GPR_U32(ctx, 31, 0x35C160u);
    ctx->pc = 0x35C15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C158u;
            // 0x35c15c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C160u; }
        if (ctx->pc != 0x35C160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C160u; }
        if (ctx->pc != 0x35C160u) { return; }
    }
    ctx->pc = 0x35C160u;
label_35c160:
    // 0x35c160: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x35c160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_35c164:
    // 0x35c164: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x35c164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_35c168:
    // 0x35c168: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x35c168u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_35c16c:
    // 0x35c16c: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x35c16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_35c170:
    // 0x35c170: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35c170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35c174:
    // 0x35c174: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x35c174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_35c178:
    // 0x35c178: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35c178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35c17c:
    // 0x35c17c: 0xc08c650  jal         func_231940
label_35c180:
    if (ctx->pc == 0x35C180u) {
        ctx->pc = 0x35C180u;
            // 0x35c180: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C184u;
        goto label_35c184;
    }
    ctx->pc = 0x35C17Cu;
    SET_GPR_U32(ctx, 31, 0x35C184u);
    ctx->pc = 0x35C180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C17Cu;
            // 0x35c180: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C184u; }
        if (ctx->pc != 0x35C184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C184u; }
        if (ctx->pc != 0x35C184u) { return; }
    }
    ctx->pc = 0x35C184u;
label_35c184:
    // 0x35c184: 0xc0d6fc8  jal         func_35BF20
label_35c188:
    if (ctx->pc == 0x35C188u) {
        ctx->pc = 0x35C188u;
            // 0x35c188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C18Cu;
        goto label_35c18c;
    }
    ctx->pc = 0x35C184u;
    SET_GPR_U32(ctx, 31, 0x35C18Cu);
    ctx->pc = 0x35C188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C184u;
            // 0x35c188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35BF20u;
    goto label_35bf20;
    ctx->pc = 0x35C18Cu;
label_35c18c:
    // 0x35c18c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35c18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_35c190:
    // 0x35c190: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35c190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35c194:
    // 0x35c194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35c194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35c198:
    // 0x35c198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35c19c:
    // 0x35c19c: 0x3e00008  jr          $ra
label_35c1a0:
    if (ctx->pc == 0x35C1A0u) {
        ctx->pc = 0x35C1A0u;
            // 0x35c1a0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x35C1A4u;
        goto label_35c1a4;
    }
    ctx->pc = 0x35C19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C19Cu;
            // 0x35c1a0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C1A4u;
label_35c1a4:
    // 0x35c1a4: 0x0  nop
    ctx->pc = 0x35c1a4u;
    // NOP
label_35c1a8:
    // 0x35c1a8: 0x0  nop
    ctx->pc = 0x35c1a8u;
    // NOP
label_35c1ac:
    // 0x35c1ac: 0x0  nop
    ctx->pc = 0x35c1acu;
    // NOP
label_35c1b0:
    // 0x35c1b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35c1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_35c1b4:
    // 0x35c1b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35c1b8:
    // 0x35c1b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35c1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_35c1bc:
    // 0x35c1bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35c1bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35c1c0:
    // 0x35c1c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35c1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35c1c4:
    // 0x35c1c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35c1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35c1c8:
    // 0x35c1c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35c1c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35c1cc:
    // 0x35c1cc: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x35c1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_35c1d0:
    // 0x35c1d0: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x35c1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_35c1d4:
    // 0x35c1d4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x35c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_35c1d8:
    // 0x35c1d8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35c1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35c1dc:
    // 0x35c1dc: 0xc08bff0  jal         func_22FFC0
label_35c1e0:
    if (ctx->pc == 0x35C1E0u) {
        ctx->pc = 0x35C1E0u;
            // 0x35c1e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C1E4u;
        goto label_35c1e4;
    }
    ctx->pc = 0x35C1DCu;
    SET_GPR_U32(ctx, 31, 0x35C1E4u);
    ctx->pc = 0x35C1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C1DCu;
            // 0x35c1e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C1E4u; }
        if (ctx->pc != 0x35C1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C1E4u; }
        if (ctx->pc != 0x35C1E4u) { return; }
    }
    ctx->pc = 0x35C1E4u;
label_35c1e4:
    // 0x35c1e4: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x35c1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_35c1e8:
    // 0x35c1e8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35c1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_35c1ec:
    // 0x35c1ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35c1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35c1f0:
    // 0x35c1f0: 0xc08914c  jal         func_224530
label_35c1f4:
    if (ctx->pc == 0x35C1F4u) {
        ctx->pc = 0x35C1F4u;
            // 0x35c1f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C1F8u;
        goto label_35c1f8;
    }
    ctx->pc = 0x35C1F0u;
    SET_GPR_U32(ctx, 31, 0x35C1F8u);
    ctx->pc = 0x35C1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C1F0u;
            // 0x35c1f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C1F8u; }
        if (ctx->pc != 0x35C1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C1F8u; }
        if (ctx->pc != 0x35C1F8u) { return; }
    }
    ctx->pc = 0x35C1F8u;
label_35c1f8:
    // 0x35c1f8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x35c1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_35c1fc:
    // 0x35c1fc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x35c1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_35c200:
    // 0x35c200: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x35c200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_35c204:
    // 0x35c204: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x35c204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_35c208:
    // 0x35c208: 0x8e300060  lw          $s0, 0x60($s1)
    ctx->pc = 0x35c208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_35c20c:
    // 0x35c20c: 0xc088b74  jal         func_222DD0
label_35c210:
    if (ctx->pc == 0x35C210u) {
        ctx->pc = 0x35C210u;
            // 0x35c210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C214u;
        goto label_35c214;
    }
    ctx->pc = 0x35C20Cu;
    SET_GPR_U32(ctx, 31, 0x35C214u);
    ctx->pc = 0x35C210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C20Cu;
            // 0x35c210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C214u; }
        if (ctx->pc != 0x35C214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C214u; }
        if (ctx->pc != 0x35C214u) { return; }
    }
    ctx->pc = 0x35C214u;
label_35c214:
    // 0x35c214: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x35c214u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_35c218:
    // 0x35c218: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x35c218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_35c21c:
    // 0x35c21c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x35c21cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_35c220:
    // 0x35c220: 0x320f809  jalr        $t9
label_35c224:
    if (ctx->pc == 0x35C224u) {
        ctx->pc = 0x35C224u;
            // 0x35c224: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x35C228u;
        goto label_35c228;
    }
    ctx->pc = 0x35C220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35C228u);
        ctx->pc = 0x35C224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C220u;
            // 0x35c224: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35C228u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35C228u; }
            if (ctx->pc != 0x35C228u) { return; }
        }
        }
    }
    ctx->pc = 0x35C228u;
label_35c228:
    // 0x35c228: 0x8e300060  lw          $s0, 0x60($s1)
    ctx->pc = 0x35c228u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_35c22c:
    // 0x35c22c: 0xc088b74  jal         func_222DD0
label_35c230:
    if (ctx->pc == 0x35C230u) {
        ctx->pc = 0x35C230u;
            // 0x35c230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C234u;
        goto label_35c234;
    }
    ctx->pc = 0x35C22Cu;
    SET_GPR_U32(ctx, 31, 0x35C234u);
    ctx->pc = 0x35C230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C22Cu;
            // 0x35c230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C234u; }
        if (ctx->pc != 0x35C234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C234u; }
        if (ctx->pc != 0x35C234u) { return; }
    }
    ctx->pc = 0x35C234u;
label_35c234:
    // 0x35c234: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x35c234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_35c238:
    // 0x35c238: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x35c238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_35c23c:
    // 0x35c23c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x35c23cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_35c240:
    // 0x35c240: 0x320f809  jalr        $t9
label_35c244:
    if (ctx->pc == 0x35C244u) {
        ctx->pc = 0x35C244u;
            // 0x35c244: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x35C248u;
        goto label_35c248;
    }
    ctx->pc = 0x35C240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35C248u);
        ctx->pc = 0x35C244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C240u;
            // 0x35c244: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35C248u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35C248u; }
            if (ctx->pc != 0x35C248u) { return; }
        }
        }
    }
    ctx->pc = 0x35C248u;
label_35c248:
    // 0x35c248: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35c248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_35c24c:
    // 0x35c24c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35c24cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35c250:
    // 0x35c250: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35c254:
    // 0x35c254: 0x3e00008  jr          $ra
label_35c258:
    if (ctx->pc == 0x35C258u) {
        ctx->pc = 0x35C258u;
            // 0x35c258: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x35C25Cu;
        goto label_35c25c;
    }
    ctx->pc = 0x35C254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C254u;
            // 0x35c258: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C25Cu;
label_35c25c:
    // 0x35c25c: 0x0  nop
    ctx->pc = 0x35c25cu;
    // NOP
}
