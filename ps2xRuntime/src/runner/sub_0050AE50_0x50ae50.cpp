#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050AE50
// Address: 0x50ae50 - 0x50afa0
void sub_0050AE50_0x50ae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050AE50_0x50ae50");
#endif

    switch (ctx->pc) {
        case 0x50af40u: goto label_50af40;
        case 0x50af64u: goto label_50af64;
        case 0x50af80u: goto label_50af80;
        default: break;
    }

    ctx->pc = 0x50ae50u;

    // 0x50ae50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x50ae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x50ae54: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x50ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x50ae58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x50ae58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x50ae5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50ae5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x50ae60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50ae60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x50ae64: 0x8c900054  lw          $s0, 0x54($a0)
    ctx->pc = 0x50ae64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x50ae68: 0x8e050d74  lw          $a1, 0xD74($s0)
    ctx->pc = 0x50ae68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
    // 0x50ae6c: 0x90a302c5  lbu         $v1, 0x2C5($a1)
    ctx->pc = 0x50ae6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 709)));
    // 0x50ae70: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x50ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x50ae74: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x50ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x50ae78: 0x90630281  lbu         $v1, 0x281($v1)
    ctx->pc = 0x50ae78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
    // 0x50ae7c: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x50AE7Cu;
    {
        const bool branch_taken_0x50ae7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x50AE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50AE7Cu;
            // 0x50ae80: 0x26040ab0  addiu       $a0, $s0, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ae7c) {
            ctx->pc = 0x50AF38u;
            goto label_50af38;
        }
    }
    ctx->pc = 0x50AE84u;
    // 0x50ae84: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x50ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x50ae88: 0xc442a490  lwc1        $f2, -0x5B70($v0)
    ctx->pc = 0x50ae88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x50ae8c: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x50ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x50ae90: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x50AE90u;
    {
        const bool branch_taken_0x50ae90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50AE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50AE90u;
            // 0x50ae94: 0x8c860040  lw          $a2, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ae90) {
            ctx->pc = 0x50AEE4u;
            goto label_50aee4;
        }
    }
    ctx->pc = 0x50AE98u;
    // 0x50ae98: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x50ae98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x50ae9c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x50aea0: 0x28a37fff  slti        $v1, $a1, 0x7FFF
    ctx->pc = 0x50aea0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32767) ? 1 : 0);
    // 0x50aea4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x50aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x50aea8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x50aea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x50aeac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x50aeacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x50aeb0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x50aeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x50aeb4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x50aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x50aeb8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x50aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x50aebc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x50aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x50aec0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x50aec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x50aec4: 0x0  nop
    ctx->pc = 0x50aec4u;
    // NOP
    // 0x50aec8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x50aec8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x50aecc: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x50aeccu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x50aed0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x50aed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x50aed4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x50aed4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x50aed8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x50aed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x50aedc: 0x0  nop
    ctx->pc = 0x50aedcu;
    // NOP
    // 0x50aee0: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x50aee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
label_50aee4:
    // 0x50aee4: 0x50c00017  beql        $a2, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x50AEE4u;
    {
        const bool branch_taken_0x50aee4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x50aee4) {
            ctx->pc = 0x50AEE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50AEE4u;
            // 0x50aee8: 0x8e100d74  lw          $s0, 0xD74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50AF44u;
            goto label_50af44;
        }
    }
    ctx->pc = 0x50AEECu;
    // 0x50aeec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x50aef0: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x50aef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x50aef4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x50aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x50aef8: 0x28a37fff  slti        $v1, $a1, 0x7FFF
    ctx->pc = 0x50aef8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32767) ? 1 : 0);
    // 0x50aefc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x50aefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x50af00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x50af00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x50af04: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x50af04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x50af08: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x50af08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x50af0c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x50af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x50af10: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x50af10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x50af14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x50af14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x50af18: 0x0  nop
    ctx->pc = 0x50af18u;
    // NOP
    // 0x50af1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x50af1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x50af20: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x50af20u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x50af24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x50af24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x50af28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x50af28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x50af2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x50af2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x50af30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x50AF30u;
    {
        const bool branch_taken_0x50af30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50AF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50AF30u;
            // 0x50af34: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50af30) {
            ctx->pc = 0x50AF40u;
            goto label_50af40;
        }
    }
    ctx->pc = 0x50AF38u;
label_50af38:
    // 0x50af38: 0xc0bbec8  jal         func_2EFB20
    ctx->pc = 0x50AF38u;
    SET_GPR_U32(ctx, 31, 0x50AF40u);
    ctx->pc = 0x2EFB20u;
    if (runtime->hasFunction(0x2EFB20u)) {
        auto targetFn = runtime->lookupFunction(0x2EFB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AF40u; }
        if (ctx->pc != 0x50AF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EFB20_0x2efb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AF40u; }
        if (ctx->pc != 0x50AF40u) { return; }
    }
    ctx->pc = 0x50AF40u;
label_50af40:
    // 0x50af40: 0x8e100d74  lw          $s0, 0xD74($s0)
    ctx->pc = 0x50af40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_50af44:
    // 0x50af44: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x50af44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x50af48: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x50af48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x50af4c: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x50af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x50af50: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x50af50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x50af54: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x50af54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x50af58: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x50af58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x50af5c: 0xc0a545c  jal         func_295170
    ctx->pc = 0x50AF5Cu;
    SET_GPR_U32(ctx, 31, 0x50AF64u);
    ctx->pc = 0x50AF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50AF5Cu;
            // 0x50af60: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AF64u; }
        if (ctx->pc != 0x50AF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AF64u; }
        if (ctx->pc != 0x50AF64u) { return; }
    }
    ctx->pc = 0x50AF64u;
label_50af64:
    // 0x50af64: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x50af64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
    // 0x50af68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50af68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x50af6c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x50af6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x50af70: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x50af70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x50af74: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x50af74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x50af78: 0xc08bf20  jal         func_22FC80
    ctx->pc = 0x50AF78u;
    SET_GPR_U32(ctx, 31, 0x50AF80u);
    ctx->pc = 0x50AF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50AF78u;
            // 0x50af7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AF80u; }
        if (ctx->pc != 0x50AF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AF80u; }
        if (ctx->pc != 0x50AF80u) { return; }
    }
    ctx->pc = 0x50AF80u;
label_50af80:
    // 0x50af80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50af80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50af84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50af84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50af88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50af88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50af8c: 0x3e00008  jr          $ra
    ctx->pc = 0x50AF8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50AF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50AF8Cu;
            // 0x50af90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50AF94u;
    // 0x50af94: 0x0  nop
    ctx->pc = 0x50af94u;
    // NOP
    // 0x50af98: 0x0  nop
    ctx->pc = 0x50af98u;
    // NOP
    // 0x50af9c: 0x0  nop
    ctx->pc = 0x50af9cu;
    // NOP
}
