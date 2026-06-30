#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023D210
// Address: 0x23d210 - 0x23d450
void sub_0023D210_0x23d210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D210_0x23d210");
#endif

    switch (ctx->pc) {
        case 0x23d210u: goto label_23d210;
        case 0x23d214u: goto label_23d214;
        case 0x23d218u: goto label_23d218;
        case 0x23d21cu: goto label_23d21c;
        case 0x23d220u: goto label_23d220;
        case 0x23d224u: goto label_23d224;
        case 0x23d228u: goto label_23d228;
        case 0x23d22cu: goto label_23d22c;
        case 0x23d230u: goto label_23d230;
        case 0x23d234u: goto label_23d234;
        case 0x23d238u: goto label_23d238;
        case 0x23d23cu: goto label_23d23c;
        case 0x23d240u: goto label_23d240;
        case 0x23d244u: goto label_23d244;
        case 0x23d248u: goto label_23d248;
        case 0x23d24cu: goto label_23d24c;
        case 0x23d250u: goto label_23d250;
        case 0x23d254u: goto label_23d254;
        case 0x23d258u: goto label_23d258;
        case 0x23d25cu: goto label_23d25c;
        case 0x23d260u: goto label_23d260;
        case 0x23d264u: goto label_23d264;
        case 0x23d268u: goto label_23d268;
        case 0x23d26cu: goto label_23d26c;
        case 0x23d270u: goto label_23d270;
        case 0x23d274u: goto label_23d274;
        case 0x23d278u: goto label_23d278;
        case 0x23d27cu: goto label_23d27c;
        case 0x23d280u: goto label_23d280;
        case 0x23d284u: goto label_23d284;
        case 0x23d288u: goto label_23d288;
        case 0x23d28cu: goto label_23d28c;
        case 0x23d290u: goto label_23d290;
        case 0x23d294u: goto label_23d294;
        case 0x23d298u: goto label_23d298;
        case 0x23d29cu: goto label_23d29c;
        case 0x23d2a0u: goto label_23d2a0;
        case 0x23d2a4u: goto label_23d2a4;
        case 0x23d2a8u: goto label_23d2a8;
        case 0x23d2acu: goto label_23d2ac;
        case 0x23d2b0u: goto label_23d2b0;
        case 0x23d2b4u: goto label_23d2b4;
        case 0x23d2b8u: goto label_23d2b8;
        case 0x23d2bcu: goto label_23d2bc;
        case 0x23d2c0u: goto label_23d2c0;
        case 0x23d2c4u: goto label_23d2c4;
        case 0x23d2c8u: goto label_23d2c8;
        case 0x23d2ccu: goto label_23d2cc;
        case 0x23d2d0u: goto label_23d2d0;
        case 0x23d2d4u: goto label_23d2d4;
        case 0x23d2d8u: goto label_23d2d8;
        case 0x23d2dcu: goto label_23d2dc;
        case 0x23d2e0u: goto label_23d2e0;
        case 0x23d2e4u: goto label_23d2e4;
        case 0x23d2e8u: goto label_23d2e8;
        case 0x23d2ecu: goto label_23d2ec;
        case 0x23d2f0u: goto label_23d2f0;
        case 0x23d2f4u: goto label_23d2f4;
        case 0x23d2f8u: goto label_23d2f8;
        case 0x23d2fcu: goto label_23d2fc;
        case 0x23d300u: goto label_23d300;
        case 0x23d304u: goto label_23d304;
        case 0x23d308u: goto label_23d308;
        case 0x23d30cu: goto label_23d30c;
        case 0x23d310u: goto label_23d310;
        case 0x23d314u: goto label_23d314;
        case 0x23d318u: goto label_23d318;
        case 0x23d31cu: goto label_23d31c;
        case 0x23d320u: goto label_23d320;
        case 0x23d324u: goto label_23d324;
        case 0x23d328u: goto label_23d328;
        case 0x23d32cu: goto label_23d32c;
        case 0x23d330u: goto label_23d330;
        case 0x23d334u: goto label_23d334;
        case 0x23d338u: goto label_23d338;
        case 0x23d33cu: goto label_23d33c;
        case 0x23d340u: goto label_23d340;
        case 0x23d344u: goto label_23d344;
        case 0x23d348u: goto label_23d348;
        case 0x23d34cu: goto label_23d34c;
        case 0x23d350u: goto label_23d350;
        case 0x23d354u: goto label_23d354;
        case 0x23d358u: goto label_23d358;
        case 0x23d35cu: goto label_23d35c;
        case 0x23d360u: goto label_23d360;
        case 0x23d364u: goto label_23d364;
        case 0x23d368u: goto label_23d368;
        case 0x23d36cu: goto label_23d36c;
        case 0x23d370u: goto label_23d370;
        case 0x23d374u: goto label_23d374;
        case 0x23d378u: goto label_23d378;
        case 0x23d37cu: goto label_23d37c;
        case 0x23d380u: goto label_23d380;
        case 0x23d384u: goto label_23d384;
        case 0x23d388u: goto label_23d388;
        case 0x23d38cu: goto label_23d38c;
        case 0x23d390u: goto label_23d390;
        case 0x23d394u: goto label_23d394;
        case 0x23d398u: goto label_23d398;
        case 0x23d39cu: goto label_23d39c;
        case 0x23d3a0u: goto label_23d3a0;
        case 0x23d3a4u: goto label_23d3a4;
        case 0x23d3a8u: goto label_23d3a8;
        case 0x23d3acu: goto label_23d3ac;
        case 0x23d3b0u: goto label_23d3b0;
        case 0x23d3b4u: goto label_23d3b4;
        case 0x23d3b8u: goto label_23d3b8;
        case 0x23d3bcu: goto label_23d3bc;
        case 0x23d3c0u: goto label_23d3c0;
        case 0x23d3c4u: goto label_23d3c4;
        case 0x23d3c8u: goto label_23d3c8;
        case 0x23d3ccu: goto label_23d3cc;
        case 0x23d3d0u: goto label_23d3d0;
        case 0x23d3d4u: goto label_23d3d4;
        case 0x23d3d8u: goto label_23d3d8;
        case 0x23d3dcu: goto label_23d3dc;
        case 0x23d3e0u: goto label_23d3e0;
        case 0x23d3e4u: goto label_23d3e4;
        case 0x23d3e8u: goto label_23d3e8;
        case 0x23d3ecu: goto label_23d3ec;
        case 0x23d3f0u: goto label_23d3f0;
        case 0x23d3f4u: goto label_23d3f4;
        case 0x23d3f8u: goto label_23d3f8;
        case 0x23d3fcu: goto label_23d3fc;
        case 0x23d400u: goto label_23d400;
        case 0x23d404u: goto label_23d404;
        case 0x23d408u: goto label_23d408;
        case 0x23d40cu: goto label_23d40c;
        case 0x23d410u: goto label_23d410;
        case 0x23d414u: goto label_23d414;
        case 0x23d418u: goto label_23d418;
        case 0x23d41cu: goto label_23d41c;
        case 0x23d420u: goto label_23d420;
        case 0x23d424u: goto label_23d424;
        case 0x23d428u: goto label_23d428;
        case 0x23d42cu: goto label_23d42c;
        case 0x23d430u: goto label_23d430;
        case 0x23d434u: goto label_23d434;
        case 0x23d438u: goto label_23d438;
        case 0x23d43cu: goto label_23d43c;
        case 0x23d440u: goto label_23d440;
        case 0x23d444u: goto label_23d444;
        case 0x23d448u: goto label_23d448;
        case 0x23d44cu: goto label_23d44c;
        default: break;
    }

    ctx->pc = 0x23d210u;

