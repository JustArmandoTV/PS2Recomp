#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00340A00
// Address: 0x340a00 - 0x340c00
void sub_00340A00_0x340a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340A00_0x340a00");
#endif

    switch (ctx->pc) {
        case 0x340b54u: goto label_340b54;
        case 0x340b5cu: goto label_340b5c;
        case 0x340b7cu: goto label_340b7c;
        case 0x340b90u: goto label_340b90;
        case 0x340be4u: goto label_340be4;
        default: break;
    }

    ctx->pc = 0x340a00u;

    // 0x340a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x340a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x340a04: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x340a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x340a08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x340a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x340a0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x340a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x340a10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x340a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x340a14: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x340a14u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x340a18: 0x54c30073  bnel        $a2, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x340A18u;
    {
        const bool branch_taken_0x340a18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x340a18) {
            ctx->pc = 0x340A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x340A18u;
            // 0x340a1c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x340BE8u;
            goto label_340be8;
        }
    }
    ctx->pc = 0x340A20u;
    // 0x340a20: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x340a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x340a24: 0x24860838  addiu       $a2, $a0, 0x838
    ctx->pc = 0x340a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2104));
    // 0x340a28: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x340a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x340a2c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x340a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x340a30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x340a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x340a34: 0xc4810844  lwc1        $f1, 0x844($a0)
    ctx->pc = 0x340a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x340a38: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x340a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x340a3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x340a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340a40: 0x0  nop
    ctx->pc = 0x340a40u;
    // NOP
    // 0x340a44: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x340a44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340a48: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x340A48u;
    {
        const bool branch_taken_0x340a48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x340A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340A48u;
            // 0x340a4c: 0x380c0  sll         $s0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340a48) {
            ctx->pc = 0x340A60u;
            goto label_340a60;
        }
    }
    ctx->pc = 0x340A50u;
    // 0x340a50: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x340a50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x340a54: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x340a54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x340a58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x340A58u;
    {
        const bool branch_taken_0x340a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340A58u;
            // 0x340a5c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340a58) {
            ctx->pc = 0x340A7Cu;
            goto label_340a7c;
        }
    }
    ctx->pc = 0x340A60u;
label_340a60:
    // 0x340a60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x340a60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x340a64: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x340a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x340a68: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x340a68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x340a6c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x340a6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x340a70: 0x0  nop
    ctx->pc = 0x340a70u;
    // NOP
    // 0x340a74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x340a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x340a78: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x340a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_340a7c:
    // 0x340a7c: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x340a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x340a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x340a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x340a84: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x340a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x340a88: 0x24840  sll         $t1, $v0, 1
    ctx->pc = 0x340a88u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x340a8c: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x340a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
    // 0x340a90: 0x82940  sll         $a1, $t0, 5
    ctx->pc = 0x340a90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x340a94: 0x623818  mult        $a3, $v1, $v0
    ctx->pc = 0x340a94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x340a98: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x340a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x340a9c: 0xa81023  subu        $v0, $a1, $t0
    ctx->pc = 0x340a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x340aa0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x340aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x340aa4: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x340aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
    // 0x340aa8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x340aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x340aac: 0x34454dd3  ori         $a1, $v0, 0x4DD3
    ctx->pc = 0x340aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
    // 0x340ab0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x340ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x340ab4: 0x1224021  addu        $t0, $t1, $v0
    ctx->pc = 0x340ab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x340ab8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x340ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x340abc: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x340abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x340ac0: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x340ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x340ac4: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x340ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x340ac8: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x340ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x340acc: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x340accu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x340ad0: 0x3010  mfhi        $a2
    ctx->pc = 0x340ad0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x340ad4: 0xa70019  multu       $a1, $a3
    ctx->pc = 0x340ad4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x340ad8: 0x30c8ffff  andi        $t0, $a2, 0xFFFF
    ctx->pc = 0x340ad8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x340adc: 0x0  nop
    ctx->pc = 0x340adcu;
    // NOP
    // 0x340ae0: 0x2810  mfhi        $a1
    ctx->pc = 0x340ae0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x340ae4: 0x52982  srl         $a1, $a1, 6
    ctx->pc = 0x340ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x340ae8: 0x450019  multu       $v0, $a1
    ctx->pc = 0x340ae8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x340aec: 0x1010  mfhi        $v0
    ctx->pc = 0x340aecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x340af0: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x340af0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x340af4: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x340af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x340af8: 0x0  nop
    ctx->pc = 0x340af8u;
    // NOP
    // 0x340afc: 0x1010  mfhi        $v0
    ctx->pc = 0x340afcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x340b00: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x340b00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x340b04: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x340B04u;
    {
        const bool branch_taken_0x340b04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x340B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340B04u;
            // 0x340b08: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x340b04) {
            ctx->pc = 0x340B18u;
            goto label_340b18;
        }
    }
    ctx->pc = 0x340B0Cu;
    // 0x340b0c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x340b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x340b10: 0x640803e7  daddiu      $t0, $zero, 0x3E7
    ctx->pc = 0x340b10u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)999);
    // 0x340b14: 0x6402003b  daddiu      $v0, $zero, 0x3B
    ctx->pc = 0x340b14u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)59);
