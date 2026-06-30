#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0C88
// Address: 0x1c0c88 - 0x1c0ed8
void sub_001C0C88_0x1c0c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0C88_0x1c0c88");
#endif

    switch (ctx->pc) {
        case 0x1c0cbcu: goto label_1c0cbc;
        case 0x1c0cd8u: goto label_1c0cd8;
        case 0x1c0cfcu: goto label_1c0cfc;
        case 0x1c0e40u: goto label_1c0e40;
        case 0x1c0e54u: goto label_1c0e54;
        default: break;
    }

    ctx->pc = 0x1c0c88u;

    // 0x1c0c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0c8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0c90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c94: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C0C94u;
    {
        const bool branch_taken_0x1c0c94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C94u;
            // 0x1c0c98: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c94) {
            ctx->pc = 0x1C0CC4u;
            goto label_1c0cc4;
        }
    }
    ctx->pc = 0x1C0C9Cu;
    // 0x1c0c9c: 0x86020034  lh          $v0, 0x34($s0)
    ctx->pc = 0x1c0c9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c0ca0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0CA0u;
    {
        const bool branch_taken_0x1c0ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CA0u;
            // 0x1c0ca4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ca0) {
            ctx->pc = 0x1C0CC4u;
            goto label_1c0cc4;
        }
    }
    ctx->pc = 0x1C0CA8u;
    // 0x1c0ca8: 0x86030038  lh          $v1, 0x38($s0)
    ctx->pc = 0x1c0ca8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1c0cac: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0CACu;
    {
        const bool branch_taken_0x1c0cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0cac) {
            ctx->pc = 0x1C0CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CACu;
            // 0x1c0cb0: 0xa6000036  sh          $zero, 0x36($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0CC0u;
            goto label_1c0cc0;
        }
    }
    ctx->pc = 0x1C0CB4u;
    // 0x1c0cb4: 0xc070492  jal         func_1C1248
    ctx->pc = 0x1C0CB4u;
    SET_GPR_U32(ctx, 31, 0x1C0CBCu);
    ctx->pc = 0x1C1248u;
    if (runtime->hasFunction(0x1C1248u)) {
        auto targetFn = runtime->lookupFunction(0x1C1248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CBCu; }
        if (ctx->pc != 0x1C0CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1248_0x1c1248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CBCu; }
        if (ctx->pc != 0x1C0CBCu) { return; }
    }
    ctx->pc = 0x1C0CBCu;
label_1c0cbc:
    // 0x1c0cbc: 0xa6000036  sh          $zero, 0x36($s0)
    ctx->pc = 0x1c0cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 0));
label_1c0cc0:
    // 0x1c0cc0: 0xa6000034  sh          $zero, 0x34($s0)
    ctx->pc = 0x1c0cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
label_1c0cc4:
    // 0x1c0cc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0cc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c0cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CCCu;
            // 0x1c0cd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0CD4u;
    // 0x1c0cd4: 0x0  nop
    ctx->pc = 0x1c0cd4u;
    // NOP
label_1c0cd8:
    // 0x1c0cd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c0cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c0cdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c0cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c0ce0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c0ce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0ce8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c0ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0cec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c0cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c0cf0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c0cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c0cf4: 0xc071236  jal         func_1C48D8
    ctx->pc = 0x1C0CF4u;
    SET_GPR_U32(ctx, 31, 0x1C0CFCu);
    ctx->pc = 0x1C0CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CF4u;
            // 0x1c0cf8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CFCu; }
        if (ctx->pc != 0x1C0CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CFCu; }
        if (ctx->pc != 0x1C0CFCu) { return; }
    }
    ctx->pc = 0x1C0CFCu;
label_1c0cfc:
    // 0x1c0cfc: 0x5620000e  bnel        $s1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1C0CFCu;
    {
        const bool branch_taken_0x1c0cfc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0cfc) {
            ctx->pc = 0x1C0D00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0CFCu;
            // 0x1c0d00: 0x86230034  lh          $v1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0D38u;
            goto label_1c0d38;
        }
    }
    ctx->pc = 0x1C0D04u;
    // 0x1c0d04: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c0d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c0d08: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c0d08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c0d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0d10: 0x2484b8c8  addiu       $a0, $a0, -0x4738
    ctx->pc = 0x1c0d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949064));
    // 0x1c0d14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0d14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0d18: 0x24c6b8d8  addiu       $a2, $a2, -0x4728
    ctx->pc = 0x1c0d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949080));
    // 0x1c0d1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c0d1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0d20: 0x2405012e  addiu       $a1, $zero, 0x12E
    ctx->pc = 0x1c0d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    // 0x1c0d24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c0d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c0d28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c0d28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d2c: 0x2408ff9b  addiu       $t0, $zero, -0x65
    ctx->pc = 0x1c0d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
    // 0x1c0d30: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C0D30u;
    ctx->pc = 0x1C0D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D30u;
            // 0x1c0d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C0D38u;