label_23d210:
    // 0x23d210: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x23d210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_23d214:
    // 0x23d214: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x23d214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_23d218:
    // 0x23d218: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x23d218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_23d21c:
    // 0x23d21c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x23d21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_23d220:
    // 0x23d220: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x23d220u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23d224:
    // 0x23d224: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23d224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_23d228:
    // 0x23d228: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23d228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_23d22c:
    // 0x23d22c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23d22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23d230:
    // 0x23d230: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23d230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23d234:
    // 0x23d234: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23d234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23d238:
    // 0x23d238: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23d238u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d23c:
    // 0x23d23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23d23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23d240:
    // 0x23d240: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23d240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23d244:
    // 0x23d244: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x23d244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23d248:
    // 0x23d248: 0xa3a000b0  sb          $zero, 0xB0($sp)
    ctx->pc = 0x23d248u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 0));
label_23d24c:
    // 0x23d24c: 0x2371021  addu        $v0, $s1, $s7
    ctx->pc = 0x23d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
label_23d250:
    // 0x23d250: 0x2e0b02d  daddu       $s6, $s7, $zero
    ctx->pc = 0x23d250u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_23d254:
    // 0x23d254: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x23d254u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_23d258:
    // 0x23d258: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x23d258u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d25c:
    // 0x23d25c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x23d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23d260:
    // 0x23d260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23d260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23d264:
    // 0x23d264: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23d268:
    // 0x23d268: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x23d268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_23d26c:
    // 0x23d26c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x23d26cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_23d270:
    // 0x23d270: 0xa3a200b0  sb          $v0, 0xB0($sp)
    ctx->pc = 0x23d270u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 2));
