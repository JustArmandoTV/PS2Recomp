#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AA490
// Address: 0x3aa490 - 0x3aa7c0
void sub_003AA490_0x3aa490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA490_0x3aa490");
#endif

    switch (ctx->pc) {
        case 0x3aa630u: goto label_3aa630;
        case 0x3aa67cu: goto label_3aa67c;
        case 0x3aa6fcu: goto label_3aa6fc;
        case 0x3aa770u: goto label_3aa770;
        default: break;
    }

    ctx->pc = 0x3aa490u;

    // 0x3aa490: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3aa490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3aa494: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3aa494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3aa498: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3aa498u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa49c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3aa49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x3aa4a0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3aa4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3aa4a4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3aa4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3aa4a8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3aa4a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa4ac: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3aa4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3aa4b0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3aa4b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa4b4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3aa4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3aa4b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3aa4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3aa4bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3aa4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3aa4c0: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x3aa4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
    // 0x3aa4c4: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x3aa4c4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3aa4c8: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x3aa4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
    // 0x3aa4cc: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x3aa4ccu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3aa4d0: 0x26319bc0  addiu       $s1, $s1, -0x6440
    ctx->pc = 0x3aa4d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941632));
    // 0x3aa4d4: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x3aa4d4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3aa4d8: 0x26102100  addiu       $s0, $s0, 0x2100
    ctx->pc = 0x3aa4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
    // 0x3aa4dc: 0x46800660  cvt.s.w     $f25, $f0
    ctx->pc = 0x3aa4dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x3aa4e0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3aa4e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3aa4e4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3aa4e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3aa4e8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3aa4e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3aa4ec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3aa4ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3aa4f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3aa4f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3aa4f4: 0x90820028  lbu         $v0, 0x28($a0)
    ctx->pc = 0x3aa4f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3aa4f8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3aa4f8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa4fc: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x3aa4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3aa500: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3aa500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3aa504: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3aa504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3aa508: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x3aa508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3aa50c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3aa50cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3aa510: 0xc41023  subu        $v0, $a2, $a0
    ctx->pc = 0x3aa510u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3aa514: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3aa514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa518: 0x0  nop
    ctx->pc = 0x3aa518u;
    // NOP
    // 0x3aa51c: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x3aa51cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x3aa520: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x3aa520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3aa524: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3aa524u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa528: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x3aa528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3aa52c: 0x46011e01  sub.s       $f24, $f3, $f1
    ctx->pc = 0x3aa52cu;
    ctx->f[24] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3aa530: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3aa530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3aa534: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3aa534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa538: 0x0  nop
    ctx->pc = 0x3aa538u;
    // NOP
    // 0x3aa53c: 0x46190018  adda.s      $f0, $f25
    ctx->pc = 0x3aa53cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
    // 0x3aa540: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x3aa540u;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x3aa544: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA544u;
    {
        const bool branch_taken_0x3aa544 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3AA548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA544u;
            // 0x3aa548: 0x460115dc  madd.s      $f23, $f2, $f1 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa544) {
            ctx->pc = 0x3AA558u;
            goto label_3aa558;
        }
    }
    ctx->pc = 0x3AA54Cu;
    // 0x3aa54c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3aa54cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa550: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AA550u;
    {
        const bool branch_taken_0x3aa550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA550u;
            // 0x3aa554: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa550) {
            ctx->pc = 0x3AA574u;
            goto label_3aa574;
        }
    }
    ctx->pc = 0x3AA558u;
label_3aa558:
    // 0x3aa558: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3aa558u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3aa55c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3aa55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3aa560: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3aa560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3aa564: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aa564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa568: 0x0  nop
    ctx->pc = 0x3aa568u;
    // NOP
    // 0x3aa56c: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x3aa56cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x3aa570: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x3aa570u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_3aa574:
    // 0x3aa574: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3aa574u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3aa578: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA578u;
    {
        const bool branch_taken_0x3aa578 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3aa578) {
            ctx->pc = 0x3AA57Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA578u;
            // 0x3aa57c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AA58Cu;
            goto label_3aa58c;
        }
    }
    ctx->pc = 0x3AA580u;
    // 0x3aa580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3aa580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa584: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AA584u;
    {
        const bool branch_taken_0x3aa584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA584u;
            // 0x3aa588: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa584) {
            ctx->pc = 0x3AA5A4u;
            goto label_3aa5a4;
        }
    }
    ctx->pc = 0x3AA58Cu;