label_340b18:
    // 0x340b18: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x340b18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x340b1c: 0x2409003b  addiu       $t1, $zero, 0x3B
    ctx->pc = 0x340b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x340b20: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x340b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x340b24: 0x3105ffff  andi        $a1, $t0, 0xFFFF
    ctx->pc = 0x340b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x340b28: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x340b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x340b2c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x340b2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x340b30: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x340b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x340b34: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x340b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x340b38: 0x240b0063  addiu       $t3, $zero, 0x63
    ctx->pc = 0x340b38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x340b3c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x340b3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b40: 0x1010  mfhi        $v0
    ctx->pc = 0x340b40u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x340b44: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x340b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x340b48: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x340b48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x340b4c: 0xc0cc878  jal         func_3321E0
    ctx->pc = 0x340B4Cu;
    SET_GPR_U32(ctx, 31, 0x340B54u);
    ctx->pc = 0x340B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340B4Cu;
            // 0x340b50: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3321E0u;
    if (runtime->hasFunction(0x3321E0u)) {
        auto targetFn = runtime->lookupFunction(0x3321E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340B54u; }
        if (ctx->pc != 0x340B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003321E0_0x3321e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340B54u; }
        if (ctx->pc != 0x340B54u) { return; }
    }
    ctx->pc = 0x340B54u;
label_340b54:
    // 0x340b54: 0xc040180  jal         func_100600
    ctx->pc = 0x340B54u;
    SET_GPR_U32(ctx, 31, 0x340B5Cu);
    ctx->pc = 0x340B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340B54u;
            // 0x340b58: 0x240400e4  addiu       $a0, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340B5Cu; }
        if (ctx->pc != 0x340B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340B5Cu; }
        if (ctx->pc != 0x340B5Cu) { return; }
    }
    ctx->pc = 0x340B5Cu;
label_340b5c:
    // 0x340b5c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x340B5Cu;
    {
        const bool branch_taken_0x340b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x340B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340B5Cu;
            // 0x340b60: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340b5c) {
            ctx->pc = 0x340BE4u;
            goto label_340be4;
        }
    }
    ctx->pc = 0x340B64u;
    // 0x340b64: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x340b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x340b68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x340b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b6c: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x340b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
    // 0x340b70: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x340b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x340b74: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x340B74u;
    SET_GPR_U32(ctx, 31, 0x340B7Cu);
    ctx->pc = 0x340B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340B74u;
            // 0x340b78: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340B7Cu; }
        if (ctx->pc != 0x340B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340B7Cu; }
        if (ctx->pc != 0x340B7Cu) { return; }
    }
    ctx->pc = 0x340B7Cu;
label_340b7c:
    // 0x340b7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x340b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x340b80: 0x26240054  addiu       $a0, $s1, 0x54
    ctx->pc = 0x340b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    // 0x340b84: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x340b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x340b88: 0xc148880  jal         func_522200
    ctx->pc = 0x340B88u;
    SET_GPR_U32(ctx, 31, 0x340B90u);
    ctx->pc = 0x340B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340B88u;
            // 0x340b8c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340B90u; }
        if (ctx->pc != 0x340B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340B90u; }
        if (ctx->pc != 0x340B90u) { return; }
    }
    ctx->pc = 0x340B90u;
label_340b90:
    // 0x340b90: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x340b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x340b94: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x340b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x340b98: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x340b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
    // 0x340b9c: 0x24635600  addiu       $v1, $v1, 0x5600
    ctx->pc = 0x340b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22016));
    // 0x340ba0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x340ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x340ba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x340ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340ba8: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x340ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    // 0x340bac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x340bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x340bb0: 0xae220098  sw          $v0, 0x98($s1)
    ctx->pc = 0x340bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    // 0x340bb4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x340bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x340bb8: 0xae23009c  sw          $v1, 0x9C($s1)
    ctx->pc = 0x340bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
    // 0x340bbc: 0x3c024392  lui         $v0, 0x4392
    ctx->pc = 0x340bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17298 << 16));
    // 0x340bc0: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x340bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x340bc4: 0xae3000a0  sw          $s0, 0xA0($s1)
    ctx->pc = 0x340bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 16));
    // 0x340bc8: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x340bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x340bcc: 0xae2300c0  sw          $v1, 0xC0($s1)
    ctx->pc = 0x340bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 3));
    // 0x340bd0: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x340bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
    // 0x340bd4: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x340bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
    // 0x340bd8: 0xae2000cc  sw          $zero, 0xCC($s1)
    ctx->pc = 0x340bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
    // 0x340bdc: 0xc0e030c  jal         func_380C30
    ctx->pc = 0x340BDCu;
    SET_GPR_U32(ctx, 31, 0x340BE4u);
    ctx->pc = 0x340BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x340BDCu;
            // 0x340be0: 0xae2000d0  sw          $zero, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380C30u;
    if (runtime->hasFunction(0x380C30u)) {
        auto targetFn = runtime->lookupFunction(0x380C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340BE4u; }
        if (ctx->pc != 0x340BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380C30_0x380c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x340BE4u; }
        if (ctx->pc != 0x340BE4u) { return; }
    }
    ctx->pc = 0x340BE4u;
label_340be4:
    // 0x340be4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x340be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_340be8:
    // 0x340be8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x340be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x340becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x340BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x340BF0u;
            // 0x340bf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x340BF8u;
    // 0x340bf8: 0x0  nop
    ctx->pc = 0x340bf8u;
    // NOP
    // 0x340bfc: 0x0  nop
    ctx->pc = 0x340bfcu;
    // NOP
}
