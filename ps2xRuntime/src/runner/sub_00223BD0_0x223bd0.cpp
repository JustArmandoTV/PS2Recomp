#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00223BD0
// Address: 0x223bd0 - 0x223df0
void sub_00223BD0_0x223bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223BD0_0x223bd0");
#endif

    switch (ctx->pc) {
        case 0x223bd0u: goto label_223bd0;
        case 0x223bd4u: goto label_223bd4;
        case 0x223bd8u: goto label_223bd8;
        case 0x223bdcu: goto label_223bdc;
        case 0x223be0u: goto label_223be0;
        case 0x223be4u: goto label_223be4;
        case 0x223be8u: goto label_223be8;
        case 0x223becu: goto label_223bec;
        case 0x223bf0u: goto label_223bf0;
        case 0x223bf4u: goto label_223bf4;
        case 0x223bf8u: goto label_223bf8;
        case 0x223bfcu: goto label_223bfc;
        case 0x223c00u: goto label_223c00;
        case 0x223c04u: goto label_223c04;
        case 0x223c08u: goto label_223c08;
        case 0x223c0cu: goto label_223c0c;
        case 0x223c10u: goto label_223c10;
        case 0x223c14u: goto label_223c14;
        case 0x223c18u: goto label_223c18;
        case 0x223c1cu: goto label_223c1c;
        case 0x223c20u: goto label_223c20;
        case 0x223c24u: goto label_223c24;
        case 0x223c28u: goto label_223c28;
        case 0x223c2cu: goto label_223c2c;
        case 0x223c30u: goto label_223c30;
        case 0x223c34u: goto label_223c34;
        case 0x223c38u: goto label_223c38;
        case 0x223c3cu: goto label_223c3c;
        case 0x223c40u: goto label_223c40;
        case 0x223c44u: goto label_223c44;
        case 0x223c48u: goto label_223c48;
        case 0x223c4cu: goto label_223c4c;
        case 0x223c50u: goto label_223c50;
        case 0x223c54u: goto label_223c54;
        case 0x223c58u: goto label_223c58;
        case 0x223c5cu: goto label_223c5c;
        case 0x223c60u: goto label_223c60;
        case 0x223c64u: goto label_223c64;
        case 0x223c68u: goto label_223c68;
        case 0x223c6cu: goto label_223c6c;
        case 0x223c70u: goto label_223c70;
        case 0x223c74u: goto label_223c74;
        case 0x223c78u: goto label_223c78;
        case 0x223c7cu: goto label_223c7c;
        case 0x223c80u: goto label_223c80;
        case 0x223c84u: goto label_223c84;
        case 0x223c88u: goto label_223c88;
        case 0x223c8cu: goto label_223c8c;
        case 0x223c90u: goto label_223c90;
        case 0x223c94u: goto label_223c94;
        case 0x223c98u: goto label_223c98;
        case 0x223c9cu: goto label_223c9c;
        case 0x223ca0u: goto label_223ca0;
        case 0x223ca4u: goto label_223ca4;
        case 0x223ca8u: goto label_223ca8;
        case 0x223cacu: goto label_223cac;
        case 0x223cb0u: goto label_223cb0;
        case 0x223cb4u: goto label_223cb4;
        case 0x223cb8u: goto label_223cb8;
        case 0x223cbcu: goto label_223cbc;
        case 0x223cc0u: goto label_223cc0;
        case 0x223cc4u: goto label_223cc4;
        case 0x223cc8u: goto label_223cc8;
        case 0x223cccu: goto label_223ccc;
        case 0x223cd0u: goto label_223cd0;
        case 0x223cd4u: goto label_223cd4;
        case 0x223cd8u: goto label_223cd8;
        case 0x223cdcu: goto label_223cdc;
        case 0x223ce0u: goto label_223ce0;
        case 0x223ce4u: goto label_223ce4;
        case 0x223ce8u: goto label_223ce8;
        case 0x223cecu: goto label_223cec;
        case 0x223cf0u: goto label_223cf0;
        case 0x223cf4u: goto label_223cf4;
        case 0x223cf8u: goto label_223cf8;
        case 0x223cfcu: goto label_223cfc;
        case 0x223d00u: goto label_223d00;
        case 0x223d04u: goto label_223d04;
        case 0x223d08u: goto label_223d08;
        case 0x223d0cu: goto label_223d0c;
        case 0x223d10u: goto label_223d10;
        case 0x223d14u: goto label_223d14;
        case 0x223d18u: goto label_223d18;
        case 0x223d1cu: goto label_223d1c;
        case 0x223d20u: goto label_223d20;
        case 0x223d24u: goto label_223d24;
        case 0x223d28u: goto label_223d28;
        case 0x223d2cu: goto label_223d2c;
        case 0x223d30u: goto label_223d30;
        case 0x223d34u: goto label_223d34;
        case 0x223d38u: goto label_223d38;
        case 0x223d3cu: goto label_223d3c;
        case 0x223d40u: goto label_223d40;
        case 0x223d44u: goto label_223d44;
        case 0x223d48u: goto label_223d48;
        case 0x223d4cu: goto label_223d4c;
        case 0x223d50u: goto label_223d50;
        case 0x223d54u: goto label_223d54;
        case 0x223d58u: goto label_223d58;
        case 0x223d5cu: goto label_223d5c;
        case 0x223d60u: goto label_223d60;
        case 0x223d64u: goto label_223d64;
        case 0x223d68u: goto label_223d68;
        case 0x223d6cu: goto label_223d6c;
        case 0x223d70u: goto label_223d70;
        case 0x223d74u: goto label_223d74;
        case 0x223d78u: goto label_223d78;
        case 0x223d7cu: goto label_223d7c;
        case 0x223d80u: goto label_223d80;
        case 0x223d84u: goto label_223d84;
        case 0x223d88u: goto label_223d88;
        case 0x223d8cu: goto label_223d8c;
        case 0x223d90u: goto label_223d90;
        case 0x223d94u: goto label_223d94;
        case 0x223d98u: goto label_223d98;
        case 0x223d9cu: goto label_223d9c;
        case 0x223da0u: goto label_223da0;
        case 0x223da4u: goto label_223da4;
        case 0x223da8u: goto label_223da8;
        case 0x223dacu: goto label_223dac;
        case 0x223db0u: goto label_223db0;
        case 0x223db4u: goto label_223db4;
        case 0x223db8u: goto label_223db8;
        case 0x223dbcu: goto label_223dbc;
        case 0x223dc0u: goto label_223dc0;
        case 0x223dc4u: goto label_223dc4;
        case 0x223dc8u: goto label_223dc8;
        case 0x223dccu: goto label_223dcc;
        case 0x223dd0u: goto label_223dd0;
        case 0x223dd4u: goto label_223dd4;
        case 0x223dd8u: goto label_223dd8;
        case 0x223ddcu: goto label_223ddc;
        case 0x223de0u: goto label_223de0;
        case 0x223de4u: goto label_223de4;
        case 0x223de8u: goto label_223de8;
        case 0x223decu: goto label_223dec;
        default: break;
    }

    ctx->pc = 0x223bd0u;

