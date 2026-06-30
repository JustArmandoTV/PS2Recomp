#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00436230
// Address: 0x436230 - 0x436640
void sub_00436230_0x436230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00436230_0x436230");
#endif

    switch (ctx->pc) {
        case 0x436290u: goto label_436290;
        case 0x4362a0u: goto label_4362a0;
        case 0x4362b4u: goto label_4362b4;
        case 0x4362c8u: goto label_4362c8;
        case 0x4362d4u: goto label_4362d4;
        case 0x4362e4u: goto label_4362e4;
        case 0x436370u: goto label_436370;
        case 0x4363fcu: goto label_4363fc;
        case 0x43642cu: goto label_43642c;
        case 0x43645cu: goto label_43645c;
        case 0x436470u: goto label_436470;
        case 0x436504u: goto label_436504;
        case 0x43651cu: goto label_43651c;
        case 0x436594u: goto label_436594;
        case 0x4365b0u: goto label_4365b0;
        case 0x4365c0u: goto label_4365c0;
        case 0x4365d4u: goto label_4365d4;
        case 0x4365f0u: goto label_4365f0;
        case 0x436600u: goto label_436600;
        case 0x436614u: goto label_436614;
        default: break;
    }

    ctx->pc = 0x436230u;

    // 0x436230: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x436230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x436234: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x436234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x436238: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x436238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x43623c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x43623cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x436240: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x436240u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436244: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x436244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x436248: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x436248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x43624c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x43624cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x436250: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x436250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x436254: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x436254u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x436258: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x436258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x43625c: 0x908300e4  lbu         $v1, 0xE4($a0)
    ctx->pc = 0x43625cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x436260: 0x106000ec  beqz        $v1, . + 4 + (0xEC << 2)
    ctx->pc = 0x436260u;
    {
        const bool branch_taken_0x436260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x436264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436260u;
            // 0x436264: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436260) {
            ctx->pc = 0x436614u;
            goto label_436614;
        }
    }
    ctx->pc = 0x436268u;
    // 0x436268: 0x92a30090  lbu         $v1, 0x90($s5)
    ctx->pc = 0x436268u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
    // 0x43626c: 0x506000ea  beql        $v1, $zero, . + 4 + (0xEA << 2)
    ctx->pc = 0x43626Cu;
    {
        const bool branch_taken_0x43626c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x43626c) {
            ctx->pc = 0x436270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43626Cu;
            // 0x436270: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x436618u;
            goto label_436618;
        }
    }
    ctx->pc = 0x436274u;
    // 0x436274: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x436274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x436278: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x436278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x43627c: 0x8c73e378  lw          $s3, -0x1C88($v1)
    ctx->pc = 0x43627cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x436280: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x436280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x436284: 0x8c5189f0  lw          $s1, -0x7610($v0)
    ctx->pc = 0x436284u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
    // 0x436288: 0xc04cce4  jal         func_133390
    ctx->pc = 0x436288u;
    SET_GPR_U32(ctx, 31, 0x436290u);
    ctx->pc = 0x43628Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436288u;
            // 0x43628c: 0x26a500f0  addiu       $a1, $s5, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436290u; }
        if (ctx->pc != 0x436290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436290u; }
        if (ctx->pc != 0x436290u) { return; }
    }
    ctx->pc = 0x436290u;
label_436290:
    // 0x436290: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x436290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x436294: 0x26a400f0  addiu       $a0, $s5, 0xF0
    ctx->pc = 0x436294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x436298: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x436298u;
    SET_GPR_U32(ctx, 31, 0x4362A0u);
    ctx->pc = 0x43629Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436298u;
            // 0x43629c: 0x24a5cea0  addiu       $a1, $a1, -0x3160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4362A0u; }
        if (ctx->pc != 0x4362A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4362A0u; }
        if (ctx->pc != 0x4362A0u) { return; }
    }
    ctx->pc = 0x4362A0u;
label_4362a0:
    // 0x4362a0: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4362a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x4362a4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4362a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4362a8: 0x26a500f0  addiu       $a1, $s5, 0xF0
    ctx->pc = 0x4362a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x4362ac: 0xc04cca0  jal         func_133280
    ctx->pc = 0x4362ACu;
    SET_GPR_U32(ctx, 31, 0x4362B4u);
    ctx->pc = 0x4362B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4362ACu;
            // 0x4362b0: 0x24c6ce90  addiu       $a2, $a2, -0x3170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4362B4u; }
        if (ctx->pc != 0x4362B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4362B4u; }
        if (ctx->pc != 0x4362B4u) { return; }
    }
    ctx->pc = 0x4362B4u;