label_23d274:
    // 0x23d274: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x23d274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23d278:
    // 0x23d278: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x23d278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23d27c:
    // 0x23d27c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23d27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23d280:
    // 0x23d280: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x23d280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23d284:
    // 0x23d284: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x23d284u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_23d288:
    // 0x23d288: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x23d288u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_23d28c:
    // 0x23d28c: 0xe7a100bc  swc1        $f1, 0xBC($sp)
    ctx->pc = 0x23d28cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_23d290:
    // 0x23d290: 0x10000003  b           . + 4 + (0x3 << 2)
label_23d294:
    if (ctx->pc == 0x23D294u) {
        ctx->pc = 0x23D294u;
            // 0x23d294: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->pc = 0x23D298u;
        goto label_23d298;
    }
    ctx->pc = 0x23D290u;
    {
        const bool branch_taken_0x23d290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D290u;
            // 0x23d294: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d290) {
            ctx->pc = 0x23D2A0u;
            goto label_23d2a0;
        }
    }
    ctx->pc = 0x23D298u;
label_23d298:
    // 0x23d298: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x23d298u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_23d29c:
    // 0x23d29c: 0x0  nop
    ctx->pc = 0x23d29cu;
    // NOP
label_23d2a0:
    // 0x23d2a0: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x23d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_23d2a4:
    // 0x23d2a4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x23d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_23d2a8:
    // 0x23d2a8: 0x27a400cc  addiu       $a0, $sp, 0xCC
    ctx->pc = 0x23d2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_23d2ac:
    // 0x23d2ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23d2b0:
    // 0x23d2b0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x23d2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_23d2b4:
    // 0x23d2b4: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x23d2b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_23d2b8:
    // 0x23d2b8: 0x200f809  jalr        $s0
label_23d2bc:
    if (ctx->pc == 0x23D2BCu) {
        ctx->pc = 0x23D2BCu;
            // 0x23d2bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23D2C0u;
        goto label_23d2c0;
    }
    ctx->pc = 0x23D2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x23D2C0u);
        ctx->pc = 0x23D2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D2B8u;
            // 0x23d2bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23D2C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23D2C0u; }
            if (ctx->pc != 0x23D2C0u) { return; }
        }
        }
    }
    ctx->pc = 0x23D2C0u;
label_23d2c0:
    // 0x23d2c0: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x23d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_23d2c4:
    // 0x23d2c4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x23d2c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_23d2c8:
    // 0x23d2c8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_23d2cc:
    if (ctx->pc == 0x23D2CCu) {
        ctx->pc = 0x23D2D0u;
        goto label_23d2d0;
    }
    ctx->pc = 0x23D2C8u;
    {
        const bool branch_taken_0x23d2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d2c8) {
            ctx->pc = 0x23D298u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23d298;
        }
    }
    ctx->pc = 0x23D2D0u;
