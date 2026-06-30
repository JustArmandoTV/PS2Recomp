#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003214C0
// Address: 0x3214c0 - 0x321730
void sub_003214C0_0x3214c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003214C0_0x3214c0");
#endif

    switch (ctx->pc) {
        case 0x321674u: goto label_321674;
        case 0x321708u: goto label_321708;
        default: break;
    }

    ctx->pc = 0x3214c0u;

    // 0x3214c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3214c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3214c4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3214c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3214c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3214c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3214cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3214ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3214d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3214d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3214d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3214d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3214d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3214d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3214dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3214dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3214e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3214e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3214e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3214e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3214e8: 0x8c650e68  lw          $a1, 0xE68($v1)
    ctx->pc = 0x3214e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
    // 0x3214ec: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x3214ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3214f0: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x3214f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3214f4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3214f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3214f8: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x3214f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3214fc: 0x24a40008  addiu       $a0, $a1, 0x8
    ctx->pc = 0x3214fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x321500: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x321500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321504: 0x24ad0014  addiu       $t5, $a1, 0x14
    ctx->pc = 0x321504u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x321508: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x321508u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x32150c: 0x8d2f0000  lw          $t7, 0x0($t1)
    ctx->pc = 0x32150cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x321510: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x321510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x321514: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x321514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321518: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x321518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32151c: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x32151cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x321520: 0x8de90000  lw          $t1, 0x0($t7)
    ctx->pc = 0x321520u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x321524: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x321524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x321528: 0x25ee0024  addiu       $t6, $t7, 0x24
    ctx->pc = 0x321528u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 36));
    // 0x32152c: 0xc5e30024  lwc1        $f3, 0x24($t7)
    ctx->pc = 0x32152cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x321530: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x321530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x321534: 0xc5e20028  lwc1        $f2, 0x28($t7)
    ctx->pc = 0x321534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321538: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x321538u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x32153c: 0xc5e1002c  lwc1        $f1, 0x2C($t7)
    ctx->pc = 0x32153cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321540: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x321540u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x321544: 0xc5e00030  lwc1        $f0, 0x30($t7)
    ctx->pc = 0x321544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321548: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x321548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x32154c: 0x1120006f  beqz        $t1, . + 4 + (0x6F << 2)
    ctx->pc = 0x32154Cu;
    {
        const bool branch_taken_0x32154c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x321550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32154Cu;
            // 0x321550: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32154c) {
            ctx->pc = 0x32170Cu;
            goto label_32170c;
        }
    }
    ctx->pc = 0x321554u;
    // 0x321554: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x321554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x321558: 0x3c090060  lui         $t1, 0x60
    ctx->pc = 0x321558u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)96 << 16));
    // 0x32155c: 0x8c4c89f0  lw          $t4, -0x7610($v0)
    ctx->pc = 0x32155cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
    // 0x321560: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x321560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x321564: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x321564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321568: 0x2901fc19  slti        $at, $t0, -0x3E7
    ctx->pc = 0x321568u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4294966297) ? 1 : 0);
    // 0x32156c: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x32156cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x321570: 0x8d8b0018  lw          $t3, 0x18($t4)
    ctx->pc = 0x321570u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x321574: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x321574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x321578: 0x8c4af9b0  lw          $t2, -0x650($v0)
    ctx->pc = 0x321578u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965680)));
    // 0x32157c: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x32157cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321580: 0xe5c40000  swc1        $f4, 0x0($t6)
    ctx->pc = 0x321580u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x321584: 0xb9043  sra         $s2, $t3, 1
    ctx->pc = 0x321584u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 11), 1));
    // 0x321588: 0xe5c00004  swc1        $f0, 0x4($t6)
    ctx->pc = 0x321588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x32158c: 0x3c02c180  lui         $v0, 0xC180
    ctx->pc = 0x32158cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49536 << 16));
    // 0x321590: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x321590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321594: 0xe5e3002c  swc1        $f3, 0x2C($t7)
    ctx->pc = 0x321594u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 44), bits); }
    // 0x321598: 0xe5e20030  swc1        $f2, 0x30($t7)
    ctx->pc = 0x321598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 48), bits); }
    // 0x32159c: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x32159cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x3215a0: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x3215a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3215a4: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x3215a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3215a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3215a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3215ac: 0xe5a30004  swc1        $f3, 0x4($t5)
    ctx->pc = 0x3215acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x3215b0: 0x1471021  addu        $v0, $t2, $a3
    ctx->pc = 0x3215b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x3215b4: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x3215b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3215b8: 0xe4a2001c  swc1        $f2, 0x1C($a1)
    ctx->pc = 0x3215b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x3215bc: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x3215bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x3215c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3215c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3215c4: 0x0  nop
    ctx->pc = 0x3215c4u;
    // NOP
    // 0x3215c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3215c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3215cc: 0xc522f9bc  lwc1        $f2, -0x644($t1)
    ctx->pc = 0x3215ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294965692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3215d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3215d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3215d4: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x3215d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x3215d8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x3215D8u;
    {
        const bool branch_taken_0x3215d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3215DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3215D8u;
            // 0x3215dc: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3215d8) {
            ctx->pc = 0x3215F8u;
            goto label_3215f8;
        }
    }
    ctx->pc = 0x3215E0u;
    // 0x3215e0: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x3215e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x3215e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3215e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3215e8: 0x0  nop
    ctx->pc = 0x3215e8u;
    // NOP
    // 0x3215ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3215ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3215f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3215f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3215f4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x3215f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3215f8:
    // 0x3215f8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3215f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3215fc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3215fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x321600: 0x8ca5f9c0  lw          $a1, -0x640($a1)
    ctx->pc = 0x321600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294965696)));
    // 0x321604: 0x8c42f9b8  lw          $v0, -0x648($v0)
    ctx->pc = 0x321604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965688)));
    // 0x321608: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x321608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
    // 0x32160c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x32160cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x321610: 0x91820029  lbu         $v0, 0x29($t4)
    ctx->pc = 0x321610u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 41)));
    // 0x321614: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x321614u;
    {
        const bool branch_taken_0x321614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321614) {
            ctx->pc = 0x321618u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x321614u;
            // 0x321618: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x321638u;
            goto label_321638;
        }
    }
    ctx->pc = 0x32161Cu;
    // 0x32161c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x32161cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321620: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x321620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x321624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321628: 0x0  nop
    ctx->pc = 0x321628u;
    // NOP
    // 0x32162c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32162cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x321630: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x321630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x321634: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x321634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_321638:
    // 0x321638: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x321638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x32163c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x32163cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321640: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x321640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x321644: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x321644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x321648: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x321648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32164c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32164cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x321650: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x321650u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321654: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x321654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x321658: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x321658u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32165c: 0xe46c0004  swc1        $f12, 0x4($v1)
    ctx->pc = 0x32165cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x321660: 0x8c550e68  lw          $s5, 0xE68($v0)
    ctx->pc = 0x321660u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
    // 0x321664: 0x8eb40010  lw          $s4, 0x10($s5)
    ctx->pc = 0x321664u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x321668: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x321668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32166c: 0xc0ee398  jal         func_3B8E60
    ctx->pc = 0x32166Cu;
    SET_GPR_U32(ctx, 31, 0x321674u);
    ctx->pc = 0x321670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32166Cu;
            // 0x321670: 0xaeb10010  sw          $s1, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E60u;
    if (runtime->hasFunction(0x3B8E60u)) {
        auto targetFn = runtime->lookupFunction(0x3B8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321674u; }
        if (ctx->pc != 0x321674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8E60_0x3b8e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321674u; }
        if (ctx->pc != 0x321674u) { return; }
    }
    ctx->pc = 0x321674u;