label_4362b4:
    // 0x4362b4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4362b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4362b8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4362b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4362bc: 0x24a5ce90  addiu       $a1, $a1, -0x3170
    ctx->pc = 0x4362bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954640));
    // 0x4362c0: 0xc04cc08  jal         func_133020
    ctx->pc = 0x4362C0u;
    SET_GPR_U32(ctx, 31, 0x4362C8u);
    ctx->pc = 0x4362C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4362C0u;
            // 0x4362c4: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4362C8u; }
        if (ctx->pc != 0x4362C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4362C8u; }
        if (ctx->pc != 0x4362C8u) { return; }
    }
    ctx->pc = 0x4362C8u;
label_4362c8:
    // 0x4362c8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x4362c8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x4362cc: 0xc04cc14  jal         func_133050
    ctx->pc = 0x4362CCu;
    SET_GPR_U32(ctx, 31, 0x4362D4u);
    ctx->pc = 0x4362D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4362CCu;
            // 0x4362d0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4362D4u; }
        if (ctx->pc != 0x4362D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4362D4u; }
        if (ctx->pc != 0x4362D4u) { return; }
    }
    ctx->pc = 0x4362D4u;
label_4362d4:
    // 0x4362d4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4362d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4362d8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4362d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x4362dc: 0xc04cc14  jal         func_133050
    ctx->pc = 0x4362DCu;
    SET_GPR_U32(ctx, 31, 0x4362E4u);
    ctx->pc = 0x4362E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4362DCu;
            // 0x4362e0: 0x2484ce90  addiu       $a0, $a0, -0x3170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4362E4u; }
        if (ctx->pc != 0x4362E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4362E4u; }
        if (ctx->pc != 0x4362E4u) { return; }
    }
    ctx->pc = 0x4362E4u;
label_4362e4:
    // 0x4362e4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x4362e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x4362e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4362e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x4362ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4362ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4362f0: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x4362f0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
    // 0x4362f4: 0x0  nop
    ctx->pc = 0x4362f4u;
    // NOP
    // 0x4362f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4362f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4362fc: 0x0  nop
    ctx->pc = 0x4362fcu;
    // NOP
    // 0x436300: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x436300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x436304: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x436304u;
    {
        const bool branch_taken_0x436304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x436304) {
            ctx->pc = 0x436308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x436304u;
            // 0x436308: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x436314u;
            goto label_436314;
        }
    }
    ctx->pc = 0x43630Cu;
    // 0x43630c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x43630cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436310: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x436310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_436314:
    // 0x436314: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x436314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x436318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x436318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x43631c: 0x0  nop
    ctx->pc = 0x43631cu;
    // NOP
    // 0x436320: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x436320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x436324: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x436324u;
    {
        const bool branch_taken_0x436324 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x436328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436324u;
            // 0x436328: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436324) {
            ctx->pc = 0x436330u;
            goto label_436330;
        }
    }
    ctx->pc = 0x43632Cu;
    // 0x43632c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x43632cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_436330:
    // 0x436330: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x436330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x436334: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x436334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x436338: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x436338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x43633c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x43633cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x436340: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x436340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x436344: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x436344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x436348: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x436348u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x43634c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x43634cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x436350: 0x0  nop
    ctx->pc = 0x436350u;
    // NOP
    // 0x436354: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x436354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x436358: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x436358u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x43635c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x43635cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x436360: 0x0  nop
    ctx->pc = 0x436360u;
    // NOP
    // 0x436364: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x436364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x436368: 0xc0477fe  jal         func_11DFF8
    ctx->pc = 0x436368u;
    SET_GPR_U32(ctx, 31, 0x436370u);
    ctx->pc = 0x43636Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436368u;
            // 0x43636c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436370u; }
        if (ctx->pc != 0x436370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436370u; }
        if (ctx->pc != 0x436370u) { return; }
    }
    ctx->pc = 0x436370u;
label_436370:
    // 0x436370: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x436370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x436374: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x436374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x436378: 0x0  nop
    ctx->pc = 0x436378u;
    // NOP
    // 0x43637c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x43637cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x436380: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x436380u;
    {
        const bool branch_taken_0x436380 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x436384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436380u;
            // 0x436384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436380) {
            ctx->pc = 0x43638Cu;
            goto label_43638c;
        }
    }
    ctx->pc = 0x436388u;
    // 0x436388: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x436388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43638c:
    // 0x43638c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43638Cu;
    {
        const bool branch_taken_0x43638c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x43638c) {
            ctx->pc = 0x436390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43638Cu;
            // 0x436390: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4363A0u;
            goto label_4363a0;
        }
    }
    ctx->pc = 0x436394u;
    // 0x436394: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x436394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x436398: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x436398u;
    {
        const bool branch_taken_0x436398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43639Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436398u;
            // 0x43639c: 0x46800960  cvt.s.w     $f5, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x436398) {
            ctx->pc = 0x4363B8u;
            goto label_4363b8;
        }
    }
    ctx->pc = 0x4363A0u;
