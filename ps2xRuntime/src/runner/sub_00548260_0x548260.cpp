#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00548260
// Address: 0x548260 - 0x5484f0
void sub_00548260_0x548260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00548260_0x548260");
#endif

    switch (ctx->pc) {
        case 0x548358u: goto label_548358;
        case 0x5483bcu: goto label_5483bc;
        case 0x548484u: goto label_548484;
        default: break;
    }

    ctx->pc = 0x548260u;

    // 0x548260: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x548260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x548264: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x548264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x548268: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x548268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x54826c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x54826cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x548270: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x548270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x548274: 0x3c170067  lui         $s7, 0x67
    ctx->pc = 0x548274u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)103 << 16));
    // 0x548278: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x548278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x54827c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x54827cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548280: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x548280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x548284: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x548284u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548288: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x548288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x54828c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54828cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x548290: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x548290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x548294: 0x24a5e9e0  addiu       $a1, $a1, -0x1620
    ctx->pc = 0x548294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961632));
    // 0x548298: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x548298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x54829c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x54829cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5482a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x5482a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x5482a4: 0x26f7e790  addiu       $s7, $s7, -0x1870
    ctx->pc = 0x5482a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961040));
    // 0x5482a8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x5482a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x5482ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x5482acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5482b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x5482b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x5482b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x5482b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x5482b8: 0x9451da28  lhu         $s1, -0x25D8($v0)
    ctx->pc = 0x5482b8u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957608)));
    // 0x5482bc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x5482bcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x5482c0: 0x4601ad41  sub.s       $f21, $f21, $f1
    ctx->pc = 0x5482c0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x5482c4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5482c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x5482c8: 0x9450da2a  lhu         $s0, -0x25D6($v0)
    ctx->pc = 0x5482c8u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957610)));
    // 0x5482cc: 0xc4b40008  lwc1        $f20, 0x8($a1)
    ctx->pc = 0x5482ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x5482d0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5482d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x5482d4: 0x9442da28  lhu         $v0, -0x25D8($v0)
    ctx->pc = 0x5482d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957608)));
    // 0x5482d8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5482D8u;
    {
        const bool branch_taken_0x5482d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x5482DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5482D8u;
            // 0x5482dc: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5482d8) {
            ctx->pc = 0x5482ECu;
            goto label_5482ec;
        }
    }
    ctx->pc = 0x5482E0u;
    // 0x5482e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5482e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5482e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x5482E4u;
    {
        const bool branch_taken_0x5482e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5482E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5482E4u;
            // 0x5482e8: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5482e4) {
            ctx->pc = 0x548308u;
            goto label_548308;
        }
    }
    ctx->pc = 0x5482ECu;
label_5482ec:
    // 0x5482ec: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x5482ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x5482f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x5482f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x5482f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5482f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x5482f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5482f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5482fc: 0x0  nop
    ctx->pc = 0x5482fcu;
    // NOP
    // 0x548300: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x548300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x548304: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x548304u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_548308:
    // 0x548308: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x548308u;
    {
        const bool branch_taken_0x548308 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x548308) {
            ctx->pc = 0x54830Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x548308u;
            // 0x54830c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54831Cu;
            goto label_54831c;
        }
    }
    ctx->pc = 0x548310u;
    // 0x548310: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x548310u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548314: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x548314u;
    {
        const bool branch_taken_0x548314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548314u;
            // 0x548318: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x548314) {
            ctx->pc = 0x548334u;
            goto label_548334;
        }
    }
    ctx->pc = 0x54831Cu;
label_54831c:
    // 0x54831c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54831cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x548320: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x548320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x548324: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x548324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548328: 0x0  nop
    ctx->pc = 0x548328u;
    // NOP
    // 0x54832c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54832cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x548330: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x548330u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_548334:
    // 0x548334: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x548334u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x548338: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x548338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x54833c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54833cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x548340: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x548340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548344: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x548344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548348: 0x46146380  add.s       $f14, $f12, $f20
    ctx->pc = 0x548348u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    // 0x54834c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54834cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x548350: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x548350u;
    SET_GPR_U32(ctx, 31, 0x548358u);
    ctx->pc = 0x548354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x548350u;
            // 0x548354: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548358u; }
        if (ctx->pc != 0x548358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548358u; }
        if (ctx->pc != 0x548358u) { return; }
    }
    ctx->pc = 0x548358u;
