#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043C440
// Address: 0x43c440 - 0x43c8c0
void sub_0043C440_0x43c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043C440_0x43c440");
#endif

    switch (ctx->pc) {
        case 0x43c4a0u: goto label_43c4a0;
        case 0x43c4b0u: goto label_43c4b0;
        case 0x43c4c4u: goto label_43c4c4;
        case 0x43c4d8u: goto label_43c4d8;
        case 0x43c4e4u: goto label_43c4e4;
        case 0x43c4f4u: goto label_43c4f4;
        case 0x43c580u: goto label_43c580;
        case 0x43c60cu: goto label_43c60c;
        case 0x43c63cu: goto label_43c63c;
        case 0x43c66cu: goto label_43c66c;
        case 0x43c680u: goto label_43c680;
        case 0x43c714u: goto label_43c714;
        case 0x43c72cu: goto label_43c72c;
        case 0x43c7a4u: goto label_43c7a4;
        case 0x43c7c0u: goto label_43c7c0;
        case 0x43c7d0u: goto label_43c7d0;
        case 0x43c7e4u: goto label_43c7e4;
        case 0x43c800u: goto label_43c800;
        case 0x43c810u: goto label_43c810;
        case 0x43c824u: goto label_43c824;
        case 0x43c874u: goto label_43c874;
        default: break;
    }

    ctx->pc = 0x43c440u;

    // 0x43c440: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x43c440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x43c444: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x43c444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x43c448: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x43c448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x43c44c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x43c44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x43c450: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x43c450u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c454: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x43c454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x43c458: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x43c458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x43c45c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x43c45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x43c460: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x43c460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x43c464: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x43c464u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x43c468: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x43c468u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x43c46c: 0x908300f0  lbu         $v1, 0xF0($a0)
    ctx->pc = 0x43c46cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x43c470: 0x106000ec  beqz        $v1, . + 4 + (0xEC << 2)
    ctx->pc = 0x43C470u;
    {
        const bool branch_taken_0x43c470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C470u;
            // 0x43c474: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c470) {
            ctx->pc = 0x43C824u;
            goto label_43c824;
        }
    }
    ctx->pc = 0x43C478u;
    // 0x43c478: 0x92a30090  lbu         $v1, 0x90($s5)
    ctx->pc = 0x43c478u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
    // 0x43c47c: 0x506000ea  beql        $v1, $zero, . + 4 + (0xEA << 2)
    ctx->pc = 0x43C47Cu;
    {
        const bool branch_taken_0x43c47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c47c) {
            ctx->pc = 0x43C480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43C47Cu;
            // 0x43c480: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43C828u;
            goto label_43c828;
        }
    }
    ctx->pc = 0x43C484u;
    // 0x43c484: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43c484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x43c488: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x43c488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x43c48c: 0x8c73e378  lw          $s3, -0x1C88($v1)
    ctx->pc = 0x43c48cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x43c490: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x43c490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x43c494: 0x8c5189f0  lw          $s1, -0x7610($v0)
    ctx->pc = 0x43c494u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
    // 0x43c498: 0xc04cce4  jal         func_133390
    ctx->pc = 0x43C498u;
    SET_GPR_U32(ctx, 31, 0x43C4A0u);
    ctx->pc = 0x43C49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C498u;
            // 0x43c49c: 0x26a50100  addiu       $a1, $s5, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C4A0u; }
        if (ctx->pc != 0x43C4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C4A0u; }
        if (ctx->pc != 0x43C4A0u) { return; }
    }
    ctx->pc = 0x43C4A0u;
label_43c4a0:
    // 0x43c4a0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x43c4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x43c4a4: 0x26a40100  addiu       $a0, $s5, 0x100
    ctx->pc = 0x43c4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x43c4a8: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x43C4A8u;
    SET_GPR_U32(ctx, 31, 0x43C4B0u);
    ctx->pc = 0x43C4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C4A8u;
            // 0x43c4ac: 0x24a5d120  addiu       $a1, $a1, -0x2EE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C4B0u; }
        if (ctx->pc != 0x43C4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C4B0u; }
        if (ctx->pc != 0x43C4B0u) { return; }
    }
    ctx->pc = 0x43C4B0u;
