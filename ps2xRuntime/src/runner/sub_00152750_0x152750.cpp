#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00152750
// Address: 0x152750 - 0x152ef0
void sub_00152750_0x152750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152750_0x152750");
#endif

    switch (ctx->pc) {
        case 0x1527b4u: goto label_1527b4;
        case 0x152800u: goto label_152800;
        case 0x1528bcu: goto label_1528bc;
        case 0x152908u: goto label_152908;
        case 0x15295cu: goto label_15295c;
        case 0x152984u: goto label_152984;
        case 0x1529bcu: goto label_1529bc;
        case 0x152a0cu: goto label_152a0c;
        case 0x152a38u: goto label_152a38;
        case 0x152a60u: goto label_152a60;
        case 0x152a88u: goto label_152a88;
        case 0x152ab0u: goto label_152ab0;
        case 0x152e40u: goto label_152e40;
        default: break;
    }

    ctx->pc = 0x152750u;

    // 0x152750: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x152750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x152754: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x152754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x152758: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x152758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x15275c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x15275cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x152760: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x152760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x152764: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x152764u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152768: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x152768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x15276c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x15276cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x152770: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x152770u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152774: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x152774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x152778: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x152778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15277c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15277cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x152780: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x152780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x152784: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x152784u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x152788: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x152788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x15278c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x15278cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x152790: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x152790u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x152794: 0x8cb00014  lw          $s0, 0x14($a1)
    ctx->pc = 0x152794u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x152798: 0x8c910014  lw          $s1, 0x14($a0)
    ctx->pc = 0x152798u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x15279c: 0xafa400d4  sw          $a0, 0xD4($sp)
    ctx->pc = 0x15279cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 4));
    // 0x1527a0: 0x186001c3  blez        $v1, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x1527A0u;
    {
        const bool branch_taken_0x1527a0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1527A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1527A0u;
            // 0x1527a4: 0xafa000cc  sw          $zero, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527a0) {
            ctx->pc = 0x152EB0u;
            goto label_152eb0;
        }
    }
    ctx->pc = 0x1527A8u;
    // 0x1527a8: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1527a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1527ac: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1527acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1527b0: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1527b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_1527b4:
    // 0x1527b4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1527b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1527b8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1527B8u;
    {
        const bool branch_taken_0x1527b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1527b8) {
            ctx->pc = 0x1527D8u;
            goto label_1527d8;
        }
    }
    ctx->pc = 0x1527C0u;
    // 0x1527c0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1527c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1527c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1527c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1527c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1527c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1527cc: 0x108301ac  beq         $a0, $v1, . + 4 + (0x1AC << 2)
    ctx->pc = 0x1527CCu;
    {
        const bool branch_taken_0x1527cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1527cc) {
            ctx->pc = 0x152E80u;
            goto label_152e80;
        }
    }
    ctx->pc = 0x1527D4u;
    // 0x1527d4: 0x0  nop
    ctx->pc = 0x1527d4u;
    // NOP
label_1527d8:
    // 0x1527d8: 0x8fb400cc  lw          $s4, 0xCC($sp)
    ctx->pc = 0x1527d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1527dc: 0x8ee4000c  lw          $a0, 0xC($s7)
    ctx->pc = 0x1527dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x1527e0: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x1527e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1527e4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1527e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1527e8: 0x102001a5  beqz        $at, . + 4 + (0x1A5 << 2)
    ctx->pc = 0x1527E8u;
    {
        const bool branch_taken_0x1527e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1527e8) {
            ctx->pc = 0x152E80u;
            goto label_152e80;
        }
    }
    ctx->pc = 0x1527F0u;
    // 0x1527f0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1527f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1527f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1527f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1527f8: 0x3f0c0  sll         $fp, $v1, 3
    ctx->pc = 0x1527f8u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1527fc: 0x0  nop
    ctx->pc = 0x1527fcu;
    // NOP
label_152800:
    // 0x152800: 0x8ee30010  lw          $v1, 0x10($s7)
    ctx->pc = 0x152800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x152804: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x152804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x152808: 0x7e9821  addu        $s3, $v1, $fp
    ctx->pc = 0x152808u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x15280c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x15280cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x152810: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x152810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x152814: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x152814u;
    {
        const bool branch_taken_0x152814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152814) {
            ctx->pc = 0x152840u;
            goto label_152840;
        }
    }
    ctx->pc = 0x15281Cu;
    // 0x15281c: 0x86640008  lh          $a0, 0x8($s3)
    ctx->pc = 0x15281cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x152820: 0x2a4082a  slt         $at, $s5, $a0
    ctx->pc = 0x152820u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x152824: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x152824u;
    {
        const bool branch_taken_0x152824 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x152824) {
            ctx->pc = 0x152838u;
            goto label_152838;
        }
    }
    ctx->pc = 0x15282Cu;
    // 0x15282c: 0x10000194  b           . + 4 + (0x194 << 2)
    ctx->pc = 0x15282Cu;
    {
        const bool branch_taken_0x15282c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15282Cu;
            // 0x152830: 0xafb400cc  sw          $s4, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15282c) {
            ctx->pc = 0x152E80u;
            goto label_152e80;
        }
    }
    ctx->pc = 0x152834u;
    // 0x152834: 0x0  nop
    ctx->pc = 0x152834u;
    // NOP