label_23d2d0:
    // 0x23d2d0: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x23d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_23d2d4:
    // 0x23d2d4: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x23d2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_23d2d8:
    // 0x23d2d8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x23d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_23d2dc:
    // 0x23d2dc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x23d2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_23d2e0:
    // 0x23d2e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23d2e4:
    // 0x23d2e4: 0x242a021  addu        $s4, $s2, $v0
    ctx->pc = 0x23d2e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_23d2e8:
    // 0x23d2e8: 0x200f809  jalr        $s0
label_23d2ec:
    if (ctx->pc == 0x23D2ECu) {
        ctx->pc = 0x23D2ECu;
            // 0x23d2ec: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23D2F0u;
        goto label_23d2f0;
    }
    ctx->pc = 0x23D2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x23D2F0u);
        ctx->pc = 0x23D2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D2E8u;
            // 0x23d2ec: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23D2F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23D2F0u; }
            if (ctx->pc != 0x23D2F0u) { return; }
        }
        }
    }
    ctx->pc = 0x23D2F0u;
label_23d2f0:
    // 0x23d2f0: 0x27a300c8  addiu       $v1, $sp, 0xC8
    ctx->pc = 0x23d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_23d2f4:
    // 0x23d2f4: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x23d2f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_23d2f8:
    // 0x23d2f8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_23d2fc:
    if (ctx->pc == 0x23D2FCu) {
        ctx->pc = 0x23D300u;
        goto label_23d300;
    }
    ctx->pc = 0x23D2F8u;
    {
        const bool branch_taken_0x23d2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d2f8) {
            ctx->pc = 0x23D328u;
            goto label_23d328;
        }
    }
    ctx->pc = 0x23D300u;
label_23d300:
    // 0x23d300: 0x2694ffec  addiu       $s4, $s4, -0x14
    ctx->pc = 0x23d300u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967276));
label_23d304:
    // 0x23d304: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x23d304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_23d308:
    // 0x23d308: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x23d308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_23d30c:
    // 0x23d30c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x23d30cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23d310:
    // 0x23d310: 0x200f809  jalr        $s0
label_23d314:
    if (ctx->pc == 0x23D314u) {
        ctx->pc = 0x23D314u;
            // 0x23d314: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->pc = 0x23D318u;
        goto label_23d318;
    }
    ctx->pc = 0x23D310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x23D318u);
        ctx->pc = 0x23D314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D310u;
            // 0x23d314: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23D318u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23D318u; }
            if (ctx->pc != 0x23D318u) { return; }
        }
        }
    }
    ctx->pc = 0x23D318u;
label_23d318:
    // 0x23d318: 0x27a300c8  addiu       $v1, $sp, 0xC8
    ctx->pc = 0x23d318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_23d31c:
    // 0x23d31c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x23d31cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_23d320:
    // 0x23d320: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_23d324:
    if (ctx->pc == 0x23D324u) {
        ctx->pc = 0x23D328u;
        goto label_23d328;
    }
    ctx->pc = 0x23D320u;
    {
        const bool branch_taken_0x23d320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d320) {
            ctx->pc = 0x23D300u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23d300;
        }
    }
    ctx->pc = 0x23D328u;
label_23d328:
    // 0x23d328: 0x2d5182a  slt         $v1, $s6, $s5
    ctx->pc = 0x23d328u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_23d32c:
    // 0x23d32c: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_23d330:
    if (ctx->pc == 0x23D330u) {
        ctx->pc = 0x23D334u;
        goto label_23d334;
    }
    ctx->pc = 0x23D32Cu;
    {
        const bool branch_taken_0x23d32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d32c) {
            ctx->pc = 0x23D3D0u;
            goto label_23d3d0;
        }
    }
    ctx->pc = 0x23D334u;
label_23d334:
    // 0x23d334: 0x12d50024  beq         $s6, $s5, . + 4 + (0x24 << 2)