label_1c0d38:
    // 0x1c0d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0d3c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C0D3Cu;
    {
        const bool branch_taken_0x1c0d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D3Cu;
            // 0x1c0d40: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d3c) {
            ctx->pc = 0x1C0D78u;
            goto label_1c0d78;
        }
    }
    ctx->pc = 0x1C0D44u;
    // 0x1c0d44: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c0d44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c0d48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0d4c: 0x2484b8c8  addiu       $a0, $a0, -0x4738
    ctx->pc = 0x1c0d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949064));
    // 0x1c0d50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0d50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0d54: 0x24c6b8d8  addiu       $a2, $a2, -0x4728
    ctx->pc = 0x1c0d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949080));
    // 0x1c0d58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c0d58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0d5c: 0x24050131  addiu       $a1, $zero, 0x131
    ctx->pc = 0x1c0d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x1c0d60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c0d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c0d64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c0d64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d68: 0x2408ff9b  addiu       $t0, $zero, -0x65
    ctx->pc = 0x1c0d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
    // 0x1c0d6c: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C0D6Cu;
    ctx->pc = 0x1C0D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D6Cu;
            // 0x1c0d70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C0D74u;
    // 0x1c0d74: 0x0  nop
    ctx->pc = 0x1c0d74u;
    // NOP
label_1c0d78:
    // 0x1c0d78: 0x12030013  beq         $s0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C0D78u;
    {
        const bool branch_taken_0x1c0d78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C0D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D78u;
            // 0x1c0d7c: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d78) {
            ctx->pc = 0x1C0DC8u;
            goto label_1c0dc8;
        }
    }
    ctx->pc = 0x1C0D80u;
    // 0x1c0d80: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C0D80u;
    {
        const bool branch_taken_0x1c0d80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D80u;
            // 0x1c0d84: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d80) {
            ctx->pc = 0x1C0DDCu;
            goto label_1c0ddc;
        }
    }
    ctx->pc = 0x1C0D88u;
    // 0x1c0d88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c0d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0d8c: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C0D8Cu;
    {
        const bool branch_taken_0x1c0d8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0D8Cu;
            // 0x1c0d90: 0x3c060064  lui         $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d8c) {
            ctx->pc = 0x1C0DD8u;
            goto label_1c0dd8;
        }
    }
    ctx->pc = 0x1C0D94u;
    // 0x1c0d94: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c0d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c0d98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0d9c: 0x2484b8c8  addiu       $a0, $a0, -0x4738
    ctx->pc = 0x1c0d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949064));
    // 0x1c0da0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0da0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0da4: 0x24c6b8d8  addiu       $a2, $a2, -0x4728
    ctx->pc = 0x1c0da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949080));
    // 0x1c0da8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c0da8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0dac: 0x24050144  addiu       $a1, $zero, 0x144
    ctx->pc = 0x1c0dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
    // 0x1c0db0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c0db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c0db4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c0db4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0db8: 0x2408ff33  addiu       $t0, $zero, -0xCD
    ctx->pc = 0x1c0db8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967091));
    // 0x1c0dbc: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C0DBCu;
    ctx->pc = 0x1C0DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0DBCu;
            // 0x1c0dc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C0DC4u;
    // 0x1c0dc4: 0x0  nop
    ctx->pc = 0x1c0dc4u;
    // NOP
label_1c0dc8:
    // 0x1c0dc8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1c0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1c0dcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0DCCu;
    {
        const bool branch_taken_0x1c0dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0DCCu;
            // 0x1c0dd0: 0x521821  addu        $v1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0dcc) {
            ctx->pc = 0x1C0DDCu;
            goto label_1c0ddc;
        }
    }
    ctx->pc = 0x1C0DD4u;
    // 0x1c0dd4: 0x0  nop
    ctx->pc = 0x1c0dd4u;
    // NOP
label_1c0dd8:
    // 0x1c0dd8: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x1c0dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1c0ddc:
    // 0x1c0ddc: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0DDCu;
    {
        const bool branch_taken_0x1c0ddc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C0DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0DDCu;
            // 0x1c0de0: 0x83102a  slt         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ddc) {
            ctx->pc = 0x1C0DECu;
            goto label_1c0dec;
        }
    }
    ctx->pc = 0x1C0DE4u;
    // 0x1c0de4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1C0DE4u;
    {
        const bool branch_taken_0x1c0de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0de4) {
            ctx->pc = 0x1C0DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0DE4u;
            // 0x1c0de8: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0E20u;
            goto label_1c0e20;
        }
    }
    ctx->pc = 0x1C0DECu;