label_152838:
    // 0x152838: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x152838u;
    {
        const bool branch_taken_0x152838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152838) {
            ctx->pc = 0x152858u;
            goto label_152858;
        }
    }
    ctx->pc = 0x152840u;
label_152840:
    // 0x152840: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x152840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x152844: 0x2a4082a  slt         $at, $s5, $a0
    ctx->pc = 0x152844u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x152848: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x152848u;
    {
        const bool branch_taken_0x152848 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x152848) {
            ctx->pc = 0x152858u;
            goto label_152858;
        }
    }
    ctx->pc = 0x152850u;
    // 0x152850: 0x1000018b  b           . + 4 + (0x18B << 2)
    ctx->pc = 0x152850u;
    {
        const bool branch_taken_0x152850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152850u;
            // 0x152854: 0xafb400cc  sw          $s4, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152850) {
            ctx->pc = 0x152E80u;
            goto label_152e80;
        }
    }
    ctx->pc = 0x152858u;
label_152858:
    // 0x152858: 0x16a40183  bne         $s5, $a0, . + 4 + (0x183 << 2)
    ctx->pc = 0x152858u;
    {
        const bool branch_taken_0x152858 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        if (branch_taken_0x152858) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152860u;
    // 0x152860: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x152860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152864: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x152864u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152868: 0x4500017f  bc1f        . + 4 + (0x17F << 2)
    ctx->pc = 0x152868u;
    {
        const bool branch_taken_0x152868 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x152868) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152870u;
    // 0x152870: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x152870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x152874: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x152874u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x152878: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x152878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x15287c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15287Cu;
    {
        const bool branch_taken_0x15287c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x152880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15287Cu;
            // 0x152880: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15287c) {
            ctx->pc = 0x152898u;
            goto label_152898;
        }
    }
    ctx->pc = 0x152884u;
    // 0x152884: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x152884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152888: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x152888u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15288c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15288Cu;
    {
        const bool branch_taken_0x15288c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15288c) {
            ctx->pc = 0x152898u;
            goto label_152898;
        }
    }
    ctx->pc = 0x152894u;
    // 0x152894: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x152894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_152898:
    // 0x152898: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x152898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15289c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x15289cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1528a0: 0x45000085  bc1f        . + 4 + (0x85 << 2)
    ctx->pc = 0x1528A0u;
    {
        const bool branch_taken_0x1528a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1528a0) {
            ctx->pc = 0x152AB8u;
            goto label_152ab8;
        }
    }
    ctx->pc = 0x1528A8u;
    // 0x1528a8: 0xc66c0014  lwc1        $f12, 0x14($s3)
    ctx->pc = 0x1528a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1528ac: 0x27a400dc  addiu       $a0, $sp, 0xDC
    ctx->pc = 0x1528acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x1528b0: 0xc66d0018  lwc1        $f13, 0x18($s3)
    ctx->pc = 0x1528b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1528b4: 0xc04d03c  jal         func_1340F0
    ctx->pc = 0x1528B4u;
    SET_GPR_U32(ctx, 31, 0x1528BCu);
    ctx->pc = 0x1528B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1528B4u;
            // 0x1528b8: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1340F0u;
    if (runtime->hasFunction(0x1340F0u)) {
        auto targetFn = runtime->lookupFunction(0x1340F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1528BCu; }
        if (ctx->pc != 0x1528BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001340F0_0x1340f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1528BCu; }
        if (ctx->pc != 0x1528BCu) { return; }
    }
    ctx->pc = 0x1528BCu;
label_1528bc:
    // 0x1528bc: 0x1040016a  beqz        $v0, . + 4 + (0x16A << 2)
    ctx->pc = 0x1528BCu;
    {
        const bool branch_taken_0x1528bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1528bc) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x1528C4u;
    // 0x1528c4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1528c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1528c8: 0x30640100  andi        $a0, $v1, 0x100
    ctx->pc = 0x1528c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1528cc: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1528CCu;
    {
        const bool branch_taken_0x1528cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1528cc) {
            ctx->pc = 0x152940u;
            goto label_152940;
        }
    }
    ctx->pc = 0x1528D4u;
    // 0x1528d4: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1528d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1528d8: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x1528d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1528dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1528dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1528e0: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x1528e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1528e4: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x1528e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1528e8: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x1528e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x1528ec: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1528ECu;
    {
        const bool branch_taken_0x1528ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1528F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1528ECu;
            // 0x1528f0: 0xc7ac00dc  lwc1        $f12, 0xDC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528ec) {
            ctx->pc = 0x152900u;
            goto label_152900;
        }
    }
    ctx->pc = 0x1528F4u;
    // 0x1528f4: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x1528F4u;
    {
        const bool branch_taken_0x1528f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1528f4) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x1528FCu;
    // 0x1528fc: 0x0  nop
    ctx->pc = 0x1528fcu;
    // NOP
label_152900:
    // 0x152900: 0xc04e12c  jal         func_1384B0
    ctx->pc = 0x152900u;
    SET_GPR_U32(ctx, 31, 0x152908u);
    ctx->pc = 0x152904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152900u;
            // 0x152904: 0x27a600d8  addiu       $a2, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1384B0u;
    if (runtime->hasFunction(0x1384B0u)) {
        auto targetFn = runtime->lookupFunction(0x1384B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152908u; }
        if (ctx->pc != 0x152908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001384B0_0x1384b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152908u; }
        if (ctx->pc != 0x152908u) { return; }
    }
    ctx->pc = 0x152908u;
