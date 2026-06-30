#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0AE8
// Address: 0x1a0ae8 - 0x1a0ba0
void sub_001A0AE8_0x1a0ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0AE8_0x1a0ae8");
#endif

    switch (ctx->pc) {
        case 0x1a0b04u: goto label_1a0b04;
        case 0x1a0b50u: goto label_1a0b50;
        case 0x1a0b64u: goto label_1a0b64;
        case 0x1a0b80u: goto label_1a0b80;
        default: break;
    }

    ctx->pc = 0x1a0ae8u;

    // 0x1a0ae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0aec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a0aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a0af0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0af4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a0af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0af8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a0af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a0afc: 0xc067720  jal         func_19DC80
    ctx->pc = 0x1A0AFCu;
    SET_GPR_U32(ctx, 31, 0x1A0B04u);
    ctx->pc = 0x1A0B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0AFCu;
            // 0x1a0b00: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DC80u;
    if (runtime->hasFunction(0x19DC80u)) {
        auto targetFn = runtime->lookupFunction(0x19DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B04u; }
        if (ctx->pc != 0x1A0B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019DC80_0x19dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B04u; }
        if (ctx->pc != 0x1A0B04u) { return; }
    }
    ctx->pc = 0x1A0B04u;
label_1a0b04:
    // 0x1a0b04: 0x8e030560  lw          $v1, 0x560($s0)
    ctx->pc = 0x1a0b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x1a0b08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a0b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0b0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a0b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b14: 0xae06055c  sw          $a2, 0x55C($s0)
    ctx->pc = 0x1a0b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1372), GPR_U32(ctx, 6));
    // 0x1a0b18: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A0B18u;
    {
        const bool branch_taken_0x1a0b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B18u;
            // 0x1a0b1c: 0x2c650003  sltiu       $a1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b18) {
            ctx->pc = 0x1A0B58u;
            goto label_1a0b58;
        }
    }
    ctx->pc = 0x1A0B20u;
    // 0x1a0b20: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0B20u;
    {
        const bool branch_taken_0x1a0b20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B20u;
            // 0x1a0b24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b20) {
            ctx->pc = 0x1A0B38u;
            goto label_1a0b38;
        }
    }
    ctx->pc = 0x1A0B28u;
    // 0x1a0b28: 0x50660007  beql        $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0B28u;
    {
        const bool branch_taken_0x1a0b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1a0b28) {
            ctx->pc = 0x1A0B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B28u;
            // 0x1a0b2c: 0x8e050418  lw          $a1, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A0B48u;
            goto label_1a0b48;
        }
    }
    ctx->pc = 0x1A0B30u;
    // 0x1a0b30: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A0B30u;
    {
        const bool branch_taken_0x1a0b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B30u;
            // 0x1a0b34: 0x8e02057c  lw          $v0, 0x57C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b30) {
            ctx->pc = 0x1A0B84u;
            goto label_1a0b84;
        }
    }
    ctx->pc = 0x1A0B38u;
label_1a0b38:
    // 0x1a0b38: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A0B38u;
    {
        const bool branch_taken_0x1a0b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a0b38) {
            ctx->pc = 0x1A0B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B38u;
            // 0x1a0b3c: 0x8e050418  lw          $a1, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A0B70u;
            goto label_1a0b70;
        }
    }
    ctx->pc = 0x1A0B40u;
    // 0x1a0b40: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A0B40u;
    {
        const bool branch_taken_0x1a0b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B40u;
            // 0x1a0b44: 0x8e02057c  lw          $v0, 0x57C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b40) {
            ctx->pc = 0x1A0B84u;
            goto label_1a0b84;
        }
    }
    ctx->pc = 0x1A0B48u;
label_1a0b48:
    // 0x1a0b48: 0xc0680a2  jal         func_1A0288
    ctx->pc = 0x1A0B48u;
    SET_GPR_U32(ctx, 31, 0x1A0B50u);
    ctx->pc = 0x1A0B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B48u;
            // 0x1a0b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0288u;
    if (runtime->hasFunction(0x1A0288u)) {
        auto targetFn = runtime->lookupFunction(0x1A0288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B50u; }
        if (ctx->pc != 0x1A0B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0288_0x1a0288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B50u; }
        if (ctx->pc != 0x1A0B50u) { return; }
    }
    ctx->pc = 0x1A0B50u;
label_1a0b50:
    // 0x1a0b50: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A0B50u;
    {
        const bool branch_taken_0x1a0b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B50u;
            // 0x1a0b54: 0x8e02057c  lw          $v0, 0x57C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b50) {
            ctx->pc = 0x1A0B84u;
            goto label_1a0b84;
        }
    }
    ctx->pc = 0x1A0B58u;
label_1a0b58:
    // 0x1a0b58: 0x8e050568  lw          $a1, 0x568($s0)
    ctx->pc = 0x1a0b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x1a0b5c: 0xc06813e  jal         func_1A04F8
    ctx->pc = 0x1A0B5Cu;
    SET_GPR_U32(ctx, 31, 0x1A0B64u);
    ctx->pc = 0x1A0B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B5Cu;
            // 0x1a0b60: 0x8e06056c  lw          $a2, 0x56C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A04F8u;
    if (runtime->hasFunction(0x1A04F8u)) {
        auto targetFn = runtime->lookupFunction(0x1A04F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B64u; }
        if (ctx->pc != 0x1A0B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A04F8_0x1a04f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B64u; }
        if (ctx->pc != 0x1A0B64u) { return; }
    }
    ctx->pc = 0x1A0B64u;
label_1a0b64:
    // 0x1a0b64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0B64u;
    {
        const bool branch_taken_0x1a0b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B64u;
            // 0x1a0b68: 0x8e02057c  lw          $v0, 0x57C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b64) {
            ctx->pc = 0x1A0B84u;
            goto label_1a0b84;
        }
    }
    ctx->pc = 0x1A0B6Cu;
    // 0x1a0b6c: 0x0  nop
    ctx->pc = 0x1a0b6cu;
    // NOP
label_1a0b70:
    // 0x1a0b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b74: 0x8e060570  lw          $a2, 0x570($s0)
    ctx->pc = 0x1a0b74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1392)));
    // 0x1a0b78: 0xc068190  jal         func_1A0640
    ctx->pc = 0x1A0B78u;
    SET_GPR_U32(ctx, 31, 0x1A0B80u);
    ctx->pc = 0x1A0B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B78u;
            // 0x1a0b7c: 0x8e070574  lw          $a3, 0x574($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0640u;
    if (runtime->hasFunction(0x1A0640u)) {
        auto targetFn = runtime->lookupFunction(0x1A0640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B80u; }
        if (ctx->pc != 0x1A0B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0640_0x1a0640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B80u; }
        if (ctx->pc != 0x1A0B80u) { return; }
    }
    ctx->pc = 0x1A0B80u;
label_1a0b80:
    // 0x1a0b80: 0x8e02057c  lw          $v0, 0x57C($s0)
    ctx->pc = 0x1a0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1404)));
label_1a0b84:
    // 0x1a0b84: 0xae00055c  sw          $zero, 0x55C($s0)
    ctx->pc = 0x1a0b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1372), GPR_U32(ctx, 0));
    // 0x1a0b88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a0b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a0b8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a0b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a0b90: 0xae02057c  sw          $v0, 0x57C($s0)
    ctx->pc = 0x1a0b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1404), GPR_U32(ctx, 2));
    // 0x1a0b94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a0b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0b98: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0B98u;
            // 0x1a0b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0BA0u;
}