label_321674:
    // 0x321674: 0xaeb40010  sw          $s4, 0x10($s5)
    ctx->pc = 0x321674u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 20));
    // 0x321678: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x321678u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32167c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x32167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321680: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x321680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x321684: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x321684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x321688: 0x2a01fc19  slti        $at, $s0, -0x3E7
    ctx->pc = 0x321688u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294966297) ? 1 : 0);
    // 0x32168c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32168cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x321690: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x321690u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x321694: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x321694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x321698: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x321698u;
    {
        const bool branch_taken_0x321698 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x32169Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321698u;
            // 0x32169c: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x321698) {
            ctx->pc = 0x3216B4u;
            goto label_3216b4;
        }
    }
    ctx->pc = 0x3216A0u;
    // 0x3216a0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3216a0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3216a4: 0x0  nop
    ctx->pc = 0x3216a4u;
    // NOP
    // 0x3216a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3216a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3216ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3216acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3216b0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3216b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3216b4:
    // 0x3216b4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3216b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3216b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3216b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3216bc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3216bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3216c0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x3216c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3216c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3216c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3216c8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3216c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3216cc: 0x8c520e68  lw          $s2, 0xE68($v0)
    ctx->pc = 0x3216ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
    // 0x3216d0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x3216d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3216d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3216d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3216d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3216d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3216dc: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x3216dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3216e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3216e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3216e4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3216e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3216e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3216e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3216ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3216ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3216f0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3216f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3216f4: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x3216f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x3216f8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x3216f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x3216fc: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x3216fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x321700: 0xc0ee334  jal         func_3B8CD0
    ctx->pc = 0x321700u;
    SET_GPR_U32(ctx, 31, 0x321708u);
    ctx->pc = 0x321704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321700u;
            // 0x321704: 0xae510010  sw          $s1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321708u; }
        if (ctx->pc != 0x321708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321708u; }
        if (ctx->pc != 0x321708u) { return; }
    }
    ctx->pc = 0x321708u;
label_321708:
    // 0x321708: 0xae500010  sw          $s0, 0x10($s2)
    ctx->pc = 0x321708u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 16));
label_32170c:
    // 0x32170c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x32170cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x321710: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x321710u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x321714: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x321714u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x321718: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x321718u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32171c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32171cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321720: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x321720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x321724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321728: 0x3e00008  jr          $ra
    ctx->pc = 0x321728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32172Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321728u;
            // 0x32172c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x321730u;
}