label_152908:
    // 0x152908: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x152908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x15290c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15290Cu;
    {
        const bool branch_taken_0x15290c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15290c) {
            ctx->pc = 0x152928u;
            goto label_152928;
        }
    }
    ctx->pc = 0x152914u;
    // 0x152914: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x152914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x152918: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x152918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x15291c: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x15291Cu;
    {
        const bool branch_taken_0x15291c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15291Cu;
            // 0x152920: 0xae430040  sw          $v1, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15291c) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152924u;
    // 0x152924: 0x0  nop
    ctx->pc = 0x152924u;
    // NOP
label_152928:
    // 0x152928: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x152928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x15292c: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x15292cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x152930: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x152930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x152934: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x152934u;
    {
        const bool branch_taken_0x152934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152934u;
            // 0x152938: 0xae430040  sw          $v1, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152934) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x15293Cu;
    // 0x15293c: 0x0  nop
    ctx->pc = 0x15293cu;
    // NOP
label_152940:
    // 0x152940: 0x30640e00  andi        $a0, $v1, 0xE00
    ctx->pc = 0x152940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3584);
    // 0x152944: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x152944u;
    {
        const bool branch_taken_0x152944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152944) {
            ctx->pc = 0x152968u;
            goto label_152968;
        }
    }
    ctx->pc = 0x15294Cu;
    // 0x15294c: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x15294cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152950: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152954: 0xc05466c  jal         func_1519B0
    ctx->pc = 0x152954u;
    SET_GPR_U32(ctx, 31, 0x15295Cu);
    ctx->pc = 0x152958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152954u;
            // 0x152958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1519B0u;
    if (runtime->hasFunction(0x1519B0u)) {
        auto targetFn = runtime->lookupFunction(0x1519B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15295Cu; }
        if (ctx->pc != 0x15295Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001519B0_0x1519b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15295Cu; }
        if (ctx->pc != 0x15295Cu) { return; }
    }
    ctx->pc = 0x15295Cu;
label_15295c:
    // 0x15295c: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x15295Cu;
    {
        const bool branch_taken_0x15295c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15295c) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152964u;
    // 0x152964: 0x0  nop
    ctx->pc = 0x152964u;
    // NOP
label_152968:
    // 0x152968: 0x30641000  andi        $a0, $v1, 0x1000
    ctx->pc = 0x152968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x15296c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15296Cu;
    {
        const bool branch_taken_0x15296c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15296c) {
            ctx->pc = 0x152990u;
            goto label_152990;
        }
    }
    ctx->pc = 0x152974u;
    // 0x152974: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x152974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152978: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15297c: 0xc054734  jal         func_151CD0
    ctx->pc = 0x15297Cu;
    SET_GPR_U32(ctx, 31, 0x152984u);
    ctx->pc = 0x152980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15297Cu;
            // 0x152980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151CD0u;
    if (runtime->hasFunction(0x151CD0u)) {
        auto targetFn = runtime->lookupFunction(0x151CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152984u; }
        if (ctx->pc != 0x152984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151CD0_0x151cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152984u; }
        if (ctx->pc != 0x152984u) { return; }
    }
    ctx->pc = 0x152984u;
label_152984:
    // 0x152984: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x152984u;
    {
        const bool branch_taken_0x152984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152984) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x15298Cu;
    // 0x15298c: 0x0  nop
    ctx->pc = 0x15298cu;
    // NOP
label_152990:
    // 0x152990: 0x3064e000  andi        $a0, $v1, 0xE000
    ctx->pc = 0x152990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57344);
    // 0x152994: 0x14800134  bnez        $a0, . + 4 + (0x134 << 2)
    ctx->pc = 0x152994u;
    {
        const bool branch_taken_0x152994 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x152994) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x15299Cu;
    // 0x15299c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x15299cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1529a0: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x1529a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1529a4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1529A4u;
    {
        const bool branch_taken_0x1529a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1529a4) {
            ctx->pc = 0x1529C8u;
            goto label_1529c8;
        }
    }
    ctx->pc = 0x1529ACu;
    // 0x1529ac: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x1529acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1529b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1529b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1529b4: 0xc05477c  jal         func_151DF0
    ctx->pc = 0x1529B4u;
    SET_GPR_U32(ctx, 31, 0x1529BCu);
    ctx->pc = 0x1529B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1529B4u;
            // 0x1529b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151DF0u;
    if (runtime->hasFunction(0x151DF0u)) {
        auto targetFn = runtime->lookupFunction(0x151DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1529BCu; }
        if (ctx->pc != 0x1529BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151DF0_0x151df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1529BCu; }
        if (ctx->pc != 0x1529BCu) { return; }
    }
    ctx->pc = 0x1529BCu;
label_1529bc:
    // 0x1529bc: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x1529BCu;
    {
        const bool branch_taken_0x1529bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1529bc) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x1529C4u;
    // 0x1529c4: 0x0  nop
    ctx->pc = 0x1529c4u;
    // NOP