label_223bd0:
    // 0x223bd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x223bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_223bd4:
    // 0x223bd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x223bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_223bd8:
    // 0x223bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_223bdc:
    // 0x223bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_223be0:
    // 0x223be0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x223be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_223be4:
    // 0x223be4: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x223be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_223be8:
    // 0x223be8: 0xc0887cc  jal         func_221F30
label_223bec:
    if (ctx->pc == 0x223BECu) {
        ctx->pc = 0x223BECu;
            // 0x223bec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223BF0u;
        goto label_223bf0;
    }
    ctx->pc = 0x223BE8u;
    SET_GPR_U32(ctx, 31, 0x223BF0u);
    ctx->pc = 0x223BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223BE8u;
            // 0x223bec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221F30u;
    if (runtime->hasFunction(0x221F30u)) {
        auto targetFn = runtime->lookupFunction(0x221F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223BF0u; }
        if (ctx->pc != 0x223BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221F30_0x221f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223BF0u; }
        if (ctx->pc != 0x223BF0u) { return; }
    }
    ctx->pc = 0x223BF0u;
label_223bf0:
    // 0x223bf0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x223bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_223bf4:
    // 0x223bf4: 0x2442ebf0  addiu       $v0, $v0, -0x1410
    ctx->pc = 0x223bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962160));