label_43c4b0:
    // 0x43c4b0: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x43c4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x43c4b4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x43c4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x43c4b8: 0x26a50100  addiu       $a1, $s5, 0x100
    ctx->pc = 0x43c4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x43c4bc: 0xc04cca0  jal         func_133280
    ctx->pc = 0x43C4BCu;
    SET_GPR_U32(ctx, 31, 0x43C4C4u);
    ctx->pc = 0x43C4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C4BCu;
            // 0x43c4c0: 0x24c6d110  addiu       $a2, $a2, -0x2EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C4C4u; }
        if (ctx->pc != 0x43C4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C4C4u; }
        if (ctx->pc != 0x43C4C4u) { return; }
    }
    ctx->pc = 0x43C4C4u;
label_43c4c4:
    // 0x43c4c4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x43c4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x43c4c8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x43c4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x43c4cc: 0x24a5d110  addiu       $a1, $a1, -0x2EF0
    ctx->pc = 0x43c4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955280));
    // 0x43c4d0: 0xc04cc08  jal         func_133020
    ctx->pc = 0x43C4D0u;
    SET_GPR_U32(ctx, 31, 0x43C4D8u);
    ctx->pc = 0x43C4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C4D0u;
            // 0x43c4d4: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C4D8u; }
        if (ctx->pc != 0x43C4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C4D8u; }
        if (ctx->pc != 0x43C4D8u) { return; }
    }
    ctx->pc = 0x43C4D8u;
label_43c4d8:
    // 0x43c4d8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x43c4d8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x43c4dc: 0xc04cc14  jal         func_133050
    ctx->pc = 0x43C4DCu;
    SET_GPR_U32(ctx, 31, 0x43C4E4u);
    ctx->pc = 0x43C4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C4DCu;
            // 0x43c4e0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C4E4u; }
        if (ctx->pc != 0x43C4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C4E4u; }
        if (ctx->pc != 0x43C4E4u) { return; }
    }
    ctx->pc = 0x43C4E4u;
label_43c4e4:
    // 0x43c4e4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x43c4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x43c4e8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x43c4e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x43c4ec: 0xc04cc14  jal         func_133050
    ctx->pc = 0x43C4ECu;
    SET_GPR_U32(ctx, 31, 0x43C4F4u);
    ctx->pc = 0x43C4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C4ECu;
            // 0x43c4f0: 0x2484d110  addiu       $a0, $a0, -0x2EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C4F4u; }
        if (ctx->pc != 0x43C4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C4F4u; }
        if (ctx->pc != 0x43C4F4u) { return; }
    }
    ctx->pc = 0x43C4F4u;
label_43c4f4:
    // 0x43c4f4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x43c4f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x43c4f8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x43c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x43c4fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43c4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43c500: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x43c500u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
    // 0x43c504: 0x0  nop
    ctx->pc = 0x43c504u;
    // NOP
    // 0x43c508: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x43c508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x43c50c: 0x0  nop
    ctx->pc = 0x43c50cu;
    // NOP
    // 0x43c510: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x43c510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x43c514: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x43C514u;
    {
        const bool branch_taken_0x43c514 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x43c514) {
            ctx->pc = 0x43C518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43C514u;
            // 0x43c518: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43C524u;
            goto label_43c524;
        }
    }
    ctx->pc = 0x43C51Cu;
    // 0x43c51c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x43c51cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c520: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x43c520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_43c524:
    // 0x43c524: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x43c524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x43c528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x43c528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x43c52c: 0x0  nop
    ctx->pc = 0x43c52cu;
    // NOP
    // 0x43c530: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x43c530u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x43c534: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x43C534u;
    {
        const bool branch_taken_0x43c534 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x43C538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C534u;
            // 0x43c538: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c534) {
            ctx->pc = 0x43C540u;
            goto label_43c540;
        }
    }
    ctx->pc = 0x43C53Cu;
    // 0x43c53c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x43c53cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43c540:
    // 0x43c540: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x43c540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x43c544: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x43c544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x43c548: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x43c548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x43c54c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x43c54cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x43c550: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x43c550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x43c554: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x43c554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x43c558: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x43c558u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x43c55c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x43c55cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x43c560: 0x0  nop
    ctx->pc = 0x43c560u;
    // NOP
    // 0x43c564: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x43c564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x43c568: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x43c568u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x43c56c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x43c56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x43c570: 0x0  nop
    ctx->pc = 0x43c570u;
    // NOP
    // 0x43c574: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x43c574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x43c578: 0xc0477fe  jal         func_11DFF8
    ctx->pc = 0x43C578u;
    SET_GPR_U32(ctx, 31, 0x43C580u);
    ctx->pc = 0x43C57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C578u;
            // 0x43c57c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C580u; }
        if (ctx->pc != 0x43C580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C580u; }
        if (ctx->pc != 0x43C580u) { return; }
    }
    ctx->pc = 0x43C580u;