label_23d338:
    if (ctx->pc == 0x23D338u) {
        ctx->pc = 0x23D33Cu;
        goto label_23d33c;
    }
    ctx->pc = 0x23D334u;
    {
        const bool branch_taken_0x23d334 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 21));
        if (branch_taken_0x23d334) {
            ctx->pc = 0x23D3C8u;
            goto label_23d3c8;
        }
    }
    ctx->pc = 0x23D33Cu;
label_23d33c:
    // 0x23d33c: 0x162080  sll         $a0, $s6, 2
    ctx->pc = 0x23d33cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_23d340:
    // 0x23d340: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x23d340u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_23d344:
    // 0x23d344: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x23d344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_23d348:
    // 0x23d348: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23d348u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23d34c:
    // 0x23d34c: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x23d34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_23d350:
    // 0x23d350: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x23d350u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_23d354:
    // 0x23d354: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x23d354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23d358:
    // 0x23d358: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x23d358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23d35c:
    // 0x23d35c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x23d35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23d360:
    // 0x23d360: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x23d360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23d364:
    // 0x23d364: 0xa3a40090  sb          $a0, 0x90($sp)
    ctx->pc = 0x23d364u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 4));
label_23d368:
    // 0x23d368: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x23d368u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_23d36c:
    // 0x23d36c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x23d36cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_23d370:
    // 0x23d370: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x23d370u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_23d374:
    // 0x23d374: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x23d374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_23d378:
    // 0x23d378: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x23d378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_23d37c:
    // 0x23d37c: 0xc6670004  lwc1        $f7, 0x4($s3)
    ctx->pc = 0x23d37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_23d380:
    // 0x23d380: 0x93a30090  lbu         $v1, 0x90($sp)
    ctx->pc = 0x23d380u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
label_23d384:
    // 0x23d384: 0xc6660008  lwc1        $f6, 0x8($s3)
    ctx->pc = 0x23d384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_23d388:
    // 0x23d388: 0xc665000c  lwc1        $f5, 0xC($s3)
    ctx->pc = 0x23d388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_23d38c:
    // 0x23d38c: 0xc6640010  lwc1        $f4, 0x10($s3)
    ctx->pc = 0x23d38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_23d390:
    // 0x23d390: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x23d390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23d394:
    // 0x23d394: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x23d394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23d398:
    // 0x23d398: 0xe4a70004  swc1        $f7, 0x4($a1)
    ctx->pc = 0x23d398u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_23d39c:
    // 0x23d39c: 0xe4a60008  swc1        $f6, 0x8($a1)
    ctx->pc = 0x23d39cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_23d3a0:
    // 0x23d3a0: 0xe4a5000c  swc1        $f5, 0xC($a1)
    ctx->pc = 0x23d3a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_23d3a4:
    // 0x23d3a4: 0xe4a40010  swc1        $f4, 0x10($a1)
    ctx->pc = 0x23d3a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_23d3a8:
    // 0x23d3a8: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x23d3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
label_23d3ac:
    // 0x23d3ac: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x23d3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23d3b0:
    // 0x23d3b0: 0xe6630004  swc1        $f3, 0x4($s3)
    ctx->pc = 0x23d3b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_23d3b4:
    // 0x23d3b4: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x23d3b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_23d3b8:
    // 0x23d3b8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x23d3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23d3bc:
    // 0x23d3bc: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x23d3bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_23d3c0:
    // 0x23d3c0: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x23d3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_23d3c4:
    // 0x23d3c4: 0x0  nop
    ctx->pc = 0x23d3c4u;
    // NOP
label_23d3c8:
    // 0x23d3c8: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x23d3c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_23d3cc:
    // 0x23d3cc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x23d3ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_23d3d0:
    // 0x23d3d0: 0x2d5082a  slt         $at, $s6, $s5
    ctx->pc = 0x23d3d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_23d3d4:
    // 0x23d3d4: 0x1020ffb2  beqz        $at, . + 4 + (-0x4E << 2)
label_23d3d8:
    if (ctx->pc == 0x23D3D8u) {
        ctx->pc = 0x23D3DCu;
        goto label_23d3dc;
    }
    ctx->pc = 0x23D3D4u;
    {
        const bool branch_taken_0x23d3d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d3d4) {
            ctx->pc = 0x23D2A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23d2a0;
        }
    }
    ctx->pc = 0x23D3DCu;