label_1c0dec:
    // 0x1c0dec: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c0decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c0df0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c0df0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c0df4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0df8: 0x2484b8c8  addiu       $a0, $a0, -0x4738
    ctx->pc = 0x1c0df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949064));
    // 0x1c0dfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0dfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0e00: 0x24c6b8d8  addiu       $a2, $a2, -0x4728
    ctx->pc = 0x1c0e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949080));
    // 0x1c0e04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c0e04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0e08: 0x24050149  addiu       $a1, $zero, 0x149
    ctx->pc = 0x1c0e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x1c0e0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c0e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c0e10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c0e10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e14: 0x2408ff33  addiu       $t0, $zero, -0xCD
    ctx->pc = 0x1c0e14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967091));
    // 0x1c0e18: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C0E18u;
    ctx->pc = 0x1C0E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E18u;
            // 0x1c0e1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C0E20u;
label_1c0e20:
    // 0x1c0e20: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c0e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0e24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0e28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0e28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0e2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c0e2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0e30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c0e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c0e34: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E34u;
            // 0x1c0e38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0E3Cu;
    // 0x1c0e3c: 0x0  nop
    ctx->pc = 0x1c0e3cu;
    // NOP
label_1c0e40:
    // 0x1c0e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0e44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0e48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c0e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c0e4c: 0xc071236  jal         func_1C48D8
    ctx->pc = 0x1C0E4Cu;
    SET_GPR_U32(ctx, 31, 0x1C0E54u);
    ctx->pc = 0x1C0E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E4Cu;
            // 0x1c0e50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0E54u; }
        if (ctx->pc != 0x1C0E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0E54u; }
        if (ctx->pc != 0x1C0E54u) { return; }
    }
    ctx->pc = 0x1C0E54u;
label_1c0e54:
    // 0x1c0e54: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c0e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c0e58: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c0e58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c0e5c: 0x2484b8c8  addiu       $a0, $a0, -0x4738
    ctx->pc = 0x1c0e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949064));
    // 0x1c0e60: 0x24c6b8e8  addiu       $a2, $a2, -0x4718
    ctx->pc = 0x1c0e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949096));
    // 0x1c0e64: 0x2405015c  addiu       $a1, $zero, 0x15C
    ctx->pc = 0x1c0e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x1c0e68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c0e68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e6c: 0x2408ff9b  addiu       $t0, $zero, -0x65
    ctx->pc = 0x1c0e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
    // 0x1c0e70: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0E70u;
    {
        const bool branch_taken_0x1c0e70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E70u;
            // 0x1c0e74: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e70) {
            ctx->pc = 0x1C0E88u;
            goto label_1c0e88;
        }
    }
    ctx->pc = 0x1C0E78u;
    // 0x1c0e78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0e7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c0e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0e80: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C0E80u;
    ctx->pc = 0x1C0E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E80u;
            // 0x1c0e84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C0E88u;
label_1c0e88:
    // 0x1c0e88: 0x86020034  lh          $v0, 0x34($s0)
    ctx->pc = 0x1c0e88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c0e8c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C0E8Cu;
    {
        const bool branch_taken_0x1c0e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C0E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E8Cu;
            // 0x1c0e90: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e8c) {
            ctx->pc = 0x1C0EC0u;
            goto label_1c0ec0;
        }
    }
    ctx->pc = 0x1C0E94u;
    // 0x1c0e94: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c0e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c0e98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0e98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0e9c: 0x2484b8c8  addiu       $a0, $a0, -0x4738
    ctx->pc = 0x1c0e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949064));
    // 0x1c0ea0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c0ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0ea4: 0x24c6b8e8  addiu       $a2, $a2, -0x4718
    ctx->pc = 0x1c0ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949096));
    // 0x1c0ea8: 0x2405015f  addiu       $a1, $zero, 0x15F
    ctx->pc = 0x1c0ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1c0eac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c0eacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0eb0: 0x2408ff9b  addiu       $t0, $zero, -0x65
    ctx->pc = 0x1c0eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
    // 0x1c0eb4: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C0EB4u;
    ctx->pc = 0x1C0EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0EB4u;
            // 0x1c0eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C0EBCu;
    // 0x1c0ebc: 0x0  nop
    ctx->pc = 0x1c0ebcu;
    // NOP
label_1c0ec0:
    // 0x1c0ec0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1c0ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c0ec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0ec8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c0ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0ECCu;
            // 0x1c0ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0ED4u;
    // 0x1c0ed4: 0x0  nop
    ctx->pc = 0x1c0ed4u;
    // NOP
}
