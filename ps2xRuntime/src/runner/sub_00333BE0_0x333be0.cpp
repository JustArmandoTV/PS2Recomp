#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00333BE0
// Address: 0x333be0 - 0x333d70
void sub_00333BE0_0x333be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333BE0_0x333be0");
#endif

    switch (ctx->pc) {
        case 0x333c60u: goto label_333c60;
        case 0x333c74u: goto label_333c74;
        case 0x333c8cu: goto label_333c8c;
        case 0x333ca0u: goto label_333ca0;
        case 0x333cb8u: goto label_333cb8;
        case 0x333cccu: goto label_333ccc;
        case 0x333ce4u: goto label_333ce4;
        case 0x333cf8u: goto label_333cf8;
        case 0x333d14u: goto label_333d14;
        case 0x333d28u: goto label_333d28;
        case 0x333d40u: goto label_333d40;
        case 0x333d54u: goto label_333d54;
        default: break;
    }

    ctx->pc = 0x333be0u;

    // 0x333be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x333be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x333be4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x333be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x333be8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x333be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x333bec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x333becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x333bf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x333bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x333bf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x333bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333bf8: 0x8c50a348  lw          $s0, -0x5CB8($v0)
    ctx->pc = 0x333bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
    // 0x333bfc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x333bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x333c00: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x333c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x333c04: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x333c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x333c08: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x333c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x333c0c: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x333c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x333c10: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x333c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x333c14: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x333C14u;
    {
        const bool branch_taken_0x333c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x333C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333C14u;
            // 0x333c18: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c14) {
            ctx->pc = 0x333D00u;
            goto label_333d00;
        }
    }
    ctx->pc = 0x333C1Cu;
    // 0x333c1c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x333c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x333c20: 0x5062002c  beql        $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x333C20u;
    {
        const bool branch_taken_0x333c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x333c20) {
            ctx->pc = 0x333C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333C20u;
            // 0x333c24: 0x8e260968  lw          $a2, 0x968($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x333CD4u;
            goto label_333cd4;
        }
    }
    ctx->pc = 0x333C28u;
    // 0x333c28: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x333c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x333c2c: 0x5062001e  beql        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x333C2Cu;
    {
        const bool branch_taken_0x333c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x333c2c) {
            ctx->pc = 0x333C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333C2Cu;
            // 0x333c30: 0x8e260968  lw          $a2, 0x968($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x333CA8u;
            goto label_333ca8;
        }
    }
    ctx->pc = 0x333C34u;
    // 0x333c34: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x333c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x333c38: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x333C38u;
    {
        const bool branch_taken_0x333c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x333c38) {
            ctx->pc = 0x333C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333C38u;
            // 0x333c3c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x333C7Cu;
            goto label_333c7c;
        }
    }
    ctx->pc = 0x333C40u;
    // 0x333c40: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x333c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x333c44: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x333C44u;
    {
        const bool branch_taken_0x333c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x333c44) {
            ctx->pc = 0x333C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333C44u;
            // 0x333c48: 0x8e260968  lw          $a2, 0x968($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x333C54u;
            goto label_333c54;
        }
    }
    ctx->pc = 0x333C4Cu;
    // 0x333c4c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x333C4Cu;
    {
        const bool branch_taken_0x333c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333C4Cu;
            // 0x333c50: 0x8e260968  lw          $a2, 0x968($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c4c) {
            ctx->pc = 0x333D30u;
            goto label_333d30;
        }
    }
    ctx->pc = 0x333C54u;
label_333c54:
    // 0x333c54: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x333c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x333c58: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x333C58u;
    SET_GPR_U32(ctx, 31, 0x333C60u);
    ctx->pc = 0x333C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333C58u;
            // 0x333c5c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333C60u; }
        if (ctx->pc != 0x333C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333C60u; }
        if (ctx->pc != 0x333C60u) { return; }
    }
    ctx->pc = 0x333C60u;
label_333c60:
    // 0x333c60: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x333c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x333c64: 0x26260778  addiu       $a2, $s1, 0x778
    ctx->pc = 0x333c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1912));
    // 0x333c68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x333c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333c6c: 0xc0aa64c  jal         func_2A9930
    ctx->pc = 0x333C6Cu;
    SET_GPR_U32(ctx, 31, 0x333C74u);
    ctx->pc = 0x333C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333C6Cu;
            // 0x333c70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9930u;
    if (runtime->hasFunction(0x2A9930u)) {
        auto targetFn = runtime->lookupFunction(0x2A9930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333C74u; }
        if (ctx->pc != 0x333C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9930_0x2a9930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333C74u; }
        if (ctx->pc != 0x333C74u) { return; }
    }
    ctx->pc = 0x333C74u;
