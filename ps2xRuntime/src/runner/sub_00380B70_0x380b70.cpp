#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00380B70
// Address: 0x380b70 - 0x380c30
void sub_00380B70_0x380b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380B70_0x380b70");
#endif

    switch (ctx->pc) {
        case 0x380b8cu: goto label_380b8c;
        default: break;
    }

    ctx->pc = 0x380b70u;

    // 0x380b70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x380b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x380b74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x380b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x380b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x380b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x380b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x380b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x380b80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x380b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380b84: 0xc0e02a4  jal         func_380A90
    ctx->pc = 0x380B84u;
    SET_GPR_U32(ctx, 31, 0x380B8Cu);
    ctx->pc = 0x380B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x380B84u;
            // 0x380b88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380A90u;
    if (runtime->hasFunction(0x380A90u)) {
        auto targetFn = runtime->lookupFunction(0x380A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380B8Cu; }
        if (ctx->pc != 0x380B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380A90_0x380a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380B8Cu; }
        if (ctx->pc != 0x380B8Cu) { return; }
    }
    ctx->pc = 0x380B8Cu;
label_380b8c:
    // 0x380b8c: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x380b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x380b90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x380b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x380b94: 0xae0300b8  sw          $v1, 0xB8($s0)
    ctx->pc = 0x380b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
    // 0x380b98: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x380b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x380b9c: 0x58600020  blezl       $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x380B9Cu;
    {
        const bool branch_taken_0x380b9c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x380b9c) {
            ctx->pc = 0x380BA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x380B9Cu;
            // 0x380ba0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x380C20u;
            goto label_380c20;
        }
    }
    ctx->pc = 0x380BA4u;
    // 0x380ba4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x380ba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x380ba8: 0x0  nop
    ctx->pc = 0x380ba8u;
    // NOP
    // 0x380bac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x380bacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x380bb0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x380bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x380bb4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x380bb4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x380bb8: 0x0  nop
    ctx->pc = 0x380bb8u;
    // NOP
    // 0x380bbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x380bbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x380bc0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x380bc0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x380bc4: 0x0  nop
    ctx->pc = 0x380bc4u;
    // NOP
    // 0x380bc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x380bc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x380bcc: 0x0  nop
    ctx->pc = 0x380bccu;
    // NOP
    // 0x380bd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x380bd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x380bd4: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x380BD4u;
    {
        const bool branch_taken_0x380bd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x380bd4) {
            ctx->pc = 0x380C1Cu;
            goto label_380c1c;
        }
    }
    ctx->pc = 0x380BDCu;
    // 0x380bdc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x380bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x380be0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x380be0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x380be4: 0x0  nop
    ctx->pc = 0x380be4u;
    // NOP
    // 0x380be8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x380be8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x380bec: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x380BECu;
    {
        const bool branch_taken_0x380bec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x380bec) {
            ctx->pc = 0x380BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x380BECu;
            // 0x380bf0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x380C04u;
            goto label_380c04;
        }
    }
    ctx->pc = 0x380BF4u;
    // 0x380bf4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380bf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x380bf8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x380bf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x380bfc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x380BFCu;
    {
        const bool branch_taken_0x380bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380BFCu;
            // 0x380c00: 0xae0400b8  sw          $a0, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380bfc) {
            ctx->pc = 0x380C1Cu;
            goto label_380c1c;
        }
    }
    ctx->pc = 0x380C04u;
label_380c04:
    // 0x380c04: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x380c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x380c08: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380c08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x380c0c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x380c0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x380c10: 0x0  nop
    ctx->pc = 0x380c10u;
    // NOP
    // 0x380c14: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x380c14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x380c18: 0xae0400b8  sw          $a0, 0xB8($s0)
    ctx->pc = 0x380c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 4));
label_380c1c:
    // 0x380c1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x380c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_380c20:
    // 0x380c20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x380c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380c24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x380c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380c28: 0x3e00008  jr          $ra
    ctx->pc = 0x380C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380C28u;
            // 0x380c2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x380C30u;
}