label_223bf8:
    // 0x223bf8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x223bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_223bfc:
    // 0x223bfc: 0x82020008  lb          $v0, 0x8($s0)
    ctx->pc = 0x223bfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_223c00:
    // 0x223c00: 0xa2220058  sb          $v0, 0x58($s1)
    ctx->pc = 0x223c00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 88), (uint8_t)GPR_U32(ctx, 2));
label_223c04:
    // 0x223c04: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x223c04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_223c08:
    // 0x223c08: 0xa622006e  sh          $v0, 0x6E($s1)
    ctx->pc = 0x223c08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 110), (uint16_t)GPR_U32(ctx, 2));
label_223c0c:
    // 0x223c0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x223c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_223c10:
    // 0x223c10: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x223c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_223c14:
    // 0x223c14: 0x820400b0  lb          $a0, 0xB0($s0)
    ctx->pc = 0x223c14u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 176)));
label_223c18:
    // 0x223c18: 0x38820007  xori        $v0, $a0, 0x7
    ctx->pc = 0x223c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
label_223c1c:
    // 0x223c1c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x223c1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_223c20:
    // 0x223c20: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_223c24:
    if (ctx->pc == 0x223C24u) {
        ctx->pc = 0x223C24u;
            // 0x223c24: 0xc60c0090  lwc1        $f12, 0x90($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x223C28u;
        goto label_223c28;
    }
    ctx->pc = 0x223C20u;
    {
        const bool branch_taken_0x223c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223c20) {
            ctx->pc = 0x223C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223C20u;
            // 0x223c24: 0xc60c0090  lwc1        $f12, 0x90($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x223C88u;
            goto label_223c88;
        }
    }
    ctx->pc = 0x223C28u;
label_223c28:
    // 0x223c28: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x223c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_223c2c:
    // 0x223c2c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_223c30:
    if (ctx->pc == 0x223C30u) {
        ctx->pc = 0x223C30u;
            // 0x223c30: 0xc60000a4  lwc1        $f0, 0xA4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x223C34u;
        goto label_223c34;
    }
    ctx->pc = 0x223C2Cu;
    {
        const bool branch_taken_0x223c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x223c2c) {
            ctx->pc = 0x223C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223C2Cu;
            // 0x223c30: 0xc60000a4  lwc1        $f0, 0xA4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x223C48u;
            goto label_223c48;
        }
    }
    ctx->pc = 0x223C34u;
label_223c34:
    // 0x223c34: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x223c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_223c38:
    // 0x223c38: 0xc0898f8  jal         func_2263E0
label_223c3c:
    if (ctx->pc == 0x223C3Cu) {
        ctx->pc = 0x223C3Cu;
            // 0x223c3c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x223C40u;
        goto label_223c40;
    }
    ctx->pc = 0x223C38u;
    SET_GPR_U32(ctx, 31, 0x223C40u);
    ctx->pc = 0x223C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223C38u;
            // 0x223c3c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2263E0u;
    if (runtime->hasFunction(0x2263E0u)) {
        auto targetFn = runtime->lookupFunction(0x2263E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C40u; }
        if (ctx->pc != 0x223C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002263E0_0x2263e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C40u; }
        if (ctx->pc != 0x223C40u) { return; }
    }
    ctx->pc = 0x223C40u;
label_223c40:
    // 0x223c40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x223c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_223c44:
    // 0x223c44: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x223c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223c48:
    // 0x223c48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x223c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223c4c:
    // 0x223c4c: 0xe48000b4  swc1        $f0, 0xB4($a0)
    ctx->pc = 0x223c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