label_548358:
    // 0x548358: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x548358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x54835c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x54835cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x548360: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x548360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x548364: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x548364u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x548368: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x548368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x54836c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x54836cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548370: 0xc460da30  lwc1        $f0, -0x25D0($v1)
    ctx->pc = 0x548370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x548374: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x548374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x548378: 0xc462da34  lwc1        $f2, -0x25CC($v1)
    ctx->pc = 0x548378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x54837c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x54837cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x548380: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x548380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x548384: 0xc461da38  lwc1        $f1, -0x25C8($v1)
    ctx->pc = 0x548384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x548388: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x548388u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x54838c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x54838cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x548390: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x548390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x548394: 0xc460da3c  lwc1        $f0, -0x25C4($v1)
    ctx->pc = 0x548394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x548398: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x548398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x54839c: 0x46161018  adda.s      $f2, $f22
    ctx->pc = 0x54839cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
    // 0x5483a0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x5483a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x5483a4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5483a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x5483a8: 0xc481da40  lwc1        $f1, -0x25C0($a0)
    ctx->pc = 0x5483a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294957632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5483ac: 0xc460da44  lwc1        $f0, -0x25BC($v1)
    ctx->pc = 0x5483acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5483b0: 0x4603a59c  madd.s      $f22, $f20, $f3
    ctx->pc = 0x5483b0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[3]));
    // 0x5483b4: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x5483b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x5483b8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x5483b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_5483bc:
    // 0x5483bc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x5483bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x5483c0: 0x3a630005  xori        $v1, $s3, 0x5
    ctx->pc = 0x5483c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)5);
    // 0x5483c4: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x5483c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x5483c8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x5483c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x5483cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x5483ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x5483d0: 0x2a5001b  divu        $zero, $s5, $a1
    ctx->pc = 0x5483d0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
    // 0x5483d4: 0x3012  mflo        $a2
    ctx->pc = 0x5483d4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x5483d8: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x5483d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x5483dc: 0x6182a  slt         $v1, $zero, $a2
    ctx->pc = 0x5483dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x5483e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x5483e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x5483e4: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x5483E4u;
    {
        const bool branch_taken_0x5483e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x5483E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5483E4u;
            // 0x5483e8: 0x2a5a823  subu        $s5, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5483e4) {
            ctx->pc = 0x548488u;
            goto label_548488;
        }
    }
    ctx->pc = 0x5483ECu;
    // 0x5483ec: 0x24c20019  addiu       $v0, $a2, 0x19
    ctx->pc = 0x5483ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 25));
    // 0x5483f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x5483f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x5483f4: 0x2e22821  addu        $a1, $s7, $v0
    ctx->pc = 0x5483f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x5483f8: 0xc4b40008  lwc1        $f20, 0x8($a1)
    ctx->pc = 0x5483f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x5483fc: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x5483fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x548400: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x548400u;
    {
        const bool branch_taken_0x548400 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x548404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x548400u;
            // 0x548404: 0x64140001  daddiu      $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x548400) {
            ctx->pc = 0x548414u;
            goto label_548414;
        }
    }
    ctx->pc = 0x548408u;
    // 0x548408: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x548408u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54840c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x54840Cu;
    {
        const bool branch_taken_0x54840c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54840Cu;
            // 0x548410: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54840c) {
            ctx->pc = 0x548430u;
            goto label_548430;
        }
    }
    ctx->pc = 0x548414u;
label_548414:
    // 0x548414: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x548414u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x548418: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x548418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x54841c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54841cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x548420: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x548420u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548424: 0x0  nop
    ctx->pc = 0x548424u;
    // NOP
    // 0x548428: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x548428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x54842c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54842cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_548430:
    // 0x548430: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x548430u;
    {
        const bool branch_taken_0x548430 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x548430) {
            ctx->pc = 0x548434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x548430u;
            // 0x548434: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x548444u;
            goto label_548444;
        }
    }
    ctx->pc = 0x548438u;
    // 0x548438: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x548438u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x54843c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x54843Cu;
    {
        const bool branch_taken_0x54843c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x548440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54843Cu;
            // 0x548440: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54843c) {
            ctx->pc = 0x54845Cu;
            goto label_54845c;
        }
    }
    ctx->pc = 0x548444u;
label_548444:
    // 0x548444: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x548444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x548448: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x548448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x54844c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54844cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548450: 0x0  nop
    ctx->pc = 0x548450u;
    // NOP
    // 0x548454: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x548454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x548458: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x548458u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54845c:
    // 0x54845c: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x54845cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x548460: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x548460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x548464: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x548464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x548468: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x548468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x54846c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54846cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x548470: 0x4614b380  add.s       $f14, $f22, $f20
    ctx->pc = 0x548470u;
    ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x548474: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x548474u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x548478: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x548478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x54847c: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x54847Cu;
    SET_GPR_U32(ctx, 31, 0x548484u);
    ctx->pc = 0x548480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54847Cu;
            // 0x548480: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548484u; }
        if (ctx->pc != 0x548484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x548484u; }
        if (ctx->pc != 0x548484u) { return; }
    }
    ctx->pc = 0x548484u;
label_548484:
    // 0x548484: 0x0  nop
    ctx->pc = 0x548484u;
    // NOP
label_548488:
    // 0x548488: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x548488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x54848c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x54848cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x548490: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x548490u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x548494: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x548494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x548498: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x548498u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x54849c: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x54849cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x5484a0: 0x2a630006  slti        $v1, $s3, 0x6
    ctx->pc = 0x5484a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x5484a4: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x5484A4u;
    {
        const bool branch_taken_0x5484a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5484A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5484A4u;
            // 0x5484a8: 0x4601a59c  madd.s      $f22, $f20, $f1 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5484a4) {
            ctx->pc = 0x5483BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5483bc;
        }
    }
    ctx->pc = 0x5484ACu;
    // 0x5484ac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x5484acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x5484b0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x5484b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x5484b4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x5484b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x5484b8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x5484b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x5484bc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x5484bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x5484c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5484c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x5484c4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x5484c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x5484c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x5484c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x5484cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x5484ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x5484d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x5484d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5484d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x5484d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5484d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x5484d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5484dc: 0x3e00008  jr          $ra
    ctx->pc = 0x5484DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5484E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5484DCu;
            // 0x5484e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5484E4u;
    // 0x5484e4: 0x0  nop
    ctx->pc = 0x5484e4u;
    // NOP
    // 0x5484e8: 0x0  nop
    ctx->pc = 0x5484e8u;
    // NOP
    // 0x5484ec: 0x0  nop
    ctx->pc = 0x5484ecu;
    // NOP
}