label_3aa58c:
    // 0x3aa58c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3aa58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3aa590: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3aa590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3aa594: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aa594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa598: 0x0  nop
    ctx->pc = 0x3aa598u;
    // NOP
    // 0x3aa59c: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x3aa59cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x3aa5a0: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x3aa5a0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_3aa5a4:
    // 0x3aa5a4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3aa5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3aa5a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3aa5a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa5ac: 0x0  nop
    ctx->pc = 0x3aa5acu;
    // NOP
    // 0x3aa5b0: 0x4600d036  c.le.s      $f26, $f0
    ctx->pc = 0x3aa5b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3aa5b4: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x3AA5B4u;
    {
        const bool branch_taken_0x3aa5b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AA5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA5B4u;
            // 0x3aa5b8: 0x90560116  lbu         $s6, 0x116($v0) (Delay Slot)
        SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa5b4) {
            ctx->pc = 0x3AA67Cu;
            goto label_3aa67c;
        }
    }
    ctx->pc = 0x3AA5BCu;
    // 0x3aa5bc: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x3aa5bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3aa5c0: 0x46170018  adda.s      $f0, $f23
    ctx->pc = 0x3aa5c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x3aa5c4: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x3aa5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x3aa5c8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3aa5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3aa5cc: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x3aa5ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3aa5d0: 0x92a5002b  lbu         $a1, 0x2B($s5)
    ctx->pc = 0x3aa5d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 43)));
    // 0x3aa5d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3aa5d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa5d8: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3aa5d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3aa5dc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3aa5dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3aa5e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3aa5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aa5e4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3aa5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3aa5e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3aa5e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa5ec: 0x2229021  addu        $s2, $s1, $v0
    ctx->pc = 0x3aa5ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3aa5f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3aa5f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa5f4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3aa5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3aa5f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3aa5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa5fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aa5fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa600: 0x0  nop
    ctx->pc = 0x3aa600u;
    // NOP
    // 0x3aa604: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3aa604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3aa608: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3aa608u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa60c: 0x0  nop
    ctx->pc = 0x3aa60cu;
    // NOP
    // 0x3aa610: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3aa610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3aa614: 0x4600d6dc  madd.s      $f27, $f26, $f0
    ctx->pc = 0x3aa614u;
    ctx->f[27] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[26], ctx->f[0]));
    // 0x3aa618: 0x4614b3c0  add.s       $f15, $f22, $f20
    ctx->pc = 0x3aa618u;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x3aa61c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3aa61cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3aa620: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3aa620u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x3aa624: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3aa624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3aa628: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AA628u;
    SET_GPR_U32(ctx, 31, 0x3AA630u);
    ctx->pc = 0x3AA62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA628u;
            // 0x3aa62c: 0x4600db86  mov.s       $f14, $f27 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[27]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA630u; }
        if (ctx->pc != 0x3AA630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA630u; }
        if (ctx->pc != 0x3AA630u) { return; }
    }
    ctx->pc = 0x3AA630u;
label_3aa630:
    // 0x3aa630: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3aa630u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3aa634: 0x4615b3c0  add.s       $f15, $f22, $f21
    ctx->pc = 0x3aa634u;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x3aa638: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3aa638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3aa63c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3aa63cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3aa640: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3aa640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa644: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3aa644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa648: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3aa648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aa64c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3aa64cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa650: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3aa650u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa654: 0x0  nop
    ctx->pc = 0x3aa654u;
    // NOP
    // 0x3aa658: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3aa658u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3aa65c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aa65cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa660: 0x0  nop
    ctx->pc = 0x3aa660u;
    // NOP
    // 0x3aa664: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3aa664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3aa668: 0x46147b41  sub.s       $f13, $f15, $f20
    ctx->pc = 0x3aa668u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[20]);
    // 0x3aa66c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3aa66cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3aa670: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3aa670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3aa674: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AA674u;
    SET_GPR_U32(ctx, 31, 0x3AA67Cu);
    ctx->pc = 0x3AA678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA674u;
            // 0x3aa678: 0x4600db86  mov.s       $f14, $f27 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[27]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA67Cu; }
        if (ctx->pc != 0x3AA67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA67Cu; }
        if (ctx->pc != 0x3AA67Cu) { return; }
    }
    ctx->pc = 0x3AA67Cu;