label_223c50:
    // 0x223c50: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x223c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223c54:
    // 0x223c54: 0xc089738  jal         func_225CE0
label_223c58:
    if (ctx->pc == 0x223C58u) {
        ctx->pc = 0x223C58u;
            // 0x223c58: 0xe48000b8  swc1        $f0, 0xB8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
        ctx->pc = 0x223C5Cu;
        goto label_223c5c;
    }
    ctx->pc = 0x223C54u;
    SET_GPR_U32(ctx, 31, 0x223C5Cu);
    ctx->pc = 0x223C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223C54u;
            // 0x223c58: 0xe48000b8  swc1        $f0, 0xB8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CE0u;
    if (runtime->hasFunction(0x225CE0u)) {
        auto targetFn = runtime->lookupFunction(0x225CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C5Cu; }
        if (ctx->pc != 0x223C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225CE0_0x225ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C5Cu; }
        if (ctx->pc != 0x223C5Cu) { return; }
    }
    ctx->pc = 0x223C5Cu;
label_223c5c:
    // 0x223c5c: 0x262200b0  addiu       $v0, $s1, 0xB0
    ctx->pc = 0x223c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_223c60:
    // 0x223c60: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x223c60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_223c64:
    // 0x223c64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x223c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223c68:
    // 0x223c68: 0xc60100ac  lwc1        $f1, 0xAC($s0)
    ctx->pc = 0x223c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_223c6c:
    // 0x223c6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x223c6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_223c70:
    // 0x223c70: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
label_223c74:
    if (ctx->pc == 0x223C74u) {
        ctx->pc = 0x223C74u;
            // 0x223c74: 0xe6210030  swc1        $f1, 0x30($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
        ctx->pc = 0x223C78u;
        goto label_223c78;
    }
    ctx->pc = 0x223C70u;
    {
        const bool branch_taken_0x223c70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x223c70) {
            ctx->pc = 0x223C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223C70u;
            // 0x223c74: 0xe6210030  swc1        $f1, 0x30($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x223D08u;
            goto label_223d08;
        }
    }
    ctx->pc = 0x223C78u;
label_223c78:
    // 0x223c78: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x223c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_223c7c:
    // 0x223c7c: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x223c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_223c80:
    // 0x223c80: 0x10000021  b           . + 4 + (0x21 << 2)
label_223c84:
    if (ctx->pc == 0x223C84u) {
        ctx->pc = 0x223C84u;
            // 0x223c84: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x223C88u;
        goto label_223c88;
    }
    ctx->pc = 0x223C80u;
    {
        const bool branch_taken_0x223c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223C80u;
            // 0x223c84: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c80) {
            ctx->pc = 0x223D08u;
            goto label_223d08;
        }
    }
    ctx->pc = 0x223C88u;
label_223c88:
    // 0x223c88: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x223c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_223c8c:
    // 0x223c8c: 0xc60d00a4  lwc1        $f13, 0xA4($s0)
    ctx->pc = 0x223c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_223c90:
    // 0x223c90: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x223c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_223c94:
    // 0x223c94: 0xc60e00a8  lwc1        $f14, 0xA8($s0)
    ctx->pc = 0x223c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_223c98:
    // 0x223c98: 0x26070050  addiu       $a3, $s0, 0x50
    ctx->pc = 0x223c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_223c9c:
    // 0x223c9c: 0x26080080  addiu       $t0, $s0, 0x80
    ctx->pc = 0x223c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_223ca0:
    // 0x223ca0: 0xc088e44  jal         func_223910