label_333c74:
    // 0x333c74: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x333C74u;
    {
        const bool branch_taken_0x333c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333C74u;
            // 0x333c78: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c74) {
            ctx->pc = 0x333D58u;
            goto label_333d58;
        }
    }
    ctx->pc = 0x333C7Cu;
label_333c7c:
    // 0x333c7c: 0x24050067  addiu       $a1, $zero, 0x67
    ctx->pc = 0x333c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x333c80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x333c80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333c84: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x333C84u;
    SET_GPR_U32(ctx, 31, 0x333C8Cu);
    ctx->pc = 0x333C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333C84u;
            // 0x333c88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333C8Cu; }
        if (ctx->pc != 0x333C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333C8Cu; }
        if (ctx->pc != 0x333C8Cu) { return; }
    }
    ctx->pc = 0x333C8Cu;
label_333c8c:
    // 0x333c8c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x333c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x333c90: 0x26260778  addiu       $a2, $s1, 0x778
    ctx->pc = 0x333c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1912));
    // 0x333c94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x333c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333c98: 0xc0aa64c  jal         func_2A9930
    ctx->pc = 0x333C98u;
    SET_GPR_U32(ctx, 31, 0x333CA0u);
    ctx->pc = 0x333C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333C98u;
            // 0x333c9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9930u;
    if (runtime->hasFunction(0x2A9930u)) {
        auto targetFn = runtime->lookupFunction(0x2A9930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333CA0u; }
        if (ctx->pc != 0x333CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9930_0x2a9930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333CA0u; }
        if (ctx->pc != 0x333CA0u) { return; }
    }
    ctx->pc = 0x333CA0u;
label_333ca0:
    // 0x333ca0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x333CA0u;
    {
        const bool branch_taken_0x333ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333ca0) {
            ctx->pc = 0x333D54u;
            goto label_333d54;
        }
    }
    ctx->pc = 0x333CA8u;
label_333ca8:
    // 0x333ca8: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x333ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x333cac: 0x8e270780  lw          $a3, 0x780($s1)
    ctx->pc = 0x333cacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1920)));
    // 0x333cb0: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x333CB0u;
    SET_GPR_U32(ctx, 31, 0x333CB8u);
    ctx->pc = 0x333CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333CB0u;
            // 0x333cb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333CB8u; }
        if (ctx->pc != 0x333CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333CB8u; }
        if (ctx->pc != 0x333CB8u) { return; }
    }
    ctx->pc = 0x333CB8u;
label_333cb8:
    // 0x333cb8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x333cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x333cbc: 0x26260778  addiu       $a2, $s1, 0x778
    ctx->pc = 0x333cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1912));
    // 0x333cc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x333cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333cc4: 0xc0aa64c  jal         func_2A9930
    ctx->pc = 0x333CC4u;
    SET_GPR_U32(ctx, 31, 0x333CCCu);
    ctx->pc = 0x333CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333CC4u;
            // 0x333cc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9930u;
    if (runtime->hasFunction(0x2A9930u)) {
        auto targetFn = runtime->lookupFunction(0x2A9930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333CCCu; }
        if (ctx->pc != 0x333CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9930_0x2a9930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333CCCu; }
        if (ctx->pc != 0x333CCCu) { return; }
    }
    ctx->pc = 0x333CCCu;
label_333ccc:
    // 0x333ccc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x333CCCu;
    {
        const bool branch_taken_0x333ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333ccc) {
            ctx->pc = 0x333D54u;
            goto label_333d54;
        }
    }
    ctx->pc = 0x333CD4u;
label_333cd4:
    // 0x333cd4: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x333cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x333cd8: 0x8e270780  lw          $a3, 0x780($s1)
    ctx->pc = 0x333cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1920)));
    // 0x333cdc: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x333CDCu;
    SET_GPR_U32(ctx, 31, 0x333CE4u);
    ctx->pc = 0x333CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333CDCu;
            // 0x333ce0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333CE4u; }
        if (ctx->pc != 0x333CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333CE4u; }
        if (ctx->pc != 0x333CE4u) { return; }
    }
    ctx->pc = 0x333CE4u;