label_43c580:
    // 0x43c580: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x43c580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x43c584: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x43c584u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x43c588: 0x0  nop
    ctx->pc = 0x43c588u;
    // NOP
    // 0x43c58c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x43c58cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x43c590: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x43C590u;
    {
        const bool branch_taken_0x43c590 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x43C594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C590u;
            // 0x43c594: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c590) {
            ctx->pc = 0x43C59Cu;
            goto label_43c59c;
        }
    }
    ctx->pc = 0x43C598u;
    // 0x43c598: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x43c598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43c59c:
    // 0x43c59c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43C59Cu;
    {
        const bool branch_taken_0x43c59c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x43c59c) {
            ctx->pc = 0x43C5A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43C59Cu;
            // 0x43c5a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43C5B0u;
            goto label_43c5b0;
        }
    }
    ctx->pc = 0x43C5A4u;
    // 0x43c5a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x43c5a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x43c5a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x43C5A8u;
    {
        const bool branch_taken_0x43c5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C5A8u;
            // 0x43c5ac: 0x46800960  cvt.s.w     $f5, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c5a8) {
            ctx->pc = 0x43C5C8u;
            goto label_43c5c8;
        }
    }
    ctx->pc = 0x43C5B0u;
label_43c5b0:
    // 0x43c5b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x43c5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x43c5b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43c5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43c5b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x43c5b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x43c5bc: 0x0  nop
    ctx->pc = 0x43c5bcu;
    // NOP
    // 0x43c5c0: 0x46800960  cvt.s.w     $f5, $f1
    ctx->pc = 0x43c5c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x43c5c4: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x43c5c4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_43c5c8:
    // 0x43c5c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x43c5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x43c5cc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x43c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x43c5d0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x43c5d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x43c5d4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x43c5d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x43c5d8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x43c5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x43c5dc: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x43c5dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x43c5e0: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x43c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x43c5e4: 0x4605209d  msub.s      $f2, $f4, $f5
    ctx->pc = 0x43c5e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x43c5e8: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x43c5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x43c5ec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x43c5ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x43c5f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x43c5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x43c5f4: 0x0  nop
    ctx->pc = 0x43c5f4u;
    // NOP
    // 0x43c5f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x43c5f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x43c5fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x43c5fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x43c600: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x43c600u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x43c604: 0xc04f2b8  jal         func_13CAE0
    ctx->pc = 0x43C604u;
    SET_GPR_U32(ctx, 31, 0x43C60Cu);
    ctx->pc = 0x43C608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C604u;
            // 0x43c608: 0x26a40100  addiu       $a0, $s5, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C60Cu; }
        if (ctx->pc != 0x43C60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C60Cu; }
        if (ctx->pc != 0x43C60Cu) { return; }
    }
    ctx->pc = 0x43C60Cu;
label_43c60c:
    // 0x43c60c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x43c60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x43c610: 0x3c02411e  lui         $v0, 0x411E
    ctx->pc = 0x43c610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16670 << 16));
    // 0x43c614: 0xc6a300dc  lwc1        $f3, 0xDC($s5)
    ctx->pc = 0x43c614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x43c618: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x43c618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x43c61c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x43c61cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x43c620: 0x26a40100  addiu       $a0, $s5, 0x100
    ctx->pc = 0x43c620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x43c624: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x43c624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x43c628: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x43c628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x43c62c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x43c62cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x43c630: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x43c630u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x43c634: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x43C634u;
    SET_GPR_U32(ctx, 31, 0x43C63Cu);
    ctx->pc = 0x43C638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C634u;
            // 0x43c638: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C63Cu; }
        if (ctx->pc != 0x43C63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C63Cu; }
        if (ctx->pc != 0x43C63Cu) { return; }
    }
    ctx->pc = 0x43C63Cu;