label_223ca4:
    if (ctx->pc == 0x223CA4u) {
        ctx->pc = 0x223CA4u;
            // 0x223ca4: 0x262900a0  addiu       $t1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x223CA8u;
        goto label_223ca8;
    }
    ctx->pc = 0x223CA0u;
    SET_GPR_U32(ctx, 31, 0x223CA8u);
    ctx->pc = 0x223CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223CA0u;
            // 0x223ca4: 0x262900a0  addiu       $t1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223910u;
    if (runtime->hasFunction(0x223910u)) {
        auto targetFn = runtime->lookupFunction(0x223910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223CA8u; }
        if (ctx->pc != 0x223CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223910_0x223910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223CA8u; }
        if (ctx->pc != 0x223CA8u) { return; }
    }
    ctx->pc = 0x223CA8u;
label_223ca8:
    // 0x223ca8: 0x820500b2  lb          $a1, 0xB2($s0)
    ctx->pc = 0x223ca8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 178)));
label_223cac:
    // 0x223cac: 0xc089738  jal         func_225CE0
label_223cb0:
    if (ctx->pc == 0x223CB0u) {
        ctx->pc = 0x223CB0u;
            // 0x223cb0: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x223CB4u;
        goto label_223cb4;
    }
    ctx->pc = 0x223CACu;
    SET_GPR_U32(ctx, 31, 0x223CB4u);
    ctx->pc = 0x223CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223CACu;
            // 0x223cb0: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CE0u;
    if (runtime->hasFunction(0x225CE0u)) {
        auto targetFn = runtime->lookupFunction(0x225CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223CB4u; }
        if (ctx->pc != 0x223CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225CE0_0x225ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223CB4u; }
        if (ctx->pc != 0x223CB4u) { return; }
    }
    ctx->pc = 0x223CB4u;
label_223cb4:
    // 0x223cb4: 0xc088b74  jal         func_222DD0
label_223cb8:
    if (ctx->pc == 0x223CB8u) {
        ctx->pc = 0x223CB8u;
            // 0x223cb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223CBCu;
        goto label_223cbc;
    }
    ctx->pc = 0x223CB4u;
    SET_GPR_U32(ctx, 31, 0x223CBCu);
    ctx->pc = 0x223CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223CB4u;
            // 0x223cb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223CBCu; }
        if (ctx->pc != 0x223CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223CBCu; }
        if (ctx->pc != 0x223CBCu) { return; }
    }
    ctx->pc = 0x223CBCu;
label_223cbc:
    // 0x223cbc: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x223cbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_223cc0:
    // 0x223cc0: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x223cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_223cc4:
    // 0x223cc4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x223cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_223cc8:
    // 0x223cc8: 0x320f809  jalr        $t9
label_223ccc:
    if (ctx->pc == 0x223CCCu) {
        ctx->pc = 0x223CCCu;
            // 0x223ccc: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x223CD0u;
        goto label_223cd0;
    }
    ctx->pc = 0x223CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x223CD0u);
        ctx->pc = 0x223CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223CC8u;
            // 0x223ccc: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x223CD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x223CD0u; }
            if (ctx->pc != 0x223CD0u) { return; }
        }
        }
    }
    ctx->pc = 0x223CD0u;
label_223cd0:
    // 0x223cd0: 0xc088b74  jal         func_222DD0
label_223cd4:
    if (ctx->pc == 0x223CD4u) {
        ctx->pc = 0x223CD4u;
            // 0x223cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223CD8u;
        goto label_223cd8;
    }
    ctx->pc = 0x223CD0u;
    SET_GPR_U32(ctx, 31, 0x223CD8u);
    ctx->pc = 0x223CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223CD0u;
            // 0x223cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223CD8u; }
        if (ctx->pc != 0x223CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223CD8u; }
        if (ctx->pc != 0x223CD8u) { return; }
    }
    ctx->pc = 0x223CD8u;
label_223cd8:
    // 0x223cd8: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x223cd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_223cdc:
    // 0x223cdc: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x223cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_223ce0:
    // 0x223ce0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x223ce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_223ce4:
    // 0x223ce4: 0x320f809  jalr        $t9