label_3aa67c:
    // 0x3aa67c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x3aa67cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3aa680: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x3aa680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x3aa684: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3aa684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3aa688: 0x92a40028  lbu         $a0, 0x28($s5)
    ctx->pc = 0x3aa688u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x3aa68c: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x3aa68cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3aa690: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3aa690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa694: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3aa694u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa698: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3aa698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3aa69c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3aa69cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3aa6a0: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3aa6a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3aa6a4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3aa6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3aa6a8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3aa6a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa6ac: 0x2249021  addu        $s2, $s1, $a0
    ctx->pc = 0x3aa6acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x3aa6b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3aa6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aa6b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3aa6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa6b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aa6b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa6bc: 0x0  nop
    ctx->pc = 0x3aa6bcu;
    // NOP
    // 0x3aa6c0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3aa6c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3aa6c4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3aa6c4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa6c8: 0x0  nop
    ctx->pc = 0x3aa6c8u;
    // NOP
    // 0x3aa6cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3aa6ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3aa6d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3aa6d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa6d4: 0x0  nop
    ctx->pc = 0x3aa6d4u;
    // NOP
    // 0x3aa6d8: 0x46190018  adda.s      $f0, $f25
    ctx->pc = 0x3aa6d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
    // 0x3aa6dc: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x3aa6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aa6e0: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x3aa6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3aa6e4: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3aa6e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x3aa6e8: 0x4600c3c0  add.s       $f15, $f24, $f0
    ctx->pc = 0x3aa6e8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x3aa6ec: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3aa6ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x3aa6f0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3aa6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3aa6f4: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AA6F4u;
    SET_GPR_U32(ctx, 31, 0x3AA6FCu);
    ctx->pc = 0x3AA6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA6F4u;
            // 0x3aa6f8: 0x4601139c  madd.s      $f14, $f2, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA6FCu; }
        if (ctx->pc != 0x3AA6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA6FCu; }
        if (ctx->pc != 0x3AA6FCu) { return; }
    }
    ctx->pc = 0x3AA6FCu;
label_3aa6fc:
    // 0x3aa6fc: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3aa6fcu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa700: 0x92a2002e  lbu         $v0, 0x2E($s5)
    ctx->pc = 0x3aa700u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 46)));
    // 0x3aa704: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3aa704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3aa708: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3aa708u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3aa70c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3aa70cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3aa710: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3aa710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa714: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3aa714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3aa718: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3aa718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aa71c: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x3aa71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3aa720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3aa720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa724: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3aa724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3aa728: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3aa728u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa72c: 0x0  nop
    ctx->pc = 0x3aa72cu;
    // NOP
    // 0x3aa730: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3aa730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x3aa734: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aa734u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa738: 0x0  nop
    ctx->pc = 0x3aa738u;
    // NOP
    // 0x3aa73c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3aa73cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x3aa740: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3aa740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aa744: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x3aa744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3aa748: 0x46190018  adda.s      $f0, $f25
    ctx->pc = 0x3aa748u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
    // 0x3aa74c: 0x4615b3c0  add.s       $f15, $f22, $f21
    ctx->pc = 0x3aa74cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x3aa750: 0x4601101e  madda.s     $f2, $f1
    ctx->pc = 0x3aa750u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x3aa754: 0x4601d31c  madd.s      $f12, $f26, $f1
    ctx->pc = 0x3aa754u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[26], ctx->f[1]));
    // 0x3aa758: 0x460c0018  adda.s      $f0, $f12
    ctx->pc = 0x3aa758u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x3aa75c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3aa75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aa760: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3aa760u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x3aa764: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3aa764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3aa768: 0xc0bc284  jal         func_2F0A10
    ctx->pc = 0x3AA768u;
    SET_GPR_U32(ctx, 31, 0x3AA770u);
    ctx->pc = 0x3AA76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA768u;
            // 0x3aa76c: 0x4601039c  madd.s      $f14, $f0, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA770u; }
        if (ctx->pc != 0x3AA770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AA770u; }
        if (ctx->pc != 0x3AA770u) { return; }
    }
    ctx->pc = 0x3AA770u;
label_3aa770:
    // 0x3aa770: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3aa770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3aa774: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x3aa774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x3aa778: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3aa778u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3aa77c: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x3aa77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x3aa780: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3aa780u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3aa784: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x3aa784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3aa788: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3aa788u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3aa78c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3aa78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3aa790: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3aa790u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3aa794: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3aa794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3aa798: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3aa798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3aa79c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3aa79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3aa7a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3aa7a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3aa7a4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3aa7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3aa7a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3aa7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aa7ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3aa7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3aa7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3AA7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AA7B0u;
            // 0x3aa7b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AA7B8u;
    // 0x3aa7b8: 0x0  nop
    ctx->pc = 0x3aa7b8u;
    // NOP
    // 0x3aa7bc: 0x0  nop
    ctx->pc = 0x3aa7bcu;
    // NOP
}