label_43c63c:
    // 0x43c63c: 0x3c024202  lui         $v0, 0x4202
    ctx->pc = 0x43c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16898 << 16));
    // 0x43c640: 0x26a40100  addiu       $a0, $s5, 0x100
    ctx->pc = 0x43c640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x43c644: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x43c644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x43c648: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x43c648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c64c: 0xc6a200dc  lwc1        $f2, 0xDC($s5)
    ctx->pc = 0x43c64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x43c650: 0x3c024128  lui         $v0, 0x4128
    ctx->pc = 0x43c650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16680 << 16));
    // 0x43c654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x43c654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x43c658: 0x0  nop
    ctx->pc = 0x43c658u;
    // NOP
    // 0x43c65c: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x43c65cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x43c660: 0x46020342  mul.s       $f13, $f0, $f2
    ctx->pc = 0x43c660u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x43c664: 0xc04ce50  jal         func_133940
    ctx->pc = 0x43C664u;
    SET_GPR_U32(ctx, 31, 0x43C66Cu);
    ctx->pc = 0x43C668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C664u;
            // 0x43c668: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C66Cu; }
        if (ctx->pc != 0x43C66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C66Cu; }
        if (ctx->pc != 0x43C66Cu) { return; }
    }
    ctx->pc = 0x43C66Cu;
label_43c66c:
    // 0x43c66c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x43c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x43c670: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x43c670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c674: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x43c674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x43c678: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x43C678u;
    SET_GPR_U32(ctx, 31, 0x43C680u);
    ctx->pc = 0x43C67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C678u;
            // 0x43c67c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C680u; }
        if (ctx->pc != 0x43C680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C680u; }
        if (ctx->pc != 0x43C680u) { return; }
    }
    ctx->pc = 0x43C680u;
label_43c680:
    // 0x43c680: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x43c680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x43c684: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x43c684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x43c688: 0x34421001  ori         $v0, $v0, 0x1001
    ctx->pc = 0x43c688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x43c68c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x43c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x43c690: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x43c690u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x43c694: 0x8e50003c  lw          $s0, 0x3C($s2)
    ctx->pc = 0x43c694u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x43c698: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x43c698u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x43c69c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x43c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x43c6a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x43c6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x43c6a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x43C6A4u;
    {
        const bool branch_taken_0x43c6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c6a4) {
            ctx->pc = 0x43C6C0u;
            goto label_43c6c0;
        }
    }
    ctx->pc = 0x43C6ACu;
    // 0x43c6ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x43c6b0: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x43c6b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
    // 0x43c6b4: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x43c6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x43c6b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x43C6B8u;
    {
        const bool branch_taken_0x43c6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C6B8u;
            // 0x43c6bc: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c6b8) {
            ctx->pc = 0x43C6D0u;
            goto label_43c6d0;
        }
    }
    ctx->pc = 0x43C6C0u;
label_43c6c0:
    // 0x43c6c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x43c6c4: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x43c6c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
    // 0x43c6c8: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x43c6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x43c6cc: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x43c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_43c6d0:
    // 0x43c6d0: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x43c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x43c6d4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x43c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x43c6d8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x43c6d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43c6dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x43c6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x43c6e0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x43c6e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x43c6e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x43c6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43c6e8: 0x3c02020a  lui         $v0, 0x20A
    ctx->pc = 0x43c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)522 << 16));
    // 0x43c6ec: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x43c6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43c6f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x43c6f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x43c6f4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x43c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x43c6f8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x43c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x43c6fc: 0xfc44ce70  sd          $a0, -0x3190($v0)
    ctx->pc = 0x43c6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294954608), GPR_U64(ctx, 4));
    // 0x43c700: 0xdc6357f0  ld          $v1, 0x57F0($v1)
    ctx->pc = 0x43c700u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 22512)));
    // 0x43c704: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x43c704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x43c708: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x43c708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c70c: 0xc0574d8  jal         func_15D360
    ctx->pc = 0x43C70Cu;
    SET_GPR_U32(ctx, 31, 0x43C714u);
    ctx->pc = 0x43C710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C70Cu;
            // 0x43c710: 0xfc43ce78  sd          $v1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D360u;
    if (runtime->hasFunction(0x15D360u)) {
        auto targetFn = runtime->lookupFunction(0x15D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C714u; }
        if (ctx->pc != 0x43C714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D360_0x15d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C714u; }
        if (ctx->pc != 0x43C714u) { return; }
    }
    ctx->pc = 0x43C714u;
