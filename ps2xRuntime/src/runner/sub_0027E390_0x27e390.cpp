#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027E390
// Address: 0x27e390 - 0x27e860
void sub_0027E390_0x27e390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E390_0x27e390");
#endif

    switch (ctx->pc) {
        case 0x27e3c0u: goto label_27e3c0;
        case 0x27e4f0u: goto label_27e4f0;
        case 0x27e530u: goto label_27e530;
        default: break;
    }

    ctx->pc = 0x27e390u;

    // 0x27e390: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x27e390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x27e394: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x27e394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27e398: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27e398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27e39c: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x27e39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x27e3a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27e3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27e3a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27e3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27e3a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27e3a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e3ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27e3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27e3b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27e3b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e3b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27e3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27e3b8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27E3B8u;
    {
        const bool branch_taken_0x27e3b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E3B8u;
            // 0x27e3bc: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e3b8) {
            ctx->pc = 0x27E3DCu;
            goto label_27e3dc;
        }
    }
    ctx->pc = 0x27E3C0u;
label_27e3c0:
    // 0x27e3c0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x27e3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x27e3c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27e3c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27e3cc: 0x0  nop
    ctx->pc = 0x27e3ccu;
    // NOP
    // 0x27e3d0: 0x0  nop
    ctx->pc = 0x27e3d0u;
    // NOP
    // 0x27e3d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27E3D4u;
    {
        const bool branch_taken_0x27e3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e3d4) {
            ctx->pc = 0x27E3C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27e3c0;
        }
    }
    ctx->pc = 0x27E3DCu;
label_27e3dc:
    // 0x27e3dc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x27e3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x27e3e0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x27e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x27e3e4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x27e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x27e3e8: 0x27b000ac  addiu       $s0, $sp, 0xAC
    ctx->pc = 0x27e3e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x27e3ec: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x27e3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x27e3f0: 0x24420970  addiu       $v0, $v0, 0x970
    ctx->pc = 0x27e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2416));
    // 0x27e3f4: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x27e3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x27e3f8: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x27e3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x27e3fc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x27e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x27e400: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x27e400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
    // 0x27e404: 0x248600a0  addiu       $a2, $a0, 0xA0
    ctx->pc = 0x27e404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x27e408: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27e408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27e40c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x27e40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e410: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x27e410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27e414: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x27e414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e418: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x27e418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x27e41c: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x27e41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e420: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x27e420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x27e424: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x27e424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e428: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x27e428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x27e42c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x27e42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e430: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x27e430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x27e434: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x27e434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x27e438: 0xe7ac0084  swc1        $f12, 0x84($sp)
    ctx->pc = 0x27e438u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x27e43c: 0x92430014  lbu         $v1, 0x14($s2)
    ctx->pc = 0x27e43cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x27e440: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27e440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27e444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e448: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27e448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e44c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x27e44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x27e450: 0x92420015  lbu         $v0, 0x15($s2)
    ctx->pc = 0x27e450u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 21)));
    // 0x27e454: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E454u;
    {
        const bool branch_taken_0x27e454 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27E458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E454u;
            // 0x27e458: 0x248700a0  addiu       $a3, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e454) {
            ctx->pc = 0x27E468u;
            goto label_27e468;
        }
    }
    ctx->pc = 0x27E45Cu;
    // 0x27e45c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e45cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e460: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27E460u;
    {
        const bool branch_taken_0x27e460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E460u;
            // 0x27e464: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e460) {
            ctx->pc = 0x27E484u;
            goto label_27e484;
        }
    }
    ctx->pc = 0x27E468u;
label_27e468:
    // 0x27e468: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x27e468u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x27e46c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27e46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27e470: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27e470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27e474: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27e474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e478: 0x0  nop
    ctx->pc = 0x27e478u;
    // NOP
    // 0x27e47c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27e47cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27e480: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x27e480u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_27e484:
    // 0x27e484: 0x3c023c00  lui         $v0, 0x3C00
    ctx->pc = 0x27e484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15360 << 16));
    // 0x27e488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e48c: 0x0  nop
    ctx->pc = 0x27e48cu;
    // NOP
    // 0x27e490: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27e490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27e494: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x27e494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x27e498: 0x92420016  lbu         $v0, 0x16($s2)
    ctx->pc = 0x27e498u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x27e49c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27E49Cu;
    {
        const bool branch_taken_0x27e49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e49c) {
            ctx->pc = 0x27E4B8u;
            goto label_27e4b8;
        }
    }
    ctx->pc = 0x27E4A4u;
    // 0x27e4a4: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x27e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x27e4a8: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x27e4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x27e4ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27E4ACu;
    {
        const bool branch_taken_0x27e4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E4ACu;
            // 0x27e4b0: 0xafa20078  sw          $v0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e4ac) {
            ctx->pc = 0x27E4D8u;
            goto label_27e4d8;
        }
    }
    ctx->pc = 0x27E4B4u;
    // 0x27e4b4: 0x0  nop
    ctx->pc = 0x27e4b4u;
    // NOP