label_333ce4:
    // 0x333ce4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x333ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x333ce8: 0x26260778  addiu       $a2, $s1, 0x778
    ctx->pc = 0x333ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1912));
    // 0x333cec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x333cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333cf0: 0xc0aa64c  jal         func_2A9930
    ctx->pc = 0x333CF0u;
    SET_GPR_U32(ctx, 31, 0x333CF8u);
    ctx->pc = 0x333CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333CF0u;
            // 0x333cf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9930u;
    if (runtime->hasFunction(0x2A9930u)) {
        auto targetFn = runtime->lookupFunction(0x2A9930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333CF8u; }
        if (ctx->pc != 0x333CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9930_0x2a9930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333CF8u; }
        if (ctx->pc != 0x333CF8u) { return; }
    }
    ctx->pc = 0x333CF8u;
label_333cf8:
    // 0x333cf8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x333CF8u;
    {
        const bool branch_taken_0x333cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333cf8) {
            ctx->pc = 0x333D54u;
            goto label_333d54;
        }
    }
    ctx->pc = 0x333D00u;
label_333d00:
    // 0x333d00: 0x8e260968  lw          $a2, 0x968($s1)
    ctx->pc = 0x333d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
    // 0x333d04: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x333d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x333d08: 0x8e270780  lw          $a3, 0x780($s1)
    ctx->pc = 0x333d08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1920)));
    // 0x333d0c: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x333D0Cu;
    SET_GPR_U32(ctx, 31, 0x333D14u);
    ctx->pc = 0x333D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333D0Cu;
            // 0x333d10: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333D14u; }
        if (ctx->pc != 0x333D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333D14u; }
        if (ctx->pc != 0x333D14u) { return; }
    }
    ctx->pc = 0x333D14u;
label_333d14:
    // 0x333d14: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x333d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x333d18: 0x26260778  addiu       $a2, $s1, 0x778
    ctx->pc = 0x333d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1912));
    // 0x333d1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x333d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333d20: 0xc0aa64c  jal         func_2A9930
    ctx->pc = 0x333D20u;
    SET_GPR_U32(ctx, 31, 0x333D28u);
    ctx->pc = 0x333D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333D20u;
            // 0x333d24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9930u;
    if (runtime->hasFunction(0x2A9930u)) {
        auto targetFn = runtime->lookupFunction(0x2A9930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333D28u; }
        if (ctx->pc != 0x333D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9930_0x2a9930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333D28u; }
        if (ctx->pc != 0x333D28u) { return; }
    }
    ctx->pc = 0x333D28u;
label_333d28:
    // 0x333d28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x333D28u;
    {
        const bool branch_taken_0x333d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333d28) {
            ctx->pc = 0x333D54u;
            goto label_333d54;
        }
    }
    ctx->pc = 0x333D30u;
label_333d30:
    // 0x333d30: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x333d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x333d34: 0x8e270780  lw          $a3, 0x780($s1)
    ctx->pc = 0x333d34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1920)));
    // 0x333d38: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x333D38u;
    SET_GPR_U32(ctx, 31, 0x333D40u);
    ctx->pc = 0x333D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333D38u;
            // 0x333d3c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333D40u; }
        if (ctx->pc != 0x333D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333D40u; }
        if (ctx->pc != 0x333D40u) { return; }
    }
    ctx->pc = 0x333D40u;
label_333d40:
    // 0x333d40: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x333d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x333d44: 0x26260778  addiu       $a2, $s1, 0x778
    ctx->pc = 0x333d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1912));
    // 0x333d48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x333d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333d4c: 0xc0aa64c  jal         func_2A9930
    ctx->pc = 0x333D4Cu;
    SET_GPR_U32(ctx, 31, 0x333D54u);
    ctx->pc = 0x333D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333D4Cu;
            // 0x333d50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9930u;
    if (runtime->hasFunction(0x2A9930u)) {
        auto targetFn = runtime->lookupFunction(0x2A9930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333D54u; }
        if (ctx->pc != 0x333D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9930_0x2a9930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333D54u; }
        if (ctx->pc != 0x333D54u) { return; }
    }
    ctx->pc = 0x333D54u;
label_333d54:
    // 0x333d54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x333d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_333d58:
    // 0x333d58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x333d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333d5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x333d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333d60: 0x3e00008  jr          $ra
    ctx->pc = 0x333D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333D60u;
            // 0x333d64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x333D68u;
    // 0x333d68: 0x0  nop
    ctx->pc = 0x333d68u;
    // NOP
    // 0x333d6c: 0x0  nop
    ctx->pc = 0x333d6cu;
    // NOP
}