label_4363a0:
    // 0x4363a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4363a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4363a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4363a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4363a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4363a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4363ac: 0x0  nop
    ctx->pc = 0x4363acu;
    // NOP
    // 0x4363b0: 0x46800960  cvt.s.w     $f5, $f1
    ctx->pc = 0x4363b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x4363b4: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x4363b4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_4363b8:
    // 0x4363b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4363b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x4363bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4363bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x4363c0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4363c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4363c4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4363c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4363c8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4363c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4363cc: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x4363ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x4363d0: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x4363d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x4363d4: 0x4605209d  msub.s      $f2, $f4, $f5
    ctx->pc = 0x4363d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x4363d8: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x4363d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x4363dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4363dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4363e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4363e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4363e4: 0x0  nop
    ctx->pc = 0x4363e4u;
    // NOP
    // 0x4363e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4363e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4363ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4363ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4363f0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4363f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x4363f4: 0xc04f2b8  jal         func_13CAE0
    ctx->pc = 0x4363F4u;
    SET_GPR_U32(ctx, 31, 0x4363FCu);
    ctx->pc = 0x4363F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4363F4u;
            // 0x4363f8: 0x26a400f0  addiu       $a0, $s5, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4363FCu; }
        if (ctx->pc != 0x4363FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4363FCu; }
        if (ctx->pc != 0x4363FCu) { return; }
    }
    ctx->pc = 0x4363FCu;
label_4363fc:
    // 0x4363fc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x4363fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x436400: 0x3c02411e  lui         $v0, 0x411E
    ctx->pc = 0x436400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16670 << 16));
    // 0x436404: 0xc6a300dc  lwc1        $f3, 0xDC($s5)
    ctx->pc = 0x436404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x436408: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x436408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x43640c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x43640cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x436410: 0x26a400f0  addiu       $a0, $s5, 0xF0
    ctx->pc = 0x436410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x436414: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x436414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x436418: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x436418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x43641c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x43641cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x436420: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x436420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x436424: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x436424u;
    SET_GPR_U32(ctx, 31, 0x43642Cu);
    ctx->pc = 0x436428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436424u;
            // 0x436428: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43642Cu; }
        if (ctx->pc != 0x43642Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43642Cu; }
        if (ctx->pc != 0x43642Cu) { return; }
    }
    ctx->pc = 0x43642Cu;
label_43642c:
    // 0x43642c: 0x3c024202  lui         $v0, 0x4202
    ctx->pc = 0x43642cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16898 << 16));
    // 0x436430: 0x26a400f0  addiu       $a0, $s5, 0xF0
    ctx->pc = 0x436430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x436434: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x436434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x436438: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x436438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43643c: 0xc6a200dc  lwc1        $f2, 0xDC($s5)
    ctx->pc = 0x43643cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x436440: 0x3c024128  lui         $v0, 0x4128
    ctx->pc = 0x436440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16680 << 16));
    // 0x436444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x436444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x436448: 0x0  nop
    ctx->pc = 0x436448u;
    // NOP
    // 0x43644c: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x43644cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x436450: 0x46020342  mul.s       $f13, $f0, $f2
    ctx->pc = 0x436450u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x436454: 0xc04ce50  jal         func_133940
    ctx->pc = 0x436454u;
    SET_GPR_U32(ctx, 31, 0x43645Cu);
    ctx->pc = 0x436458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436454u;
            // 0x436458: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43645Cu; }
        if (ctx->pc != 0x43645Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43645Cu; }
        if (ctx->pc != 0x43645Cu) { return; }
    }
    ctx->pc = 0x43645Cu;
label_43645c:
    // 0x43645c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x43645cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x436460: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x436460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436464: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x436464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x436468: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x436468u;
    SET_GPR_U32(ctx, 31, 0x436470u);
    ctx->pc = 0x43646Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436468u;
            // 0x43646c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436470u; }
        if (ctx->pc != 0x436470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436470u; }
        if (ctx->pc != 0x436470u) { return; }
    }
    ctx->pc = 0x436470u;
