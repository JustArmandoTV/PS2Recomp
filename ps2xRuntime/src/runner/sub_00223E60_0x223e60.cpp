#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00223E60
// Address: 0x223e60 - 0x224010
void sub_00223E60_0x223e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223E60_0x223e60");
#endif

    switch (ctx->pc) {
        case 0x223e60u: goto label_223e60;
        case 0x223e64u: goto label_223e64;
        case 0x223e68u: goto label_223e68;
        case 0x223e6cu: goto label_223e6c;
        case 0x223e70u: goto label_223e70;
        case 0x223e74u: goto label_223e74;
        case 0x223e78u: goto label_223e78;
        case 0x223e7cu: goto label_223e7c;
        case 0x223e80u: goto label_223e80;
        case 0x223e84u: goto label_223e84;
        case 0x223e88u: goto label_223e88;
        case 0x223e8cu: goto label_223e8c;
        case 0x223e90u: goto label_223e90;
        case 0x223e94u: goto label_223e94;
        case 0x223e98u: goto label_223e98;
        case 0x223e9cu: goto label_223e9c;
        case 0x223ea0u: goto label_223ea0;
        case 0x223ea4u: goto label_223ea4;
        case 0x223ea8u: goto label_223ea8;
        case 0x223eacu: goto label_223eac;
        case 0x223eb0u: goto label_223eb0;
        case 0x223eb4u: goto label_223eb4;
        case 0x223eb8u: goto label_223eb8;
        case 0x223ebcu: goto label_223ebc;
        case 0x223ec0u: goto label_223ec0;
        case 0x223ec4u: goto label_223ec4;
        case 0x223ec8u: goto label_223ec8;
        case 0x223eccu: goto label_223ecc;
        case 0x223ed0u: goto label_223ed0;
        case 0x223ed4u: goto label_223ed4;
        case 0x223ed8u: goto label_223ed8;
        case 0x223edcu: goto label_223edc;
        case 0x223ee0u: goto label_223ee0;
        case 0x223ee4u: goto label_223ee4;
        case 0x223ee8u: goto label_223ee8;
        case 0x223eecu: goto label_223eec;
        case 0x223ef0u: goto label_223ef0;
        case 0x223ef4u: goto label_223ef4;
        case 0x223ef8u: goto label_223ef8;
        case 0x223efcu: goto label_223efc;
        case 0x223f00u: goto label_223f00;
        case 0x223f04u: goto label_223f04;
        case 0x223f08u: goto label_223f08;
        case 0x223f0cu: goto label_223f0c;
        case 0x223f10u: goto label_223f10;
        case 0x223f14u: goto label_223f14;
        case 0x223f18u: goto label_223f18;
        case 0x223f1cu: goto label_223f1c;
        case 0x223f20u: goto label_223f20;
        case 0x223f24u: goto label_223f24;
        case 0x223f28u: goto label_223f28;
        case 0x223f2cu: goto label_223f2c;
        case 0x223f30u: goto label_223f30;
        case 0x223f34u: goto label_223f34;
        case 0x223f38u: goto label_223f38;
        case 0x223f3cu: goto label_223f3c;
        case 0x223f40u: goto label_223f40;
        case 0x223f44u: goto label_223f44;
        case 0x223f48u: goto label_223f48;
        case 0x223f4cu: goto label_223f4c;
        case 0x223f50u: goto label_223f50;
        case 0x223f54u: goto label_223f54;
        case 0x223f58u: goto label_223f58;
        case 0x223f5cu: goto label_223f5c;
        case 0x223f60u: goto label_223f60;
        case 0x223f64u: goto label_223f64;
        case 0x223f68u: goto label_223f68;
        case 0x223f6cu: goto label_223f6c;
        case 0x223f70u: goto label_223f70;
        case 0x223f74u: goto label_223f74;
        case 0x223f78u: goto label_223f78;
        case 0x223f7cu: goto label_223f7c;
        case 0x223f80u: goto label_223f80;
        case 0x223f84u: goto label_223f84;
        case 0x223f88u: goto label_223f88;
        case 0x223f8cu: goto label_223f8c;
        case 0x223f90u: goto label_223f90;
        case 0x223f94u: goto label_223f94;
        case 0x223f98u: goto label_223f98;
        case 0x223f9cu: goto label_223f9c;
        case 0x223fa0u: goto label_223fa0;
        case 0x223fa4u: goto label_223fa4;
        case 0x223fa8u: goto label_223fa8;
        case 0x223facu: goto label_223fac;
        case 0x223fb0u: goto label_223fb0;
        case 0x223fb4u: goto label_223fb4;
        case 0x223fb8u: goto label_223fb8;
        case 0x223fbcu: goto label_223fbc;
        case 0x223fc0u: goto label_223fc0;
        case 0x223fc4u: goto label_223fc4;
        case 0x223fc8u: goto label_223fc8;
        case 0x223fccu: goto label_223fcc;
        case 0x223fd0u: goto label_223fd0;
        case 0x223fd4u: goto label_223fd4;
        case 0x223fd8u: goto label_223fd8;
        case 0x223fdcu: goto label_223fdc;
        case 0x223fe0u: goto label_223fe0;
        case 0x223fe4u: goto label_223fe4;
        case 0x223fe8u: goto label_223fe8;
        case 0x223fecu: goto label_223fec;
        case 0x223ff0u: goto label_223ff0;
        case 0x223ff4u: goto label_223ff4;
        case 0x223ff8u: goto label_223ff8;
        case 0x223ffcu: goto label_223ffc;
        case 0x224000u: goto label_224000;
        case 0x224004u: goto label_224004;
        case 0x224008u: goto label_224008;
        case 0x22400cu: goto label_22400c;
        default: break;
    }

    ctx->pc = 0x223e60u;