label_223ce8:
    if (ctx->pc == 0x223CE8u) {
        ctx->pc = 0x223CE8u;
            // 0x223ce8: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x223CECu;
        goto label_223cec;
    }
    ctx->pc = 0x223CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x223CECu);
        ctx->pc = 0x223CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223CE4u;
            // 0x223ce8: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x223CECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x223CECu; }
            if (ctx->pc != 0x223CECu) { return; }
        }
        }
    }
    ctx->pc = 0x223CECu;
label_223cec:
    // 0x223cec: 0x262200b0  addiu       $v0, $s1, 0xB0
    ctx->pc = 0x223cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_223cf0:
    // 0x223cf0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x223cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_223cf4:
    // 0x223cf4: 0x820500b1  lb          $a1, 0xB1($s0)
    ctx->pc = 0x223cf4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 177)));
label_223cf8:
    // 0x223cf8: 0xc0891e8  jal         func_2247A0
label_223cfc:
    if (ctx->pc == 0x223CFCu) {
        ctx->pc = 0x223CFCu;
            // 0x223cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223D00u;
        goto label_223d00;
    }
    ctx->pc = 0x223CF8u;
    SET_GPR_U32(ctx, 31, 0x223D00u);
    ctx->pc = 0x223CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223CF8u;
            // 0x223cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2247A0u;
    if (runtime->hasFunction(0x2247A0u)) {
        auto targetFn = runtime->lookupFunction(0x2247A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223D00u; }
        if (ctx->pc != 0x223D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002247A0_0x2247a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223D00u; }
        if (ctx->pc != 0x223D00u) { return; }
    }
    ctx->pc = 0x223D00u;
label_223d00:
    // 0x223d00: 0xc60000ac  lwc1        $f0, 0xAC($s0)
    ctx->pc = 0x223d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223d04:
    // 0x223d04: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x223d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_223d08:
    // 0x223d08: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x223d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223d0c:
    // 0x223d0c: 0xe620015c  swc1        $f0, 0x15C($s1)
    ctx->pc = 0x223d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 348), bits); }
label_223d10:
    // 0x223d10: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x223d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223d14:
    // 0x223d14: 0xe6200160  swc1        $f0, 0x160($s1)
    ctx->pc = 0x223d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 352), bits); }
label_223d18:
    // 0x223d18: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x223d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_223d1c:
    // 0x223d1c: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
label_223d20:
    if (ctx->pc == 0x223D20u) {
        ctx->pc = 0x223D20u;
            // 0x223d20: 0x820300b3  lb          $v1, 0xB3($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 179)));
        ctx->pc = 0x223D24u;
        goto label_223d24;
    }
    ctx->pc = 0x223D1Cu;
    {
        const bool branch_taken_0x223d1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x223d1c) {
            ctx->pc = 0x223D20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223D1Cu;
            // 0x223d20: 0x820300b3  lb          $v1, 0xB3($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 179)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223D58u;
            goto label_223d58;
        }
    }
    ctx->pc = 0x223D24u;
label_223d24:
    // 0x223d24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_223d28:
    // 0x223d28: 0xc088dfc  jal         func_2237F0
label_223d2c:
    if (ctx->pc == 0x223D2Cu) {
        ctx->pc = 0x223D2Cu;
            // 0x223d2c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x223D30u;
        goto label_223d30;
    }
    ctx->pc = 0x223D28u;
    SET_GPR_U32(ctx, 31, 0x223D30u);
    ctx->pc = 0x223D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223D28u;
            // 0x223d2c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2237F0u;
    if (runtime->hasFunction(0x2237F0u)) {
        auto targetFn = runtime->lookupFunction(0x2237F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223D30u; }
        if (ctx->pc != 0x223D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002237F0_0x2237f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223D30u; }
        if (ctx->pc != 0x223D30u) { return; }
    }
    ctx->pc = 0x223D30u;
label_223d30:
    // 0x223d30: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x223d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_223d34:
    // 0x223d34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x223d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223d38:
    // 0x223d38: 0x0  nop
    ctx->pc = 0x223d38u;
    // NOP