label_1529c8:
    // 0x1529c8: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x1529c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x1529cc: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x1529ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1529d0: 0x14800125  bnez        $a0, . + 4 + (0x125 << 2)
    ctx->pc = 0x1529D0u;
    {
        const bool branch_taken_0x1529d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1529d0) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x1529D8u;
    // 0x1529d8: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x1529d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x1529dc: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x1529dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1529e0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1529E0u;
    {
        const bool branch_taken_0x1529e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1529e0) {
            ctx->pc = 0x152A18u;
            goto label_152a18;
        }
    }
    ctx->pc = 0x1529E8u;
    // 0x1529e8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1529e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1529ec: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x1529ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1529f0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1529f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1529f4: 0x1460011c  bnez        $v1, . + 4 + (0x11C << 2)
    ctx->pc = 0x1529F4u;
    {
        const bool branch_taken_0x1529f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1529f4) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x1529FCu;
    // 0x1529fc: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x1529fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152a00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a04: 0xc0547b4  jal         func_151ED0
    ctx->pc = 0x152A04u;
    SET_GPR_U32(ctx, 31, 0x152A0Cu);
    ctx->pc = 0x152A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152A04u;
            // 0x152a08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151ED0u;
    if (runtime->hasFunction(0x151ED0u)) {
        auto targetFn = runtime->lookupFunction(0x151ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152A0Cu; }
        if (ctx->pc != 0x152A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151ED0_0x151ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152A0Cu; }
        if (ctx->pc != 0x152A0Cu) { return; }
    }
    ctx->pc = 0x152A0Cu;
label_152a0c:
    // 0x152a0c: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x152A0Cu;
    {
        const bool branch_taken_0x152a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a0c) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152A14u;
    // 0x152a14: 0x0  nop
    ctx->pc = 0x152a14u;
    // NOP
label_152a18:
    // 0x152a18: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x152a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x152a1c: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x152a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x152a20: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x152A20u;
    {
        const bool branch_taken_0x152a20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a20) {
            ctx->pc = 0x152A40u;
            goto label_152a40;
        }
    }
    ctx->pc = 0x152A28u;
    // 0x152a28: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x152a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152a2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a30: 0xc05485c  jal         func_152170
    ctx->pc = 0x152A30u;
    SET_GPR_U32(ctx, 31, 0x152A38u);
    ctx->pc = 0x152A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152A30u;
            // 0x152a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152170u;
    if (runtime->hasFunction(0x152170u)) {
        auto targetFn = runtime->lookupFunction(0x152170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152A38u; }
        if (ctx->pc != 0x152A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152170_0x152170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152A38u; }
        if (ctx->pc != 0x152A38u) { return; }
    }
    ctx->pc = 0x152A38u;
label_152a38:
    // 0x152a38: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x152A38u;
    {
        const bool branch_taken_0x152a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a38) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152A40u;
label_152a40:
    // 0x152a40: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x152a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x152a44: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x152a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x152a48: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x152A48u;
    {
        const bool branch_taken_0x152a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a48) {
            ctx->pc = 0x152A68u;
            goto label_152a68;
        }
    }
    ctx->pc = 0x152A50u;
    // 0x152a50: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x152a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152a54: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a58: 0xc05488c  jal         func_152230
    ctx->pc = 0x152A58u;
    SET_GPR_U32(ctx, 31, 0x152A60u);
    ctx->pc = 0x152A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152A58u;
            // 0x152a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152230u;
    if (runtime->hasFunction(0x152230u)) {
        auto targetFn = runtime->lookupFunction(0x152230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152A60u; }
        if (ctx->pc != 0x152A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152230_0x152230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152A60u; }
        if (ctx->pc != 0x152A60u) { return; }
    }
    ctx->pc = 0x152A60u;
label_152a60:
    // 0x152a60: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x152A60u;
    {
        const bool branch_taken_0x152a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a60) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152A68u;
label_152a68:
    // 0x152a68: 0x3c040180  lui         $a0, 0x180
    ctx->pc = 0x152a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)384 << 16));
    // 0x152a6c: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x152a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x152a70: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x152A70u;
    {
        const bool branch_taken_0x152a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a70) {
            ctx->pc = 0x152A90u;
            goto label_152a90;
        }
    }
    ctx->pc = 0x152A78u;
    // 0x152a78: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x152a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152a7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a80: 0xc0548e0  jal         func_152380
    ctx->pc = 0x152A80u;
    SET_GPR_U32(ctx, 31, 0x152A88u);
    ctx->pc = 0x152A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152A80u;
            // 0x152a84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152380u;
    if (runtime->hasFunction(0x152380u)) {
        auto targetFn = runtime->lookupFunction(0x152380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152A88u; }
        if (ctx->pc != 0x152A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152380_0x152380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152A88u; }
        if (ctx->pc != 0x152A88u) { return; }
    }
    ctx->pc = 0x152A88u;
label_152a88:
    // 0x152a88: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x152A88u;
    {
        const bool branch_taken_0x152a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a88) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152A90u;