label_436470:
    // 0x436470: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x436470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x436474: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x436474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x436478: 0x34421001  ori         $v0, $v0, 0x1001
    ctx->pc = 0x436478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x43647c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x43647cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x436480: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x436480u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x436484: 0x8e50003c  lw          $s0, 0x3C($s2)
    ctx->pc = 0x436484u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x436488: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x436488u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x43648c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x43648cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x436490: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x436490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x436494: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x436494u;
    {
        const bool branch_taken_0x436494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x436494) {
            ctx->pc = 0x4364B0u;
            goto label_4364b0;
        }
    }
    ctx->pc = 0x43649Cu;
    // 0x43649c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43649cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4364a0: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x4364a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
    // 0x4364a4: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4364a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x4364a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4364A8u;
    {
        const bool branch_taken_0x4364a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4364ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4364A8u;
            // 0x4364ac: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4364a8) {
            ctx->pc = 0x4364C0u;
            goto label_4364c0;
        }
    }
    ctx->pc = 0x4364B0u;
label_4364b0:
    // 0x4364b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4364b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4364b4: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x4364b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
    // 0x4364b8: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4364b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x4364bc: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x4364bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_4364c0:
    // 0x4364c0: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x4364c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x4364c4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x4364c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x4364c8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x4364c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4364cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4364ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4364d0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x4364d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x4364d4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x4364d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4364d8: 0x3c02020a  lui         $v0, 0x20A
    ctx->pc = 0x4364d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)522 << 16));
    // 0x4364dc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x4364dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4364e0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4364e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4364e4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4364e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x4364e8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x4364e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x4364ec: 0xfc44ce70  sd          $a0, -0x3190($v0)
    ctx->pc = 0x4364ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294954608), GPR_U64(ctx, 4));
    // 0x4364f0: 0xdc6357f0  ld          $v1, 0x57F0($v1)
    ctx->pc = 0x4364f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 22512)));
    // 0x4364f4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4364f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x4364f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4364f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4364fc: 0xc0574d8  jal         func_15D360
    ctx->pc = 0x4364FCu;
    SET_GPR_U32(ctx, 31, 0x436504u);
    ctx->pc = 0x436500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4364FCu;
            // 0x436500: 0xfc43ce78  sd          $v1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D360u;
    if (runtime->hasFunction(0x15D360u)) {
        auto targetFn = runtime->lookupFunction(0x15D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436504u; }
        if (ctx->pc != 0x436504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D360_0x15d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436504u; }
        if (ctx->pc != 0x436504u) { return; }
    }
    ctx->pc = 0x436504u;
label_436504:
    // 0x436504: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x436504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x436508: 0x26a500f0  addiu       $a1, $s5, 0xF0
    ctx->pc = 0x436508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x43650c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x43650cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436510: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x436510u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x436514: 0xc055234  jal         func_1548D0
    ctx->pc = 0x436514u;
    SET_GPR_U32(ctx, 31, 0x43651Cu);
    ctx->pc = 0x436518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436514u;
            // 0x436518: 0x240800c0  addiu       $t0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43651Cu; }
        if (ctx->pc != 0x43651Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43651Cu; }
        if (ctx->pc != 0x43651Cu) { return; }
    }
    ctx->pc = 0x43651Cu;
label_43651c:
    // 0x43651c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x43651cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x436520: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x436520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x436524: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x436524u;
    {
        const bool branch_taken_0x436524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x436524) {
            ctx->pc = 0x436540u;
            goto label_436540;
        }
    }
    ctx->pc = 0x43652Cu;
    // 0x43652c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43652cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x436530: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x436530u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
    // 0x436534: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x436534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x436538: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x436538u;
    {
        const bool branch_taken_0x436538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43653Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436538u;
            // 0x43653c: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436538) {
            ctx->pc = 0x436550u;
            goto label_436550;
        }
    }
    ctx->pc = 0x436540u;
label_436540:
    // 0x436540: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x436540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x436544: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x436544u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
    // 0x436548: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x436548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x43654c: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x43654cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_436550:
    // 0x436550: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x436550u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x436554: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x436554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x436558: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x436558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43655c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x43655cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x436560: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x436560u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x436564: 0x3c02020a  lui         $v0, 0x20A
    ctx->pc = 0x436564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)522 << 16));
    // 0x436568: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x436568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x43656c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x43656cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x436570: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x436570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x436574: 0xdc4557f0  ld          $a1, 0x57F0($v0)
    ctx->pc = 0x436574u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 22512)));
    // 0x436578: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x436578u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x43657c: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x43657cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x436580: 0xfc64ce70  sd          $a0, -0x3190($v1)
    ctx->pc = 0x436580u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294954608), GPR_U64(ctx, 4));
    // 0x436584: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x436584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x436588: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x436588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43658c: 0xc0574d8  jal         func_15D360
    ctx->pc = 0x43658Cu;
    SET_GPR_U32(ctx, 31, 0x436594u);
    ctx->pc = 0x436590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43658Cu;
            // 0x436590: 0xfc45ce78  sd          $a1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D360u;
    if (runtime->hasFunction(0x15D360u)) {
        auto targetFn = runtime->lookupFunction(0x15D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436594u; }
        if (ctx->pc != 0x436594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D360_0x15d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436594u; }
        if (ctx->pc != 0x436594u) { return; }
    }
    ctx->pc = 0x436594u;