label_27e4b8:
    // 0x27e4b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27e4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27e4bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x27e4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27e4c0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x27e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x27e4c4: 0x24420970  addiu       $v0, $v0, 0x970
    ctx->pc = 0x27e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2416));
    // 0x27e4c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e4cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27e4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e4d0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x27e4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x27e4d4: 0x0  nop
    ctx->pc = 0x27e4d4u;
    // NOP
label_27e4d8:
    // 0x27e4d8: 0x8e480018  lw          $t0, 0x18($s2)
    ctx->pc = 0x27e4d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x27e4dc: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x27e4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27e4e0: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x27e4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x27e4e4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x27e4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27e4e8: 0xc087ee8  jal         func_21FBA0
    ctx->pc = 0x27E4E8u;
    SET_GPR_U32(ctx, 31, 0x27E4F0u);
    ctx->pc = 0x27E4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E4E8u;
            // 0x27e4ec: 0x27a90098  addiu       $t1, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FBA0u;
    if (runtime->hasFunction(0x21FBA0u)) {
        auto targetFn = runtime->lookupFunction(0x21FBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E4F0u; }
        if (ctx->pc != 0x27E4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FBA0_0x21fba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E4F0u; }
        if (ctx->pc != 0x27E4F0u) { return; }
    }
    ctx->pc = 0x27E4F0u;
label_27e4f0:
    // 0x27e4f0: 0x83a30088  lb          $v1, 0x88($sp)
    ctx->pc = 0x27e4f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x27e4f4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x27E4F4u;
    {
        const bool branch_taken_0x27e4f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e4f4) {
            ctx->pc = 0x27E538u;
            goto label_27e538;
        }
    }
    ctx->pc = 0x27E4FCu;
    // 0x27e4fc: 0x8e480018  lw          $t0, 0x18($s2)
    ctx->pc = 0x27e4fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x27e500: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x27e500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e504: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x27e504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x27e508: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x27e508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x27e50c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27e50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e510: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x27e510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27e514: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27e514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e518: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x27e518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x27e51c: 0x25070044  addiu       $a3, $t0, 0x44
    ctx->pc = 0x27e51cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 68));
    // 0x27e520: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x27e520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x27e524: 0xafa70054  sw          $a3, 0x54($sp)
    ctx->pc = 0x27e524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 7));
    // 0x27e528: 0xc08ea14  jal         func_23A850
    ctx->pc = 0x27E528u;
    SET_GPR_U32(ctx, 31, 0x27E530u);
    ctx->pc = 0x27E52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E528u;
            // 0x27e52c: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A850u;
    if (runtime->hasFunction(0x23A850u)) {
        auto targetFn = runtime->lookupFunction(0x23A850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E530u; }
        if (ctx->pc != 0x27E530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A850_0x23a850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E530u; }
        if (ctx->pc != 0x27E530u) { return; }
    }
    ctx->pc = 0x27E530u;
label_27e530:
    // 0x27e530: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x27E530u;
    {
        const bool branch_taken_0x27e530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e530) {
            ctx->pc = 0x27E838u;
            goto label_27e838;
        }
    }
    ctx->pc = 0x27E538u;