label_152a90:
    // 0x152a90: 0x3c04000c  lui         $a0, 0xC
    ctx->pc = 0x152a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12 << 16));
    // 0x152a94: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x152a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x152a98: 0x106000f3  beqz        $v1, . + 4 + (0xF3 << 2)
    ctx->pc = 0x152A98u;
    {
        const bool branch_taken_0x152a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a98) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152AA0u;
    // 0x152aa0: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x152aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152aa4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152aa8: 0xc054984  jal         func_152610
    ctx->pc = 0x152AA8u;
    SET_GPR_U32(ctx, 31, 0x152AB0u);
    ctx->pc = 0x152AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152AA8u;
            // 0x152aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152610u;
    if (runtime->hasFunction(0x152610u)) {
        auto targetFn = runtime->lookupFunction(0x152610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152AB0u; }
        if (ctx->pc != 0x152AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152610_0x152610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152AB0u; }
        if (ctx->pc != 0x152AB0u) { return; }
    }
    ctx->pc = 0x152AB0u;
label_152ab0:
    // 0x152ab0: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x152AB0u;
    {
        const bool branch_taken_0x152ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152ab0) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152AB8u;
label_152ab8:
    // 0x152ab8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x152ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x152abc: 0xa62024  and         $a0, $a1, $a2
    ctx->pc = 0x152abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x152ac0: 0x108000e9  beqz        $a0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x152AC0u;
    {
        const bool branch_taken_0x152ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152ac0) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152AC8u;
    // 0x152ac8: 0x30640100  andi        $a0, $v1, 0x100
    ctx->pc = 0x152ac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x152acc: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x152ACCu;
    {
        const bool branch_taken_0x152acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152acc) {
            ctx->pc = 0x152B10u;
            goto label_152b10;
        }
    }
    ctx->pc = 0x152AD4u;
    // 0x152ad4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x152ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x152ad8: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x152ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x152adc: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x152adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x152ae0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x152AE0u;
    {
        const bool branch_taken_0x152ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152AE0u;
            // 0x152ae4: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ae0) {
            ctx->pc = 0x152AF8u;
            goto label_152af8;
        }
    }
    ctx->pc = 0x152AE8u;
    // 0x152ae8: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x152ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x152aec: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x152aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x152af0: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x152AF0u;
    {
        const bool branch_taken_0x152af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152AF0u;
            // 0x152af4: 0xaca30040  sw          $v1, 0x40($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152af0) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152AF8u;
label_152af8:
    // 0x152af8: 0x8ca40040  lw          $a0, 0x40($a1)
    ctx->pc = 0x152af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x152afc: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x152afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x152b00: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x152b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x152b04: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x152B04u;
    {
        const bool branch_taken_0x152b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152B04u;
            // 0x152b08: 0xaca30040  sw          $v1, 0x40($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b04) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152B0Cu;
    // 0x152b0c: 0x0  nop
    ctx->pc = 0x152b0cu;
    // NOP
label_152b10:
    // 0x152b10: 0x30640e00  andi        $a0, $v1, 0xE00
    ctx->pc = 0x152b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3584);
    // 0x152b14: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x152B14u;
    {
        const bool branch_taken_0x152b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152b14) {
            ctx->pc = 0x152BD8u;
            goto label_152bd8;
        }
    }
    ctx->pc = 0x152B1Cu;
    // 0x152b1c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x152b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x152b20: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x152b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x152b24: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x152b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x152b28: 0x8cc40040  lw          $a0, 0x40($a2)
    ctx->pc = 0x152b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x152b2c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x152b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x152b30: 0xacc30040  sw          $v1, 0x40($a2)
    ctx->pc = 0x152b30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 3));
    // 0x152b34: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x152b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x152b38: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x152B38u;
    {
        const bool branch_taken_0x152b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x152b38) {
            ctx->pc = 0x152B60u;
            goto label_152b60;
        }
    }
    ctx->pc = 0x152B40u;
    // 0x152b40: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x152b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152b44: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x152b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x152b48: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x152b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152b4c: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x152b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x152b50: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x152b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152b54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x152B54u;
    {
        const bool branch_taken_0x152b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152B54u;
            // 0x152b58: 0xe4c00018  swc1        $f0, 0x18($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b54) {
            ctx->pc = 0x152B78u;
            goto label_152b78;
        }
    }
    ctx->pc = 0x152B5Cu;
    // 0x152b5c: 0x0  nop
    ctx->pc = 0x152b5cu;
    // NOP
