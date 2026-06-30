#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197A48
// Address: 0x197a48 - 0x197b18
void sub_00197A48_0x197a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197A48_0x197a48");
#endif

    switch (ctx->pc) {
        case 0x197af0u: goto label_197af0;
        case 0x197b00u: goto label_197b00;
        case 0x197b0cu: goto label_197b0c;
        default: break;
    }

    ctx->pc = 0x197a48u;

    // 0x197a48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x197a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x197a4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x197a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x197a50: 0x8c860430  lw          $a2, 0x430($a0)
    ctx->pc = 0x197a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1072)));
    // 0x197a54: 0x10c0002d  beqz        $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x197A54u;
    {
        const bool branch_taken_0x197a54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197A54u;
            // 0x197a58: 0x8c870048  lw          $a3, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a54) {
            ctx->pc = 0x197B0Cu;
            goto label_197b0c;
        }
    }
    ctx->pc = 0x197A5Cu;
    // 0x197a5c: 0x8c820454  lw          $v0, 0x454($a0)
    ctx->pc = 0x197a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1108)));
    // 0x197a60: 0x54c2000b  bnel        $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x197A60u;
    {
        const bool branch_taken_0x197a60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x197a60) {
            ctx->pc = 0x197A64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197A60u;
            // 0x197a64: 0x8c820434  lw          $v0, 0x434($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1076)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197A90u;
            goto label_197a90;
        }
    }
    ctx->pc = 0x197A68u;
    // 0x197a68: 0x8c82045c  lw          $v0, 0x45C($a0)
    ctx->pc = 0x197a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1116)));
    // 0x197a6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197a70: 0x8c840458  lw          $a0, 0x458($a0)
    ctx->pc = 0x197a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1112)));
    // 0x197a74: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x197a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x197a78: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x197a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x197a7c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x197a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x197a80: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x197a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x197a84: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x197A84u;
    {
        const bool branch_taken_0x197a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197A84u;
            // 0x197a88: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a84) {
            ctx->pc = 0x197AE0u;
            goto label_197ae0;
        }
    }
    ctx->pc = 0x197A8Cu;
    // 0x197a8c: 0x0  nop
    ctx->pc = 0x197a8cu;
    // NOP
label_197a90:
    // 0x197a90: 0x54c2000b  bnel        $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x197A90u;
    {
        const bool branch_taken_0x197a90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x197a90) {
            ctx->pc = 0x197A94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197A90u;
            // 0x197a94: 0x8c820444  lw          $v0, 0x444($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1092)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197AC0u;
            goto label_197ac0;
        }
    }
    ctx->pc = 0x197A98u;
    // 0x197a98: 0x8c820440  lw          $v0, 0x440($a0)
    ctx->pc = 0x197a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1088)));
    // 0x197a9c: 0x8c830438  lw          $v1, 0x438($a0)
    ctx->pc = 0x197a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1080)));
    // 0x197aa0: 0x8c84043c  lw          $a0, 0x43C($a0)
    ctx->pc = 0x197aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1084)));
    // 0x197aa4: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x197aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x197aa8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x197aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x197aac: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x197aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x197ab0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x197ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x197ab4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x197AB4u;
    {
        const bool branch_taken_0x197ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197AB4u;
            // 0x197ab8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ab4) {
            ctx->pc = 0x197AE0u;
            goto label_197ae0;
        }
    }
    ctx->pc = 0x197ABCu;
    // 0x197abc: 0x0  nop
    ctx->pc = 0x197abcu;
    // NOP
label_197ac0:
    // 0x197ac0: 0x8c850450  lw          $a1, 0x450($a0)
    ctx->pc = 0x197ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1104)));
    // 0x197ac4: 0x8c830448  lw          $v1, 0x448($a0)
    ctx->pc = 0x197ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1096)));
    // 0x197ac8: 0x8c84044c  lw          $a0, 0x44C($a0)
    ctx->pc = 0x197ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1100)));
    // 0x197acc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x197accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x197ad0: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x197ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x197ad4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x197ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x197ad8: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x197ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x197adc: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x197adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_197ae0:
    // 0x197ae0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x197ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x197ae4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x197ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ae8: 0xc06d29e  jal         func_1B4A78
    ctx->pc = 0x197AE8u;
    SET_GPR_U32(ctx, 31, 0x197AF0u);
    ctx->pc = 0x197AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197AE8u;
            // 0x197aec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A78u;
    if (runtime->hasFunction(0x1B4A78u)) {
        auto targetFn = runtime->lookupFunction(0x1B4A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197AF0u; }
        if (ctx->pc != 0x197AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4A78_0x1b4a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197AF0u; }
        if (ctx->pc != 0x197AF0u) { return; }
    }
    ctx->pc = 0x197AF0u;
label_197af0:
    // 0x197af0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x197AF0u;
    {
        const bool branch_taken_0x197af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197AF0u;
            // 0x197af4: 0x2404fec8  addiu       $a0, $zero, -0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197af0) {
            ctx->pc = 0x197B0Cu;
            goto label_197b0c;
        }
    }
    ctx->pc = 0x197AF8u;
    // 0x197af8: 0xc066dae  jal         func_19B6B8
    ctx->pc = 0x197AF8u;
    SET_GPR_U32(ctx, 31, 0x197B00u);
    ctx->pc = 0x19B6B8u;
    if (runtime->hasFunction(0x19B6B8u)) {
        auto targetFn = runtime->lookupFunction(0x19B6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197B00u; }
        if (ctx->pc != 0x197B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B6B8_0x19b6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197B00u; }
        if (ctx->pc != 0x197B00u) { return; }
    }
    ctx->pc = 0x197B00u;
label_197b00:
    // 0x197b00: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x197b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x197b04: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x197B04u;
    SET_GPR_U32(ctx, 31, 0x197B0Cu);
    ctx->pc = 0x197B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197B04u;
            // 0x197b08: 0x24848610  addiu       $a0, $a0, -0x79F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197B0Cu; }
        if (ctx->pc != 0x197B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197B0Cu; }
        if (ctx->pc != 0x197B0Cu) { return; }
    }
    ctx->pc = 0x197B0Cu;
label_197b0c:
    // 0x197b0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x197b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197b10: 0x3e00008  jr          $ra
    ctx->pc = 0x197B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197B10u;
            // 0x197b14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197B18u;
}