label_223e60:
    // 0x223e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_223e64:
    // 0x223e64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x223e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_223e68:
    // 0x223e68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_223e6c:
    // 0x223e6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_223e70:
    // 0x223e70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x223e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_223e74:
    // 0x223e74: 0x90820021  lbu         $v0, 0x21($a0)
    ctx->pc = 0x223e74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
label_223e78:
    // 0x223e78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x223e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_223e7c:
    // 0x223e7c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x223e7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_223e80:
    // 0x223e80: 0xa0a200b5  sb          $v0, 0xB5($a1)
    ctx->pc = 0x223e80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 181), (uint8_t)GPR_U32(ctx, 2));
label_223e84:
    // 0x223e84: 0x80820098  lb          $v0, 0x98($a0)
    ctx->pc = 0x223e84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
label_223e88:
    // 0x223e88: 0xa0a200b4  sb          $v0, 0xB4($a1)
    ctx->pc = 0x223e88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 180), (uint8_t)GPR_U32(ctx, 2));
label_223e8c:
    // 0x223e8c: 0x9482006e  lhu         $v0, 0x6E($a0)
    ctx->pc = 0x223e8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 110)));
label_223e90:
    // 0x223e90: 0xa4a2000a  sh          $v0, 0xA($a1)
    ctx->pc = 0x223e90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 2));
label_223e94:
    // 0x223e94: 0x8c840090  lw          $a0, 0x90($a0)
    ctx->pc = 0x223e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_223e98:
    // 0x223e98: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_223e9c:
    if (ctx->pc == 0x223E9Cu) {
        ctx->pc = 0x223E9Cu;
            // 0x223e9c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223EA0u;
        goto label_223ea0;
    }
    ctx->pc = 0x223E98u;
    {
        const bool branch_taken_0x223e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223E98u;
            // 0x223e9c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e98) {
            ctx->pc = 0x223EB8u;
            goto label_223eb8;
        }
    }
    ctx->pc = 0x223EA0u;
label_223ea0:
    // 0x223ea0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x223ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_223ea4:
    // 0x223ea4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x223ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_223ea8:
    // 0x223ea8: 0x320f809  jalr        $t9
label_223eac:
    if (ctx->pc == 0x223EACu) {
        ctx->pc = 0x223EB0u;
        goto label_223eb0;
    }
    ctx->pc = 0x223EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x223EB0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x223EB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x223EB0u; }
            if (ctx->pc != 0x223EB0u) { return; }
        }
        }
    }
    ctx->pc = 0x223EB0u;
label_223eb0:
    // 0x223eb0: 0x10000003  b           . + 4 + (0x3 << 2)
label_223eb4:
    if (ctx->pc == 0x223EB4u) {
        ctx->pc = 0x223EB4u;
            // 0x223eb4: 0xa20200b1  sb          $v0, 0xB1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 177), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x223EB8u;
        goto label_223eb8;
    }
    ctx->pc = 0x223EB0u;
    {
        const bool branch_taken_0x223eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223EB0u;
            // 0x223eb4: 0xa20200b1  sb          $v0, 0xB1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 177), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223eb0) {
            ctx->pc = 0x223EC0u;
            goto label_223ec0;
        }
    }
    ctx->pc = 0x223EB8u;