label_27e538:
    // 0x27e538: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x27e538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27e53c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x27e53cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e540: 0x0  nop
    ctx->pc = 0x27e540u;
    // NOP
    // 0x27e544: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x27e544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e548: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x27E548u;
    {
        const bool branch_taken_0x27e548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27e548) {
            ctx->pc = 0x27E618u;
            goto label_27e618;
        }
    }
    ctx->pc = 0x27E550u;
    // 0x27e550: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x27e550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e554: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27e554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e558: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x27E558u;
    {
        const bool branch_taken_0x27e558 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27e558) {
            ctx->pc = 0x27E618u;
            goto label_27e618;
        }
    }
    ctx->pc = 0x27E560u;
    // 0x27e560: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x27e560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x27e564: 0x90a400a8  lbu         $a0, 0xA8($a1)
    ctx->pc = 0x27e564u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x27e568: 0x38830007  xori        $v1, $a0, 0x7
    ctx->pc = 0x27e568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x27e56c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27e56cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27e570: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x27e570u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x27e574: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E574u;
    {
        const bool branch_taken_0x27e574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e574) {
            ctx->pc = 0x27E588u;
            goto label_27e588;
        }
    }
    ctx->pc = 0x27E57Cu;
    // 0x27e57c: 0x38830006  xori        $v1, $a0, 0x6
    ctx->pc = 0x27e57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
    // 0x27e580: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27e580u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27e584: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x27e584u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_27e588:
    // 0x27e588: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x27e588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x27e58c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x27e58cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x27e590: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27E590u;
    {
        const bool branch_taken_0x27e590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e590) {
            ctx->pc = 0x27E5B8u;
            goto label_27e5b8;
        }
    }
    ctx->pc = 0x27E598u;
    // 0x27e598: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x27e598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x27e59c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x27e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27e5a0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x27e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x27e5a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x27e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27e5a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27e5ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27e5b0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x27e5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x27e5b4: 0x0  nop
    ctx->pc = 0x27e5b4u;
    // NOP
label_27e5b8:
    // 0x27e5b8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x27e5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27e5bc: 0x90a400a8  lbu         $a0, 0xA8($a1)
    ctx->pc = 0x27e5bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x27e5c0: 0x38830007  xori        $v1, $a0, 0x7
    ctx->pc = 0x27e5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x27e5c4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27e5c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27e5c8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E5C8u;
    {
        const bool branch_taken_0x27e5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E5C8u;
            // 0x27e5cc: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e5c8) {
            ctx->pc = 0x27E5E8u;
            goto label_27e5e8;
        }
    }
    ctx->pc = 0x27E5D0u;
    // 0x27e5d0: 0x38830006  xori        $v1, $a0, 0x6
    ctx->pc = 0x27e5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
    // 0x27e5d4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27e5d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27e5d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E5D8u;
    {
        const bool branch_taken_0x27e5d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e5d8) {
            ctx->pc = 0x27E5E8u;
            goto label_27e5e8;
        }
    }
    ctx->pc = 0x27E5E0u;
    // 0x27e5e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27e5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e5e4: 0x0  nop
    ctx->pc = 0x27e5e4u;
    // NOP
label_27e5e8:
    // 0x27e5e8: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x27e5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
    // 0x27e5ec: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x27e5ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x27e5f0: 0x14600091  bnez        $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x27E5F0u;
    {
        const bool branch_taken_0x27e5f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e5f0) {
            ctx->pc = 0x27E838u;
            goto label_27e838;
        }
    }
    ctx->pc = 0x27E5F8u;
    // 0x27e5f8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x27e5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x27e5fc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x27e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27e600: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x27e600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x27e604: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x27e604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27e608: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27e608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27e60c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27e60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27e610: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x27E610u;
    {
        const bool branch_taken_0x27e610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E610u;
            // 0x27e614: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e610) {
            ctx->pc = 0x27E838u;
            goto label_27e838;
        }
    }
    ctx->pc = 0x27E618u;
label_27e618:
    // 0x27e618: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x27e618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e61c: 0x0  nop
    ctx->pc = 0x27e61cu;
    // NOP
    // 0x27e620: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x27e620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e624: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x27E624u;
    {
        const bool branch_taken_0x27e624 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27e624) {
            ctx->pc = 0x27E6C0u;
            goto label_27e6c0;
        }
    }
    ctx->pc = 0x27E62Cu;
    // 0x27e62c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x27e62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e630: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27e630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e634: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x27E634u;
    {
        const bool branch_taken_0x27e634 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27e634) {
            ctx->pc = 0x27E6C0u;
            goto label_27e6c0;
        }
    }
    ctx->pc = 0x27E63Cu;
    // 0x27e63c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x27e63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x27e640: 0x90a400a8  lbu         $a0, 0xA8($a1)
    ctx->pc = 0x27e640u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x27e644: 0x38830007  xori        $v1, $a0, 0x7
    ctx->pc = 0x27e644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x27e648: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27e648u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27e64c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x27e64cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x27e650: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E650u;
    {
        const bool branch_taken_0x27e650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e650) {
            ctx->pc = 0x27E664u;
            goto label_27e664;
        }
    }
    ctx->pc = 0x27E658u;
    // 0x27e658: 0x38830006  xori        $v1, $a0, 0x6
    ctx->pc = 0x27e658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
    // 0x27e65c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27e65cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27e660: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x27e660u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_27e664:
    // 0x27e664: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x27e664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x27e668: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x27e668u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x27e66c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x27E66Cu;
    {
        const bool branch_taken_0x27e66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e66c) {
            ctx->pc = 0x27E698u;
            goto label_27e698;
        }
    }
    ctx->pc = 0x27E674u;
    // 0x27e674: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x27e674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x27e678: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x27e678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27e67c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x27e67cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x27e680: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x27e680u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27e684: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27e684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27e688: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27e688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27e68c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x27E68Cu;
    {
        const bool branch_taken_0x27e68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E68Cu;
            // 0x27e690: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e68c) {
            ctx->pc = 0x27E838u;
            goto label_27e838;
        }
    }
    ctx->pc = 0x27E694u;
    // 0x27e694: 0x0  nop
    ctx->pc = 0x27e694u;
    // NOP