label_223d3c:
    // 0x223d3c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x223d3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_223d40:
    // 0x223d40: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_223d44:
    if (ctx->pc == 0x223D44u) {
        ctx->pc = 0x223D48u;
        goto label_223d48;
    }
    ctx->pc = 0x223D40u;
    {
        const bool branch_taken_0x223d40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x223d40) {
            ctx->pc = 0x223D54u;
            goto label_223d54;
        }
    }
    ctx->pc = 0x223D48u;
label_223d48:
    // 0x223d48: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x223d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_223d4c:
    // 0x223d4c: 0xc088de0  jal         func_223780
label_223d50:
    if (ctx->pc == 0x223D50u) {
        ctx->pc = 0x223D50u;
            // 0x223d50: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x223D54u;
        goto label_223d54;
    }
    ctx->pc = 0x223D4Cu;
    SET_GPR_U32(ctx, 31, 0x223D54u);
    ctx->pc = 0x223D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223D4Cu;
            // 0x223d50: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223780u;
    if (runtime->hasFunction(0x223780u)) {
        auto targetFn = runtime->lookupFunction(0x223780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223D54u; }
        if (ctx->pc != 0x223D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223780_0x223780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223D54u; }
        if (ctx->pc != 0x223D54u) { return; }
    }
    ctx->pc = 0x223D54u;
label_223d54:
    // 0x223d54: 0x820300b3  lb          $v1, 0xB3($s0)
    ctx->pc = 0x223d54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 179)));
label_223d58:
    // 0x223d58: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x223d58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_223d5c:
    // 0x223d5c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_223d60:
    if (ctx->pc == 0x223D60u) {
        ctx->pc = 0x223D60u;
            // 0x223d60: 0x922200a8  lbu         $v0, 0xA8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->pc = 0x223D64u;
        goto label_223d64;
    }
    ctx->pc = 0x223D5Cu;
    {
        const bool branch_taken_0x223d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223d5c) {
            ctx->pc = 0x223D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223D5Cu;
            // 0x223d60: 0x922200a8  lbu         $v0, 0xA8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223D6Cu;
            goto label_223d6c;
        }
    }
    ctx->pc = 0x223D64u;
label_223d64:
    // 0x223d64: 0x10000010  b           . + 4 + (0x10 << 2)
label_223d68:
    if (ctx->pc == 0x223D68u) {
        ctx->pc = 0x223D68u;
            // 0x223d68: 0xa623002a  sh          $v1, 0x2A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x223D6Cu;
        goto label_223d6c;
    }
    ctx->pc = 0x223D64u;
    {
        const bool branch_taken_0x223d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223D64u;
            // 0x223d68: 0xa623002a  sh          $v1, 0x2A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d64) {
            ctx->pc = 0x223DA8u;
            goto label_223da8;
        }
    }
    ctx->pc = 0x223D6Cu;
label_223d6c:
    // 0x223d6c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x223d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_223d70:
    // 0x223d70: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x223d70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_223d74:
    // 0x223d74: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_223d78:
    if (ctx->pc == 0x223D78u) {
        ctx->pc = 0x223D78u;
            // 0x223d78: 0x820200b0  lb          $v0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->pc = 0x223D7Cu;
        goto label_223d7c;
    }
    ctx->pc = 0x223D74u;
    {
        const bool branch_taken_0x223d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223d74) {
            ctx->pc = 0x223D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223D74u;
            // 0x223d78: 0x820200b0  lb          $v0, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223D88u;
            goto label_223d88;
        }
    }
    ctx->pc = 0x223D7Cu;
label_223d7c:
    // 0x223d7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x223d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223d80:
    // 0x223d80: 0x10000009  b           . + 4 + (0x9 << 2)
label_223d84:
    if (ctx->pc == 0x223D84u) {
        ctx->pc = 0x223D84u;
            // 0x223d84: 0xa622002a  sh          $v0, 0x2A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x223D88u;
        goto label_223d88;
    }
    ctx->pc = 0x223D80u;
    {
        const bool branch_taken_0x223d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223D80u;
            // 0x223d84: 0xa622002a  sh          $v0, 0x2A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d80) {
            ctx->pc = 0x223DA8u;
            goto label_223da8;
        }
    }
    ctx->pc = 0x223D88u;
