#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00380A90
// Address: 0x380a90 - 0x380b70
void sub_00380A90_0x380a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380A90_0x380a90");
#endif

    switch (ctx->pc) {
        case 0x380b54u: goto label_380b54;
        default: break;
    }

    ctx->pc = 0x380a90u;

    // 0x380a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x380a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x380a94: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x380a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x380a98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x380a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x380a9c: 0x8c8500e0  lw          $a1, 0xE0($a0)
    ctx->pc = 0x380a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x380aa0: 0x8c830098  lw          $v1, 0x98($a0)
    ctx->pc = 0x380aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x380aa4: 0x8c460e84  lw          $a2, 0xE84($v0)
    ctx->pc = 0x380aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
    // 0x380aa8: 0xc4a10d3c  lwc1        $f1, 0xD3C($a1)
    ctx->pc = 0x380aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x380aac: 0xc4a00d40  lwc1        $f0, 0xD40($a1)
    ctx->pc = 0x380aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x380ab0: 0x2c610011  sltiu       $at, $v1, 0x11
    ctx->pc = 0x380ab0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x380ab4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x380ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x380ab8: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x380ab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x380abc: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x380ABCu;
    {
        const bool branch_taken_0x380abc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x380AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380ABCu;
            // 0x380ac0: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x380abc) {
            ctx->pc = 0x380B60u;
            goto label_380b60;
        }
    }
    ctx->pc = 0x380AC4u;
    // 0x380ac4: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x380ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x380ac8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x380ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x380acc: 0x24845a30  addiu       $a0, $a0, 0x5A30
    ctx->pc = 0x380accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23088));
    // 0x380ad0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x380ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x380ad4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x380ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x380ad8: 0x600008  jr          $v1
    ctx->pc = 0x380AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x380AE0u: goto label_380ae0;
            case 0x380AE8u: goto label_380ae8;
            case 0x380AF0u: goto label_380af0;
            case 0x380AF8u: goto label_380af8;
            case 0x380B08u: goto label_380b08;
            case 0x380B10u: goto label_380b10;
            case 0x380B18u: goto label_380b18;
            case 0x380B30u: goto label_380b30;
            case 0x380B4Cu: goto label_380b4c;
            case 0x380B5Cu: goto label_380b5c;
            case 0x380B60u: goto label_380b60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x380AE0u;
label_380ae0:
    // 0x380ae0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x380AE0u;
    {
        const bool branch_taken_0x380ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380AE0u;
            // 0x380ae4: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380ae0) {
            ctx->pc = 0x380B60u;
            goto label_380b60;
        }
    }
    ctx->pc = 0x380AE8u;
label_380ae8:
    // 0x380ae8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x380AE8u;
    {
        const bool branch_taken_0x380ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380AE8u;
            // 0x380aec: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380ae8) {
            ctx->pc = 0x380B60u;
            goto label_380b60;
        }
    }
    ctx->pc = 0x380AF0u;
label_380af0:
    // 0x380af0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x380AF0u;
    {
        const bool branch_taken_0x380af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380AF0u;
            // 0x380af4: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380af0) {
            ctx->pc = 0x380B60u;
            goto label_380b60;
        }
    }
    ctx->pc = 0x380AF8u;
label_380af8:
    // 0x380af8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380af8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x380afc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x380afcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x380b00: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x380B00u;
    {
        const bool branch_taken_0x380b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380B00u;
            // 0x380b04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380b00) {
            ctx->pc = 0x380B64u;
            goto label_380b64;
        }
    }
    ctx->pc = 0x380B08u;
label_380b08:
    // 0x380b08: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x380B08u;
    {
        const bool branch_taken_0x380b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380B08u;
            // 0x380b0c: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380b08) {
            ctx->pc = 0x380B60u;
            goto label_380b60;
        }
    }
    ctx->pc = 0x380B10u;
label_380b10:
    // 0x380b10: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x380B10u;
    {
        const bool branch_taken_0x380b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380B10u;
            // 0x380b14: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380b10) {
            ctx->pc = 0x380B60u;
            goto label_380b60;
        }
    }
    ctx->pc = 0x380B18u;
label_380b18:
    // 0x380b18: 0xc4c00a8c  lwc1        $f0, 0xA8C($a2)
    ctx->pc = 0x380b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 2700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x380b1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x380b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x380b20: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380b20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x380b24: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x380b24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x380b28: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x380B28u;
    {
        const bool branch_taken_0x380b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x380b28) {
            ctx->pc = 0x380B60u;
            goto label_380b60;
        }
    }
    ctx->pc = 0x380B30u;
label_380b30:
    // 0x380b30: 0x8ca30d20  lw          $v1, 0xD20($a1)
    ctx->pc = 0x380b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3360)));
    // 0x380b34: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x380B34u;
    {
        const bool branch_taken_0x380b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x380b34) {
            ctx->pc = 0x380B60u;
            goto label_380b60;
        }
    }
    ctx->pc = 0x380B3Cu;
    // 0x380b3c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x380b3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x380b40: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x380b40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x380b44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x380B44u;
    {
        const bool branch_taken_0x380b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x380b44) {
            ctx->pc = 0x380B60u;
            goto label_380b60;
        }
    }
    ctx->pc = 0x380B4Cu;
label_380b4c:
    // 0x380b4c: 0xc0db60c  jal         func_36D830
    ctx->pc = 0x380B4Cu;
    SET_GPR_U32(ctx, 31, 0x380B54u);
    ctx->pc = 0x380B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x380B4Cu;
            // 0x380b50: 0x8ca40cc8  lw          $a0, 0xCC8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D830u;
    if (runtime->hasFunction(0x36D830u)) {
        auto targetFn = runtime->lookupFunction(0x36D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380B54u; }
        if (ctx->pc != 0x380B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D830_0x36d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380B54u; }
        if (ctx->pc != 0x380B54u) { return; }
    }
    ctx->pc = 0x380B54u;
label_380b54:
    // 0x380b54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x380B54u;
    {
        const bool branch_taken_0x380b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x380b54) {
            ctx->pc = 0x380B60u;
            goto label_380b60;
        }
    }
    ctx->pc = 0x380B5Cu;
label_380b5c:
    // 0x380b5c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x380b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_380b60:
    // 0x380b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x380b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_380b64:
    // 0x380b64: 0x3e00008  jr          $ra
    ctx->pc = 0x380B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380B64u;
            // 0x380b68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x380B6Cu;
    // 0x380b6c: 0x0  nop
    ctx->pc = 0x380b6cu;
    // NOP
}