label_152b60:
    // 0x152b60: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x152b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152b64: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x152b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x152b68: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x152b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152b6c: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x152b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x152b70: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x152b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152b74: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x152b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_152b78:
    // 0x152b78: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x152b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x152b7c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x152b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x152b80: 0x148300b9  bne         $a0, $v1, . + 4 + (0xB9 << 2)
    ctx->pc = 0x152B80u;
    {
        const bool branch_taken_0x152b80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x152b80) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152B88u;
    // 0x152b88: 0x8cc300b0  lw          $v1, 0xB0($a2)
    ctx->pc = 0x152b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
    // 0x152b8c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x152b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x152b90: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x152B90u;
    {
        const bool branch_taken_0x152b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x152b90) {
            ctx->pc = 0x152BB8u;
            goto label_152bb8;
        }
    }
    ctx->pc = 0x152B98u;
    // 0x152b98: 0xc4a00080  lwc1        $f0, 0x80($a1)
    ctx->pc = 0x152b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152b9c: 0xe4c00080  swc1        $f0, 0x80($a2)
    ctx->pc = 0x152b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 128), bits); }
    // 0x152ba0: 0xc4a00084  lwc1        $f0, 0x84($a1)
    ctx->pc = 0x152ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152ba4: 0xe4c00084  swc1        $f0, 0x84($a2)
    ctx->pc = 0x152ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 132), bits); }
    // 0x152ba8: 0xc4a00088  lwc1        $f0, 0x88($a1)
    ctx->pc = 0x152ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152bac: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x152BACu;
    {
        const bool branch_taken_0x152bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152BACu;
            // 0x152bb0: 0xe4c00088  swc1        $f0, 0x88($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152bac) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152BB4u;
    // 0x152bb4: 0x0  nop
    ctx->pc = 0x152bb4u;
    // NOP
label_152bb8:
    // 0x152bb8: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x152bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152bbc: 0xe4c00070  swc1        $f0, 0x70($a2)
    ctx->pc = 0x152bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 112), bits); }
    // 0x152bc0: 0xc4a00074  lwc1        $f0, 0x74($a1)
    ctx->pc = 0x152bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152bc4: 0xe4c00074  swc1        $f0, 0x74($a2)
    ctx->pc = 0x152bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 116), bits); }
    // 0x152bc8: 0xc4a00078  lwc1        $f0, 0x78($a1)
    ctx->pc = 0x152bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152bcc: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x152BCCu;
    {
        const bool branch_taken_0x152bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152BCCu;
            // 0x152bd0: 0xe4c00078  swc1        $f0, 0x78($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152bcc) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152BD4u;
    // 0x152bd4: 0x0  nop
    ctx->pc = 0x152bd4u;
    // NOP
label_152bd8:
    // 0x152bd8: 0x30641000  andi        $a0, $v1, 0x1000
    ctx->pc = 0x152bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x152bdc: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x152BDCu;
    {
        const bool branch_taken_0x152bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152bdc) {
            ctx->pc = 0x152C40u;
            goto label_152c40;
        }
    }
    ctx->pc = 0x152BE4u;
    // 0x152be4: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x152be4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x152be8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x152be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x152bec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152becu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152bf0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x152bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x152bf4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x152bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x152bf8: 0x8cc30040  lw          $v1, 0x40($a2)
    ctx->pc = 0x152bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x152bfc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x152bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x152c00: 0xacc30040  sw          $v1, 0x40($a2)
    ctx->pc = 0x152c00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 3));
    // 0x152c04: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x152c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152c08: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x152c08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152c0c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x152C0Cu;
    {
        const bool branch_taken_0x152c0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x152C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152C0Cu;
            // 0x152c10: 0xe4c1001c  swc1        $f1, 0x1C($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c0c) {
            ctx->pc = 0x152C28u;
            goto label_152c28;
        }
    }
    ctx->pc = 0x152C14u;
    // 0x152c14: 0x8cc30044  lw          $v1, 0x44($a2)
    ctx->pc = 0x152c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x152c18: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x152c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x152c1c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x152C1Cu;
    {
        const bool branch_taken_0x152c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152C1Cu;
            // 0x152c20: 0xacc30044  sw          $v1, 0x44($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c1c) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152C24u;
    // 0x152c24: 0x0  nop
    ctx->pc = 0x152c24u;
    // NOP
label_152c28:
    // 0x152c28: 0x8cc40044  lw          $a0, 0x44($a2)
    ctx->pc = 0x152c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x152c2c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x152c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x152c30: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x152c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x152c34: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x152C34u;
    {
        const bool branch_taken_0x152c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152C34u;
            // 0x152c38: 0xacc30044  sw          $v1, 0x44($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c34) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152C3Cu;
    // 0x152c3c: 0x0  nop
    ctx->pc = 0x152c3cu;
    // NOP
label_152c40:
    // 0x152c40: 0x3064e000  andi        $a0, $v1, 0xE000
    ctx->pc = 0x152c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57344);
    // 0x152c44: 0x14800088  bnez        $a0, . + 4 + (0x88 << 2)
    ctx->pc = 0x152C44u;
    {
        const bool branch_taken_0x152c44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x152c44) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152C4Cu;
    // 0x152c4c: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x152c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x152c50: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x152C50u;
    {
        const bool branch_taken_0x152c50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152c50) {
            ctx->pc = 0x152C80u;
            goto label_152c80;
        }
    }
    ctx->pc = 0x152C58u;
    // 0x152c58: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x152c58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x152c5c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x152c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x152c60: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x152c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x152c64: 0x8cc40040  lw          $a0, 0x40($a2)
    ctx->pc = 0x152c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x152c68: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x152c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x152c6c: 0xacc30040  sw          $v1, 0x40($a2)
    ctx->pc = 0x152c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 3));
    // 0x152c70: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x152c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152c74: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x152C74u;
    {
        const bool branch_taken_0x152c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152C74u;
            // 0x152c78: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c74) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152C7Cu;
    // 0x152c7c: 0x0  nop
    ctx->pc = 0x152c7cu;
    // NOP
label_152c80:
    // 0x152c80: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x152c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x152c84: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x152c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x152c88: 0x14800077  bnez        $a0, . + 4 + (0x77 << 2)
    ctx->pc = 0x152C88u;
    {
        const bool branch_taken_0x152c88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x152c88) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152C90u;
    // 0x152c90: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x152c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x152c94: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x152c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x152c98: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x152C98u;
    {
        const bool branch_taken_0x152c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152c98) {
            ctx->pc = 0x152D08u;
            goto label_152d08;
        }
    }
    ctx->pc = 0x152CA0u;
    // 0x152ca0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x152ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x152ca4: 0x8cc40040  lw          $a0, 0x40($a2)
    ctx->pc = 0x152ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x152ca8: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x152ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x152cac: 0x1460006e  bnez        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x152CACu;
    {
        const bool branch_taken_0x152cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x152cac) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152CB4u;
    // 0x152cb4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x152cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x152cb8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x152cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x152cbc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x152cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x152cc0: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x152cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x152cc4: 0xacc40040  sw          $a0, 0x40($a2)
    ctx->pc = 0x152cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 4));
    // 0x152cc8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x152cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152ccc: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x152cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x152cd0: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x152cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152cd4: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x152cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x152cd8: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x152cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152cdc: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x152cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x152ce0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x152ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x152ce4: 0x14830060  bne         $a0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x152CE4u;
    {
        const bool branch_taken_0x152ce4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x152ce4) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152CECu;
    // 0x152cec: 0xc4a000f0  lwc1        $f0, 0xF0($a1)
    ctx->pc = 0x152cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152cf0: 0xe4c000f0  swc1        $f0, 0xF0($a2)
    ctx->pc = 0x152cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 240), bits); }
    // 0x152cf4: 0xc4a000f4  lwc1        $f0, 0xF4($a1)
    ctx->pc = 0x152cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152cf8: 0xe4c000f4  swc1        $f0, 0xF4($a2)
    ctx->pc = 0x152cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 244), bits); }
    // 0x152cfc: 0xc4a000f8  lwc1        $f0, 0xF8($a1)
    ctx->pc = 0x152cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152d00: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x152D00u;
    {
        const bool branch_taken_0x152d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152D00u;
            // 0x152d04: 0xe4c000f8  swc1        $f0, 0xF8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d00) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152D08u;
label_152d08:
    // 0x152d08: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x152d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x152d0c: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x152d0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x152d10: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x152D10u;
    {
        const bool branch_taken_0x152d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152d10) {
            ctx->pc = 0x152D98u;
            goto label_152d98;
        }
    }
    ctx->pc = 0x152D18u;
    // 0x152d18: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x152d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x152d1c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x152d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x152d20: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x152D20u;
    {
        const bool branch_taken_0x152d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x152d20) {
            ctx->pc = 0x152D60u;
            goto label_152d60;
        }
    }
    ctx->pc = 0x152D28u;
    // 0x152d28: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x152d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x152d2c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x152D2Cu;
    {
        const bool branch_taken_0x152d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x152d2c) {
            ctx->pc = 0x152D40u;
            goto label_152d40;
        }
    }
    ctx->pc = 0x152D34u;
    // 0x152d34: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x152D34u;
    {
        const bool branch_taken_0x152d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152d34) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152D3Cu;
    // 0x152d3c: 0x0  nop
    ctx->pc = 0x152d3cu;
    // NOP