label_223eb8:
    // 0x223eb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x223eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223ebc:
    // 0x223ebc: 0xa20200b1  sb          $v0, 0xB1($s0)
    ctx->pc = 0x223ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 177), (uint8_t)GPR_U32(ctx, 2));
label_223ec0:
    // 0x223ec0: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x223ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_223ec4:
    // 0x223ec4: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x223ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223ec8:
    // 0x223ec8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x223ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_223ecc:
    // 0x223ecc: 0x82220058  lb          $v0, 0x58($s1)
    ctx->pc = 0x223eccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_223ed0:
    // 0x223ed0: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x223ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
label_223ed4:
    // 0x223ed4: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x223ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223ed8:
    // 0x223ed8: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x223ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
label_223edc:
    // 0x223edc: 0xc620015c  lwc1        $f0, 0x15C($s1)
    ctx->pc = 0x223edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223ee0:
    // 0x223ee0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x223ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_223ee4:
    // 0x223ee4: 0xc6200160  lwc1        $f0, 0x160($s1)
    ctx->pc = 0x223ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223ee8:
    // 0x223ee8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x223ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
label_223eec:
    // 0x223eec: 0xc6200180  lwc1        $f0, 0x180($s1)
    ctx->pc = 0x223eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223ef0:
    // 0x223ef0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x223ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_223ef4:
    // 0x223ef4: 0xc6200184  lwc1        $f0, 0x184($s1)
    ctx->pc = 0x223ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223ef8:
    // 0x223ef8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x223ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_223efc:
    // 0x223efc: 0xc6200188  lwc1        $f0, 0x188($s1)
    ctx->pc = 0x223efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223f00:
    // 0x223f00: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x223f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_223f04:
    // 0x223f04: 0xc620018c  lwc1        $f0, 0x18C($s1)
    ctx->pc = 0x223f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223f08:
    // 0x223f08: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x223f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_223f0c:
    // 0x223f0c: 0xc6200190  lwc1        $f0, 0x190($s1)
    ctx->pc = 0x223f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223f10:
    // 0x223f10: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x223f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_223f14:
    // 0x223f14: 0xc6200194  lwc1        $f0, 0x194($s1)
    ctx->pc = 0x223f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223f18:
    // 0x223f18: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x223f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_223f1c:
    // 0x223f1c: 0xc6200198  lwc1        $f0, 0x198($s1)
    ctx->pc = 0x223f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223f20:
    // 0x223f20: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x223f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_223f24:
    // 0x223f24: 0xc620019c  lwc1        $f0, 0x19C($s1)
    ctx->pc = 0x223f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223f28:
    // 0x223f28: 0xc089638  jal         func_2258E0
label_223f2c:
    if (ctx->pc == 0x223F2Cu) {
        ctx->pc = 0x223F2Cu;
            // 0x223f2c: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
        ctx->pc = 0x223F30u;
        goto label_223f30;
    }
    ctx->pc = 0x223F28u;
    SET_GPR_U32(ctx, 31, 0x223F30u);
    ctx->pc = 0x223F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223F28u;
            // 0x223f2c: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F30u; }
        if (ctx->pc != 0x223F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223F30u; }
        if (ctx->pc != 0x223F30u) { return; }
    }
    ctx->pc = 0x223F30u;
label_223f30:
    // 0x223f30: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x223f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_223f34:
    // 0x223f34: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x223f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_223f38:
    // 0x223f38: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x223f38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_223f3c:
    // 0x223f3c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x223f3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_223f40:
    // 0x223f40: 0x320f809  jalr        $t9
label_223f44:
    if (ctx->pc == 0x223F44u) {
        ctx->pc = 0x223F44u;
            // 0x223f44: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x223F48u;
        goto label_223f48;
    }
    ctx->pc = 0x223F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x223F48u);
        ctx->pc = 0x223F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223F40u;
            // 0x223f44: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x223F48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x223F48u; }
            if (ctx->pc != 0x223F48u) { return; }
        }
        }
    }
    ctx->pc = 0x223F48u;
label_223f48:
    // 0x223f48: 0x922300a8  lbu         $v1, 0xA8($s1)
    ctx->pc = 0x223f48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 168)));
label_223f4c:
    // 0x223f4c: 0xa20300b0  sb          $v1, 0xB0($s0)
    ctx->pc = 0x223f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 176), (uint8_t)GPR_U32(ctx, 3));
label_223f50:
    // 0x223f50: 0x96230164  lhu         $v1, 0x164($s1)
    ctx->pc = 0x223f50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 356)));