label_23d3dc:
    // 0x23d3dc: 0x236082a  slt         $at, $s1, $s6
    ctx->pc = 0x23d3dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_23d3e0:
    // 0x23d3e0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_23d3e4:
    if (ctx->pc == 0x23D3E4u) {
        ctx->pc = 0x23D3E8u;
        goto label_23d3e8;
    }
    ctx->pc = 0x23D3E0u;
    {
        const bool branch_taken_0x23d3e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d3e0) {
            ctx->pc = 0x23D400u;
            goto label_23d400;
        }
    }
    ctx->pc = 0x23D3E8u;
label_23d3e8:
    // 0x23d3e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23d3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d3ec:
    // 0x23d3ec: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x23d3ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23d3f0:
    // 0x23d3f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23d3f4:
    // 0x23d3f4: 0xc08f484  jal         func_23D210
label_23d3f8:
    if (ctx->pc == 0x23D3F8u) {
        ctx->pc = 0x23D3F8u;
            // 0x23d3f8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23D3FCu;
        goto label_23d3fc;
    }
    ctx->pc = 0x23D3F4u;
    SET_GPR_U32(ctx, 31, 0x23D3FCu);
    ctx->pc = 0x23D3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D3F4u;
            // 0x23d3f8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23D210u;
    goto label_23d210;
    ctx->pc = 0x23D3FCu;
label_23d3fc:
    // 0x23d3fc: 0x0  nop
    ctx->pc = 0x23d3fcu;
    // NOP
label_23d400:
    // 0x23d400: 0x2b7082a  slt         $at, $s5, $s7
    ctx->pc = 0x23d400u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_23d404:
    // 0x23d404: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_23d408:
    if (ctx->pc == 0x23D408u) {
        ctx->pc = 0x23D40Cu;
        goto label_23d40c;
    }
    ctx->pc = 0x23D404u;
    {
        const bool branch_taken_0x23d404 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d404) {
            ctx->pc = 0x23D418u;
            goto label_23d418;
        }
    }
    ctx->pc = 0x23D40Cu;
label_23d40c:
    // 0x23d40c: 0x1000ff8f  b           . + 4 + (-0x71 << 2)
label_23d410:
    if (ctx->pc == 0x23D410u) {
        ctx->pc = 0x23D410u;
            // 0x23d410: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23D414u;
        goto label_23d414;
    }
    ctx->pc = 0x23D40Cu;
    {
        const bool branch_taken_0x23d40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D40Cu;
            // 0x23d410: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d40c) {
            ctx->pc = 0x23D24Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23d24c;
        }
    }
    ctx->pc = 0x23D414u;
label_23d414:
    // 0x23d414: 0x0  nop
    ctx->pc = 0x23d414u;
    // NOP
label_23d418:
    // 0x23d418: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x23d418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23d41c:
    // 0x23d41c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x23d41cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_23d420:
    // 0x23d420: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x23d420u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23d424:
    // 0x23d424: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23d424u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23d428:
    // 0x23d428: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23d428u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23d42c:
    // 0x23d42c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23d42cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23d430:
    // 0x23d430: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23d430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23d434:
    // 0x23d434: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23d434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23d438:
    // 0x23d438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23d438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23d43c:
    // 0x23d43c: 0x3e00008  jr          $ra
label_23d440:
    if (ctx->pc == 0x23D440u) {
        ctx->pc = 0x23D440u;
            // 0x23d440: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x23D444u;
        goto label_23d444;
    }
    ctx->pc = 0x23D43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D43Cu;
            // 0x23d440: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23D444u;
label_23d444:
    // 0x23d444: 0x0  nop
    ctx->pc = 0x23d444u;
    // NOP
label_23d448:
    // 0x23d448: 0x0  nop
    ctx->pc = 0x23d448u;
    // NOP
label_23d44c:
    // 0x23d44c: 0x0  nop
    ctx->pc = 0x23d44cu;
    // NOP
}