label_152d40:
    // 0x152d40: 0x8663000a  lh          $v1, 0xA($s3)
    ctx->pc = 0x152d40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x152d44: 0x1c600048  bgtz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x152D44u;
    {
        const bool branch_taken_0x152d44 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x152d44) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152D4Cu;
    // 0x152d4c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x152d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x152d50: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x152d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x152d54: 0x94840056  lhu         $a0, 0x56($a0)
    ctx->pc = 0x152d54u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 86)));
    // 0x152d58: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x152D58u;
    {
        const bool branch_taken_0x152d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152D58u;
            // 0x152d5c: 0xa4640056  sh          $a0, 0x56($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 86), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d58) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152D60u;
label_152d60:
    // 0x152d60: 0x8665000a  lh          $a1, 0xA($s3)
    ctx->pc = 0x152d60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x152d64: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x152d64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x152d68: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x152D68u;
    {
        const bool branch_taken_0x152d68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x152d68) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152D70u;
    // 0x152d70: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x152d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x152d74: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x152d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x152d78: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x152d78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x152d7c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x152d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x152d80: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x152d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x152d84: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x152d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x152d88: 0x94840056  lhu         $a0, 0x56($a0)
    ctx->pc = 0x152d88u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 86)));
    // 0x152d8c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x152d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x152d90: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x152D90u;
    {
        const bool branch_taken_0x152d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152D90u;
            // 0x152d94: 0xa4640056  sh          $a0, 0x56($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 86), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d90) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152D98u;
label_152d98:
    // 0x152d98: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x152d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x152d9c: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x152d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x152da0: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x152DA0u;
    {
        const bool branch_taken_0x152da0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152da0) {
            ctx->pc = 0x152E20u;
            goto label_152e20;
        }
    }
    ctx->pc = 0x152DA8u;
    // 0x152da8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x152da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x152dac: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x152dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x152db0: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x152DB0u;
    {
        const bool branch_taken_0x152db0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x152db0) {
            ctx->pc = 0x152DD0u;
            goto label_152dd0;
        }
    }
    ctx->pc = 0x152DB8u;
    // 0x152db8: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x152db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x152dbc: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x152DBCu;
    {
        const bool branch_taken_0x152dbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x152dbc) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152DC4u;
    // 0x152dc4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x152DC4u;
    {
        const bool branch_taken_0x152dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152dc4) {
            ctx->pc = 0x152E08u;
            goto label_152e08;
        }
    }
    ctx->pc = 0x152DCCu;
    // 0x152dcc: 0x0  nop
    ctx->pc = 0x152dccu;
    // NOP