label_223f54:
    // 0x223f54: 0xa20300b2  sb          $v1, 0xB2($s0)
    ctx->pc = 0x223f54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 178), (uint8_t)GPR_U32(ctx, 3));
label_223f58:
    // 0x223f58: 0xc6200154  lwc1        $f0, 0x154($s1)
    ctx->pc = 0x223f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223f5c:
    // 0x223f5c: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x223f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
label_223f60:
    // 0x223f60: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x223f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223f64:
    // 0x223f64: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x223f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
label_223f68:
    // 0x223f68: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x223f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223f6c:
    // 0x223f6c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x223f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_223f70:
    // 0x223f70: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x223f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223f74:
    // 0x223f74: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x223f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_223f78:
    // 0x223f78: 0xc62000e8  lwc1        $f0, 0xE8($s1)
    ctx->pc = 0x223f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223f7c:
    // 0x223f7c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x223f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_223f80:
    // 0x223f80: 0xc62000ec  lwc1        $f0, 0xEC($s1)
    ctx->pc = 0x223f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223f84:
    // 0x223f84: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x223f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_223f88:
    // 0x223f88: 0xc6200120  lwc1        $f0, 0x120($s1)
    ctx->pc = 0x223f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223f8c:
    // 0x223f8c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x223f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_223f90:
    // 0x223f90: 0xc6200124  lwc1        $f0, 0x124($s1)
    ctx->pc = 0x223f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223f94:
    // 0x223f94: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x223f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_223f98:
    // 0x223f98: 0xc6200128  lwc1        $f0, 0x128($s1)
    ctx->pc = 0x223f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223f9c:
    // 0x223f9c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x223f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_223fa0:
    // 0x223fa0: 0xc620012c  lwc1        $f0, 0x12C($s1)
    ctx->pc = 0x223fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223fa4:
    // 0x223fa4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x223fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_223fa8:
    // 0x223fa8: 0xc6200130  lwc1        $f0, 0x130($s1)
    ctx->pc = 0x223fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223fac:
    // 0x223fac: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x223facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_223fb0:
    // 0x223fb0: 0xc6200134  lwc1        $f0, 0x134($s1)
    ctx->pc = 0x223fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223fb4:
    // 0x223fb4: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x223fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_223fb8:
    // 0x223fb8: 0xc6200138  lwc1        $f0, 0x138($s1)
    ctx->pc = 0x223fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223fbc:
    // 0x223fbc: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x223fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
label_223fc0:
    // 0x223fc0: 0xc620013c  lwc1        $f0, 0x13C($s1)
    ctx->pc = 0x223fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223fc4:
    // 0x223fc4: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x223fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_223fc8:
    // 0x223fc8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x223fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_223fcc:
    // 0x223fcc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x223fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_223fd0:
    // 0x223fd0: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x223fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_223fd4:
    // 0x223fd4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x223fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_223fd8:
    // 0x223fd8: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x223fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223fdc:
    // 0x223fdc: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x223fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
label_223fe0:
    // 0x223fe0: 0x9623002a  lhu         $v1, 0x2A($s1)
    ctx->pc = 0x223fe0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
label_223fe4:
    // 0x223fe4: 0xa20300b3  sb          $v1, 0xB3($s0)
    ctx->pc = 0x223fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 179), (uint8_t)GPR_U32(ctx, 3));
label_223fe8:
    // 0x223fe8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x223fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_223fec:
    // 0x223fec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_223ff0:
    // 0x223ff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_223ff4:
    // 0x223ff4: 0x3e00008  jr          $ra
label_223ff8:
    if (ctx->pc == 0x223FF8u) {
        ctx->pc = 0x223FF8u;
            // 0x223ff8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x223FFCu;
        goto label_223ffc;
    }
    ctx->pc = 0x223FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223FF4u;
            // 0x223ff8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223FFCu;
label_223ffc:
    // 0x223ffc: 0x0  nop
    ctx->pc = 0x223ffcu;
    // NOP
label_224000:
    // 0x224000: 0x3e00008  jr          $ra
label_224004:
    if (ctx->pc == 0x224004u) {
        ctx->pc = 0x224004u;
            // 0x224004: 0x248200b0  addiu       $v0, $a0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
        ctx->pc = 0x224008u;
        goto label_224008;
    }
    ctx->pc = 0x224000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224000u;
            // 0x224004: 0x248200b0  addiu       $v0, $a0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224008u;
label_224008:
    // 0x224008: 0x0  nop
    ctx->pc = 0x224008u;
    // NOP
label_22400c:
    // 0x22400c: 0x0  nop
    ctx->pc = 0x22400cu;
    // NOP
}