label_436594:
    // 0x436594: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x436594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x436598: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x436598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x43659c: 0x34425001  ori         $v0, $v0, 0x5001
    ctx->pc = 0x43659cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20481);
    // 0x4365a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4365a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4365a4: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x4365a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x4365a8: 0xc04a508  jal         func_129420
    ctx->pc = 0x4365A8u;
    SET_GPR_U32(ctx, 31, 0x4365B0u);
    ctx->pc = 0x4365ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4365A8u;
            // 0x4365ac: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4365B0u; }
        if (ctx->pc != 0x4365B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4365B0u; }
        if (ctx->pc != 0x4365B0u) { return; }
    }
    ctx->pc = 0x4365B0u;
label_4365b0:
    // 0x4365b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4365b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4365b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4365b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4365b8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4365B8u;
    SET_GPR_U32(ctx, 31, 0x4365C0u);
    ctx->pc = 0x4365BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4365B8u;
            // 0x4365bc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4365C0u; }
        if (ctx->pc != 0x4365C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4365C0u; }
        if (ctx->pc != 0x4365C0u) { return; }
    }
    ctx->pc = 0x4365C0u;
label_4365c0:
    // 0x4365c0: 0x3c023e34  lui         $v0, 0x3E34
    ctx->pc = 0x4365c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15924 << 16));
    // 0x4365c4: 0x3442b4b4  ori         $v0, $v0, 0xB4B4
    ctx->pc = 0x4365c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46260);
    // 0x4365c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4365c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4365cc: 0xc054c3c  jal         func_1530F0
    ctx->pc = 0x4365CCu;
    SET_GPR_U32(ctx, 31, 0x4365D4u);
    ctx->pc = 0x4365D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4365CCu;
            // 0x4365d0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4365D4u; }
        if (ctx->pc != 0x4365D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4365D4u; }
        if (ctx->pc != 0x4365D4u) { return; }
    }
    ctx->pc = 0x4365D4u;
label_4365d4:
    // 0x4365d4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4365d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4365d8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x4365d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x4365dc: 0x26a500f0  addiu       $a1, $s5, 0xF0
    ctx->pc = 0x4365dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x4365e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4365e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4365e4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4365e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x4365e8: 0xc055234  jal         func_1548D0
    ctx->pc = 0x4365E8u;
    SET_GPR_U32(ctx, 31, 0x4365F0u);
    ctx->pc = 0x4365ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4365E8u;
            // 0x4365ec: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4365F0u; }
        if (ctx->pc != 0x4365F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4365F0u; }
        if (ctx->pc != 0x4365F0u) { return; }
    }
    ctx->pc = 0x4365F0u;
label_4365f0:
    // 0x4365f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4365f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4365f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4365f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4365f8: 0xc054c3c  jal         func_1530F0
    ctx->pc = 0x4365F8u;
    SET_GPR_U32(ctx, 31, 0x436600u);
    ctx->pc = 0x4365FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4365F8u;
            // 0x4365fc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436600u; }
        if (ctx->pc != 0x436600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436600u; }
        if (ctx->pc != 0x436600u) { return; }
    }
    ctx->pc = 0x436600u;
label_436600:
    // 0x436600: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x436600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436604: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x436604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x436608: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x436608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x43660c: 0xc04a508  jal         func_129420
    ctx->pc = 0x43660Cu;
    SET_GPR_U32(ctx, 31, 0x436614u);
    ctx->pc = 0x436610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43660Cu;
            // 0x436610: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436614u; }
        if (ctx->pc != 0x436614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436614u; }
        if (ctx->pc != 0x436614u) { return; }
    }
    ctx->pc = 0x436614u;
label_436614:
    // 0x436614: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x436614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_436618:
    // 0x436618: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x436618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x43661c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x43661cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x436620: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x436620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x436624: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x436624u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x436628: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x436628u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43662c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x43662cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x436630: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x436630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x436634: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x436634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x436638: 0x3e00008  jr          $ra
    ctx->pc = 0x436638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43663Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436638u;
            // 0x43663c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x436640u;
}