label_43c714:
    // 0x43c714: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x43c714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x43c718: 0x26a50100  addiu       $a1, $s5, 0x100
    ctx->pc = 0x43c718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x43c71c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x43c71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c720: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x43c720u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x43c724: 0xc055234  jal         func_1548D0
    ctx->pc = 0x43C724u;
    SET_GPR_U32(ctx, 31, 0x43C72Cu);
    ctx->pc = 0x43C728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C724u;
            // 0x43c728: 0x240800c0  addiu       $t0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C72Cu; }
        if (ctx->pc != 0x43C72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C72Cu; }
        if (ctx->pc != 0x43C72Cu) { return; }
    }
    ctx->pc = 0x43C72Cu;
label_43c72c:
    // 0x43c72c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x43c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x43c730: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x43c730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x43c734: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x43C734u;
    {
        const bool branch_taken_0x43c734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c734) {
            ctx->pc = 0x43C750u;
            goto label_43c750;
        }
    }
    ctx->pc = 0x43C73Cu;
    // 0x43c73c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x43c740: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x43c740u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
    // 0x43c744: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x43c744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x43c748: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x43C748u;
    {
        const bool branch_taken_0x43c748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C748u;
            // 0x43c74c: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c748) {
            ctx->pc = 0x43C760u;
            goto label_43c760;
        }
    }
    ctx->pc = 0x43C750u;
label_43c750:
    // 0x43c750: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43c750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x43c754: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x43c754u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
    // 0x43c758: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x43c758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x43c75c: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x43c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_43c760:
    // 0x43c760: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x43c760u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x43c764: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x43c764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x43c768: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x43c768u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43c76c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x43c76cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43c770: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x43c770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x43c774: 0x3c02020a  lui         $v0, 0x20A
    ctx->pc = 0x43c774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)522 << 16));
    // 0x43c778: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x43c778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x43c77c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x43c77cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x43c780: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x43c780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x43c784: 0xdc4557f0  ld          $a1, 0x57F0($v0)
    ctx->pc = 0x43c784u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 22512)));
    // 0x43c788: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x43c788u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x43c78c: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x43c78cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x43c790: 0xfc64ce70  sd          $a0, -0x3190($v1)
    ctx->pc = 0x43c790u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294954608), GPR_U64(ctx, 4));
    // 0x43c794: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x43c794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x43c798: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x43c798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c79c: 0xc0574d8  jal         func_15D360
    ctx->pc = 0x43C79Cu;
    SET_GPR_U32(ctx, 31, 0x43C7A4u);
    ctx->pc = 0x43C7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C79Cu;
            // 0x43c7a0: 0xfc45ce78  sd          $a1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D360u;
    if (runtime->hasFunction(0x15D360u)) {
        auto targetFn = runtime->lookupFunction(0x15D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C7A4u; }
        if (ctx->pc != 0x43C7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D360_0x15d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C7A4u; }
        if (ctx->pc != 0x43C7A4u) { return; }
    }
    ctx->pc = 0x43C7A4u;
label_43c7a4:
    // 0x43c7a4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x43c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x43c7a8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x43c7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x43c7ac: 0x34425001  ori         $v0, $v0, 0x5001
    ctx->pc = 0x43c7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20481);
    // 0x43c7b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x43c7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c7b4: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x43c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x43c7b8: 0xc04a508  jal         func_129420
    ctx->pc = 0x43C7B8u;
    SET_GPR_U32(ctx, 31, 0x43C7C0u);
    ctx->pc = 0x43C7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C7B8u;
            // 0x43c7bc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C7C0u; }
        if (ctx->pc != 0x43C7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C7C0u; }
        if (ctx->pc != 0x43C7C0u) { return; }
    }
    ctx->pc = 0x43C7C0u;
label_43c7c0:
    // 0x43c7c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x43c7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c7c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43c7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c7c8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x43C7C8u;
    SET_GPR_U32(ctx, 31, 0x43C7D0u);
    ctx->pc = 0x43C7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C7C8u;
            // 0x43c7cc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C7D0u; }
        if (ctx->pc != 0x43C7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C7D0u; }
        if (ctx->pc != 0x43C7D0u) { return; }
    }
    ctx->pc = 0x43C7D0u;