label_27e698:
    // 0x27e698: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x27e698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x27e69c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x27e69cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27e6a0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x27e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27e6a4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x27e6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x27e6a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x27e6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27e6ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27e6b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27e6b4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x27E6B4u;
    {
        const bool branch_taken_0x27e6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E6B4u;
            // 0x27e6b8: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e6b4) {
            ctx->pc = 0x27E838u;
            goto label_27e838;
        }
    }
    ctx->pc = 0x27E6BCu;
    // 0x27e6bc: 0x0  nop
    ctx->pc = 0x27e6bcu;
    // NOP
label_27e6c0:
    // 0x27e6c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x27e6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e6c4: 0x0  nop
    ctx->pc = 0x27e6c4u;
    // NOP
    // 0x27e6c8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x27e6c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e6cc: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x27E6CCu;
    {
        const bool branch_taken_0x27e6cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27e6cc) {
            ctx->pc = 0x27E768u;
            goto label_27e768;
        }
    }
    ctx->pc = 0x27E6D4u;
    // 0x27e6d4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x27e6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e6d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27e6d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e6dc: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x27E6DCu;
    {
        const bool branch_taken_0x27e6dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27e6dc) {
            ctx->pc = 0x27E768u;
            goto label_27e768;
        }
    }
    ctx->pc = 0x27E6E4u;
    // 0x27e6e4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x27e6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27e6e8: 0x90a400a8  lbu         $a0, 0xA8($a1)
    ctx->pc = 0x27e6e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x27e6ec: 0x38830007  xori        $v1, $a0, 0x7
    ctx->pc = 0x27e6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x27e6f0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27e6f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27e6f4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27E6F4u;
    {
        const bool branch_taken_0x27e6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E6F4u;
            // 0x27e6f8: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e6f4) {
            ctx->pc = 0x27E710u;
            goto label_27e710;
        }
    }
    ctx->pc = 0x27E6FCu;
    // 0x27e6fc: 0x38830006  xori        $v1, $a0, 0x6
    ctx->pc = 0x27e6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
    // 0x27e700: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27e700u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27e704: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27E704u;
    {
        const bool branch_taken_0x27e704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e704) {
            ctx->pc = 0x27E710u;
            goto label_27e710;
        }
    }
    ctx->pc = 0x27E70Cu;
    // 0x27e70c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27e70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e710:
    // 0x27e710: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x27e710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
    // 0x27e714: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x27e714u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x27e718: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27E718u;
    {
        const bool branch_taken_0x27e718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e718) {
            ctx->pc = 0x27E740u;
            goto label_27e740;
        }
    }
    ctx->pc = 0x27E720u;
    // 0x27e720: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x27e720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x27e724: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x27e724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27e728: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x27e728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x27e72c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x27e72cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27e730: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27e730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27e734: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27e734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27e738: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x27E738u;
    {
        const bool branch_taken_0x27e738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E738u;
            // 0x27e73c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e738) {
            ctx->pc = 0x27E838u;
            goto label_27e838;
        }
    }
    ctx->pc = 0x27E740u;
label_27e740:
    // 0x27e740: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x27e740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x27e744: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x27e744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x27e748: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x27e748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27e74c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x27e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x27e750: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x27e750u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27e754: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27e754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27e758: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27e758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27e75c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x27E75Cu;
    {
        const bool branch_taken_0x27e75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E75Cu;
            // 0x27e760: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e75c) {
            ctx->pc = 0x27E838u;
            goto label_27e838;
        }
    }
    ctx->pc = 0x27E764u;
    // 0x27e764: 0x0  nop
    ctx->pc = 0x27e764u;
    // NOP