label_223d88:
    // 0x223d88: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x223d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_223d8c:
    // 0x223d8c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x223d8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_223d90:
    // 0x223d90: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_223d94:
    if (ctx->pc == 0x223D94u) {
        ctx->pc = 0x223D94u;
            // 0x223d94: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x223D98u;
        goto label_223d98;
    }
    ctx->pc = 0x223D90u;
    {
        const bool branch_taken_0x223d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223d90) {
            ctx->pc = 0x223D94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223D90u;
            // 0x223d94: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223DA4u;
            goto label_223da4;
        }
    }
    ctx->pc = 0x223D98u;
label_223d98:
    // 0x223d98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x223d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_223d9c:
    // 0x223d9c: 0x10000002  b           . + 4 + (0x2 << 2)
label_223da0:
    if (ctx->pc == 0x223DA0u) {
        ctx->pc = 0x223DA0u;
            // 0x223da0: 0xa622002a  sh          $v0, 0x2A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x223DA4u;
        goto label_223da4;
    }
    ctx->pc = 0x223D9Cu;
    {
        const bool branch_taken_0x223d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223D9Cu;
            // 0x223da0: 0xa622002a  sh          $v0, 0x2A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d9c) {
            ctx->pc = 0x223DA8u;
            goto label_223da8;
        }
    }
    ctx->pc = 0x223DA4u;
label_223da4:
    // 0x223da4: 0xa622002a  sh          $v0, 0x2A($s1)
    ctx->pc = 0x223da4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 2));
label_223da8:
    // 0x223da8: 0x820200b4  lb          $v0, 0xB4($s0)
    ctx->pc = 0x223da8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 180)));
label_223dac:
    // 0x223dac: 0xa2220098  sb          $v0, 0x98($s1)
    ctx->pc = 0x223dacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 152), (uint8_t)GPR_U32(ctx, 2));
label_223db0:
    // 0x223db0: 0x820200b5  lb          $v0, 0xB5($s0)
    ctx->pc = 0x223db0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 181)));
label_223db4:
    // 0x223db4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_223db8:
    if (ctx->pc == 0x223DB8u) {
        ctx->pc = 0x223DB8u;
            // 0x223db8: 0xc600009c  lwc1        $f0, 0x9C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x223DBCu;
        goto label_223dbc;
    }
    ctx->pc = 0x223DB4u;
    {
        const bool branch_taken_0x223db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223db4) {
            ctx->pc = 0x223DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223DB4u;
            // 0x223db8: 0xc600009c  lwc1        $f0, 0x9C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x223DCCu;
            goto label_223dcc;
        }
    }
    ctx->pc = 0x223DBCu;
label_223dbc:
    // 0x223dbc: 0x92220021  lbu         $v0, 0x21($s1)
    ctx->pc = 0x223dbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
label_223dc0:
    // 0x223dc0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x223dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_223dc4:
    // 0x223dc4: 0xa2220021  sb          $v0, 0x21($s1)
    ctx->pc = 0x223dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
label_223dc8:
    // 0x223dc8: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x223dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223dcc:
    // 0x223dcc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x223dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_223dd0:
    // 0x223dd0: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x223dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
label_223dd4:
    // 0x223dd4: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x223dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223dd8:
    // 0x223dd8: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x223dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
label_223ddc:
    // 0x223ddc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x223ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_223de0:
    // 0x223de0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_223de4:
    // 0x223de4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_223de8:
    // 0x223de8: 0x3e00008  jr          $ra
label_223dec:
    if (ctx->pc == 0x223DECu) {
        ctx->pc = 0x223DECu;
            // 0x223dec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x223DF0u;
        goto label_fallthrough_0x223de8;
    }
    ctx->pc = 0x223DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223DE8u;
            // 0x223dec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x223de8:
    ctx->pc = 0x223DF0u;
}