label_152dd0:
    // 0x152dd0: 0x8665000a  lh          $a1, 0xA($s3)
    ctx->pc = 0x152dd0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x152dd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152dd8: 0x14a30023  bne         $a1, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x152DD8u;
    {
        const bool branch_taken_0x152dd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x152dd8) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152DE0u;
    // 0x152de0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x152de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x152de4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x152de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x152de8: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x152de8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x152dec: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x152decu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x152df0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x152df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x152df4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x152df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x152df8: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x152df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152dfc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x152dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x152e00: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x152e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x152e04: 0x0  nop
    ctx->pc = 0x152e04u;
    // NOP
label_152e08:
    // 0x152e08: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x152e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x152e0c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x152e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x152e10: 0x8ca40040  lw          $a0, 0x40($a1)
    ctx->pc = 0x152e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x152e14: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x152e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x152e18: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x152E18u;
    {
        const bool branch_taken_0x152e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152E18u;
            // 0x152e1c: 0xaca30040  sw          $v1, 0x40($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e18) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152E20u;
label_152e20:
    // 0x152e20: 0x3c040180  lui         $a0, 0x180
    ctx->pc = 0x152e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)384 << 16));
    // 0x152e24: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x152e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x152e28: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x152E28u;
    {
        const bool branch_taken_0x152e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152e28) {
            ctx->pc = 0x152E48u;
            goto label_152e48;
        }
    }
    ctx->pc = 0x152E30u;
    // 0x152e30: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x152e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x152e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e38: 0xc054640  jal         func_151900
    ctx->pc = 0x152E38u;
    SET_GPR_U32(ctx, 31, 0x152E40u);
    ctx->pc = 0x152E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152E38u;
            // 0x152e3c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151900u;
    if (runtime->hasFunction(0x151900u)) {
        auto targetFn = runtime->lookupFunction(0x151900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152E40u; }
        if (ctx->pc != 0x152E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151900_0x151900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152E40u; }
        if (ctx->pc != 0x152E40u) { return; }
    }
    ctx->pc = 0x152E40u;
label_152e40:
    // 0x152e40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x152E40u;
    {
        const bool branch_taken_0x152e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152e40) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152E48u;
label_152e48:
    // 0x152e48: 0x3c04000c  lui         $a0, 0xC
    ctx->pc = 0x152e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12 << 16));
    // 0x152e4c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x152e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x152e50: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x152E50u;
    {
        const bool branch_taken_0x152e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x152e50) {
            ctx->pc = 0x152E68u;
            goto label_152e68;
        }
    }
    ctx->pc = 0x152E58u;
    // 0x152e58: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x152e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x152e5c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x152e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x152e60: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x152e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x152e64: 0xac64004c  sw          $a0, 0x4C($v1)
    ctx->pc = 0x152e64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 4));
label_152e68:
    // 0x152e68: 0x8ee3000c  lw          $v1, 0xC($s7)
    ctx->pc = 0x152e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x152e6c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x152e6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x152e70: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x152e70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x152e74: 0x1460fe62  bnez        $v1, . + 4 + (-0x19E << 2)
    ctx->pc = 0x152E74u;
    {
        const bool branch_taken_0x152e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152E74u;
            // 0x152e78: 0x27de0028  addiu       $fp, $fp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e74) {
            ctx->pc = 0x152800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_152800;
        }
    }
    ctx->pc = 0x152E7Cu;
    // 0x152e7c: 0x0  nop
    ctx->pc = 0x152e7cu;
    // NOP
label_152e80:
    // 0x152e80: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x152e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152e84: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x152e84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x152e88: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x152e88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x152e8c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x152e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x152e90: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x152e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x152e94: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x152e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x152e98: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x152e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x152e9c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x152e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x152ea0: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x152ea0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x152ea4: 0x1460fe43  bnez        $v1, . + 4 + (-0x1BD << 2)
    ctx->pc = 0x152EA4u;
    {
        const bool branch_taken_0x152ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152EA4u;
            // 0x152ea8: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ea4) {
            ctx->pc = 0x1527B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1527b4;
        }
    }
    ctx->pc = 0x152EACu;
    // 0x152eac: 0x0  nop
    ctx->pc = 0x152eacu;
    // NOP
label_152eb0:
    // 0x152eb0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x152eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152eb4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x152eb4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x152eb8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x152eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x152ebc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x152ebcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152ec0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x152ec0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x152ec4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x152ec4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x152ec8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x152ec8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x152ecc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x152eccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152ed0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x152ed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152ed4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x152ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152ed8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x152ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152edc: 0x3e00008  jr          $ra
    ctx->pc = 0x152EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152EDCu;
            // 0x152ee0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152EE4u;
    // 0x152ee4: 0x0  nop
    ctx->pc = 0x152ee4u;
    // NOP
    // 0x152ee8: 0x0  nop
    ctx->pc = 0x152ee8u;
    // NOP
    // 0x152eec: 0x0  nop
    ctx->pc = 0x152eecu;
    // NOP
}