label_27e768:
    // 0x27e768: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x27e768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x27e76c: 0x90a400a8  lbu         $a0, 0xA8($a1)
    ctx->pc = 0x27e76cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x27e770: 0x38830007  xori        $v1, $a0, 0x7
    ctx->pc = 0x27e770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x27e774: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27e774u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27e778: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x27e778u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x27e77c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E77Cu;
    {
        const bool branch_taken_0x27e77c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e77c) {
            ctx->pc = 0x27E790u;
            goto label_27e790;
        }
    }
    ctx->pc = 0x27E784u;
    // 0x27e784: 0x38830006  xori        $v1, $a0, 0x6
    ctx->pc = 0x27e784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
    // 0x27e788: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27e788u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27e78c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x27e78cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_27e790:
    // 0x27e790: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x27e790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x27e794: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x27e794u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x27e798: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x27E798u;
    {
        const bool branch_taken_0x27e798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e798) {
            ctx->pc = 0x27E7F0u;
            goto label_27e7f0;
        }
    }
    ctx->pc = 0x27E7A0u;
    // 0x27e7a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27e7a4: 0x906400a8  lbu         $a0, 0xA8($v1)
    ctx->pc = 0x27e7a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x27e7a8: 0x38830007  xori        $v1, $a0, 0x7
    ctx->pc = 0x27e7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
    // 0x27e7ac: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27e7acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27e7b0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E7B0u;
    {
        const bool branch_taken_0x27e7b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E7B0u;
            // 0x27e7b4: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7b0) {
            ctx->pc = 0x27E7D0u;
            goto label_27e7d0;
        }
    }
    ctx->pc = 0x27E7B8u;
    // 0x27e7b8: 0x38830006  xori        $v1, $a0, 0x6
    ctx->pc = 0x27e7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
    // 0x27e7bc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27e7bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27e7c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E7C0u;
    {
        const bool branch_taken_0x27e7c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e7c0) {
            ctx->pc = 0x27E7D0u;
            goto label_27e7d0;
        }
    }
    ctx->pc = 0x27E7C8u;
    // 0x27e7c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27e7c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e7cc: 0x0  nop
    ctx->pc = 0x27e7ccu;
    // NOP
label_27e7d0:
    // 0x27e7d0: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x27e7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
    // 0x27e7d4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x27e7d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x27e7d8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x27E7D8u;
    {
        const bool branch_taken_0x27e7d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e7d8) {
            ctx->pc = 0x27E818u;
            goto label_27e818;
        }
    }
    ctx->pc = 0x27E7E0u;
    // 0x27e7e0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x27e7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e7e4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x27e7e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e7e8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x27E7E8u;
    {
        const bool branch_taken_0x27e7e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27e7e8) {
            ctx->pc = 0x27E818u;
            goto label_27e818;
        }
    }
    ctx->pc = 0x27E7F0u;
label_27e7f0:
    // 0x27e7f0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x27e7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x27e7f4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x27e7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27e7f8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x27e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27e7fc: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x27e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x27e800: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x27e800u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27e804: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27e804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27e808: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27e808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27e80c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27E80Cu;
    {
        const bool branch_taken_0x27e80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E80Cu;
            // 0x27e810: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e80c) {
            ctx->pc = 0x27E838u;
            goto label_27e838;
        }
    }
    ctx->pc = 0x27E814u;
    // 0x27e814: 0x0  nop
    ctx->pc = 0x27e814u;
    // NOP
label_27e818:
    // 0x27e818: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x27e818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x27e81c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x27e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27e820: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x27e820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x27e824: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x27e824u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27e828: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27e828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27e82c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27e830: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x27e830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x27e834: 0x0  nop
    ctx->pc = 0x27e834u;
    // NOP
label_27e838:
    // 0x27e838: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27e838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27e83c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27e83cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e840: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27e840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e844: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27e844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27e848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e84c: 0x3e00008  jr          $ra
    ctx->pc = 0x27E84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E84Cu;
            // 0x27e850: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27E854u;
    // 0x27e854: 0x0  nop
    ctx->pc = 0x27e854u;
    // NOP
    // 0x27e858: 0x0  nop
    ctx->pc = 0x27e858u;
    // NOP
    // 0x27e85c: 0x0  nop
    ctx->pc = 0x27e85cu;
    // NOP
}