label_43c7d0:
    // 0x43c7d0: 0x3c023e34  lui         $v0, 0x3E34
    ctx->pc = 0x43c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15924 << 16));
    // 0x43c7d4: 0x3442b4b4  ori         $v0, $v0, 0xB4B4
    ctx->pc = 0x43c7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46260);
    // 0x43c7d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x43c7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x43c7dc: 0xc054c3c  jal         func_1530F0
    ctx->pc = 0x43C7DCu;
    SET_GPR_U32(ctx, 31, 0x43C7E4u);
    ctx->pc = 0x43C7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C7DCu;
            // 0x43c7e0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C7E4u; }
        if (ctx->pc != 0x43C7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C7E4u; }
        if (ctx->pc != 0x43C7E4u) { return; }
    }
    ctx->pc = 0x43C7E4u;
label_43c7e4:
    // 0x43c7e4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x43c7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x43c7e8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x43c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x43c7ec: 0x26a50100  addiu       $a1, $s5, 0x100
    ctx->pc = 0x43c7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x43c7f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x43c7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c7f4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x43c7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x43c7f8: 0xc055234  jal         func_1548D0
    ctx->pc = 0x43C7F8u;
    SET_GPR_U32(ctx, 31, 0x43C800u);
    ctx->pc = 0x43C7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C7F8u;
            // 0x43c7fc: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C800u; }
        if (ctx->pc != 0x43C800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C800u; }
        if (ctx->pc != 0x43C800u) { return; }
    }
    ctx->pc = 0x43C800u;
label_43c800:
    // 0x43c800: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x43c800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x43c804: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x43c804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x43c808: 0xc054c3c  jal         func_1530F0
    ctx->pc = 0x43C808u;
    SET_GPR_U32(ctx, 31, 0x43C810u);
    ctx->pc = 0x43C80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C808u;
            // 0x43c80c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C810u; }
        if (ctx->pc != 0x43C810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C810u; }
        if (ctx->pc != 0x43C810u) { return; }
    }
    ctx->pc = 0x43C810u;
label_43c810:
    // 0x43c810: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x43c810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c814: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x43c814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x43c818: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x43c818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x43c81c: 0xc04a508  jal         func_129420
    ctx->pc = 0x43C81Cu;
    SET_GPR_U32(ctx, 31, 0x43C824u);
    ctx->pc = 0x43C820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C81Cu;
            // 0x43c820: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C824u; }
        if (ctx->pc != 0x43C824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C824u; }
        if (ctx->pc != 0x43C824u) { return; }
    }
    ctx->pc = 0x43C824u;
label_43c824:
    // 0x43c824: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x43c824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_43c828:
    // 0x43c828: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x43c828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x43c82c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x43c82cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x43c830: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x43c830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x43c834: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x43c834u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x43c838: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x43c838u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43c83c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x43c83cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43c840: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x43c840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43c844: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x43c844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43c848: 0x3e00008  jr          $ra
    ctx->pc = 0x43C848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43C84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C848u;
            // 0x43c84c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43C850u;
    // 0x43c850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43c850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x43c854: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x43c854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43c858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43c858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x43c85c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x43c85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c860: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43c860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x43c864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43c864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c868: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x43c868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x43c86c: 0xc08914c  jal         func_224530
    ctx->pc = 0x43C86Cu;
    SET_GPR_U32(ctx, 31, 0x43C874u);
    ctx->pc = 0x43C870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C86Cu;
            // 0x43c870: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C874u; }
        if (ctx->pc != 0x43C874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C874u; }
        if (ctx->pc != 0x43C874u) { return; }
    }
    ctx->pc = 0x43C874u;
label_43c874:
    // 0x43c874: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x43c874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x43c878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43c878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43c87c: 0xae0400d0  sw          $a0, 0xD0($s0)
    ctx->pc = 0x43c87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 4));
    // 0x43c880: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x43c880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x43c884: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x43c884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x43c888: 0x54830009  bnel        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x43C888u;
    {
        const bool branch_taken_0x43c888 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x43c888) {
            ctx->pc = 0x43C88Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43C888u;
            // 0x43c88c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43C8B0u;
            goto label_43c8b0;
        }
    }
    ctx->pc = 0x43C890u;
    // 0x43c890: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x43c890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x43c894: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x43c894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x43c898: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x43c898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x43c89c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x43c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x43c8a0: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x43c8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x43c8a4: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x43c8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x43c8a8: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x43c8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x43c8ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43c8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43c8b0:
    // 0x43c8b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43c8b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43c8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x43C8B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43C8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C8B4u;
            // 0x43c8b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43C8BCu;
    // 0x43c8bc: 0x0  nop
    ctx->pc = 0x43c8bcu;
    // NOP
}
