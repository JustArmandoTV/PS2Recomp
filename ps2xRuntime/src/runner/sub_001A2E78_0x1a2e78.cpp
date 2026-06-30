#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2E78
// Address: 0x1a2e78 - 0x1a3050
void sub_001A2E78_0x1a2e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2E78_0x1a2e78");
#endif

    switch (ctx->pc) {
        case 0x1a2ec8u: goto label_1a2ec8;
        case 0x1a2fd4u: goto label_1a2fd4;
        default: break;
    }

    ctx->pc = 0x1a2e78u;

    // 0x1a2e78: 0x24020120  addiu       $v0, $zero, 0x120
    ctx->pc = 0x1a2e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x1a2e7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2e7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2e80: 0x28a50120  slti        $a1, $a1, 0x120
    ctx->pc = 0x1a2e80u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)288) ? 1 : 0);
    // 0x1a2e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2e88: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1a2e88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1a2e8c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a2e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e90: 0x14a0000e  bnez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A2E90u;
    {
        const bool branch_taken_0x1a2e90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2E90u;
            // 0x1a2e94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e90) {
            ctx->pc = 0x1A2ECCu;
            goto label_1a2ecc;
        }
    }
    ctx->pc = 0x1A2E98u;
    // 0x1a2e98: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x1a2e98u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a2e9c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1a2e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a2ea0: 0x5483000b  bnel        $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A2EA0u;
    {
        const bool branch_taken_0x1a2ea0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a2ea0) {
            ctx->pc = 0x1A2EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2EA0u;
            // 0x1a2ea4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2ED0u;
            goto label_1a2ed0;
        }
    }
    ctx->pc = 0x1A2EA8u;
    // 0x1a2ea8: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x1a2ea8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1a2eac: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2EACu;
    {
        const bool branch_taken_0x1a2eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2eac) {
            ctx->pc = 0x1A2EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2EACu;
            // 0x1a2eb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2ED0u;
            goto label_1a2ed0;
        }
    }
    ctx->pc = 0x1A2EB4u;
    // 0x1a2eb4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1a2eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1a2eb8: 0x24c4011a  addiu       $a0, $a2, 0x11A
    ctx->pc = 0x1a2eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 282));
    // 0x1a2ebc: 0x24a5a948  addiu       $a1, $a1, -0x56B8
    ctx->pc = 0x1a2ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945096));
    // 0x1a2ec0: 0xc04b0e8  jal         func_12C3A0
    ctx->pc = 0x1A2EC0u;
    SET_GPR_U32(ctx, 31, 0x1A2EC8u);
    ctx->pc = 0x1A2EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2EC0u;
            // 0x1a2ec4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C3A0u;
    if (runtime->hasFunction(0x12C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x12C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2EC8u; }
        if (ctx->pc != 0x1A2EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C3A0_0x12c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2EC8u; }
        if (ctx->pc != 0x1A2EC8u) { return; }
    }
    ctx->pc = 0x1A2EC8u;
label_1a2ec8:
    // 0x1a2ec8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a2ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a2ecc:
    // 0x1a2ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2ed0:
    // 0x1a2ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2ED0u;
            // 0x1a2ed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2ED8u;
    // 0x1a2ed8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1a2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1a2edc: 0x28a50012  slti        $a1, $a1, 0x12
    ctx->pc = 0x1a2edcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1a2ee0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1a2ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1a2ee4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a2ee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2ee8: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2EE8u;
    {
        const bool branch_taken_0x1a2ee8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2EE8u;
            // 0x1a2eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ee8) {
            ctx->pc = 0x1A2F0Cu;
            goto label_1a2f0c;
        }
    }
    ctx->pc = 0x1A2EF0u;
    // 0x1a2ef0: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x1a2ef0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a2ef4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1a2ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a2ef8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2EF8u;
    {
        const bool branch_taken_0x1a2ef8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a2ef8) {
            ctx->pc = 0x1A2F0Cu;
            goto label_1a2f0c;
        }
    }
    ctx->pc = 0x1A2F00u;
    // 0x1a2f00: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x1a2f00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1a2f04: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a2f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a2f08: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a2f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a2f0c:
    // 0x1a2f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2F14u;
    // 0x1a2f14: 0x0  nop
    ctx->pc = 0x1a2f14u;
    // NOP
    // 0x1a2f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2f1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2f20: 0x8c822074  lw          $v0, 0x2074($a0)
    ctx->pc = 0x1a2f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8308)));
    // 0x1a2f24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2f28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a2f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2f2c: 0x805cf3e  j           func_173CF8
    ctx->pc = 0x1A2F2Cu;
    ctx->pc = 0x1A2F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2F2Cu;
            // 0x1a2f30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173CF8u;
    if (runtime->hasFunction(0x173CF8u)) {
        auto targetFn = runtime->lookupFunction(0x173CF8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00173CF8_0x173cf8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A2F34u;
    // 0x1a2f34: 0x0  nop
    ctx->pc = 0x1a2f34u;
    // NOP
    // 0x1a2f38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2f3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2f40: 0x8c822074  lw          $v0, 0x2074($a0)
    ctx->pc = 0x1a2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8308)));
    // 0x1a2f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2f48: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a2f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2f4c: 0x805cf98  j           func_173E60
    ctx->pc = 0x1A2F4Cu;
    ctx->pc = 0x1A2F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2F4Cu;
            // 0x1a2f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173E60u;
    {
        auto targetFn = runtime->lookupFunction(0x173E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A2F54u;
    // 0x1a2f54: 0x0  nop
    ctx->pc = 0x1a2f54u;
    // NOP
    // 0x1a2f58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2f5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2f60: 0x8c822074  lw          $v0, 0x2074($a0)
    ctx->pc = 0x1a2f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8308)));
    // 0x1a2f64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2f68: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a2f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2f6c: 0x805d006  j           func_174018
    ctx->pc = 0x1A2F6Cu;
    ctx->pc = 0x1A2F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2F6Cu;
            // 0x1a2f70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00174018_0x174018(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A2F74u;
    // 0x1a2f74: 0x0  nop
    ctx->pc = 0x1a2f74u;
    // NOP
    // 0x1a2f78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2f7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2f80: 0x8c822074  lw          $v0, 0x2074($a0)
    ctx->pc = 0x1a2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8308)));
    // 0x1a2f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2f88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a2f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2f8c: 0x805d032  j           func_1740C8
    ctx->pc = 0x1A2F8Cu;
    ctx->pc = 0x1A2F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2F8Cu;
            // 0x1a2f90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1740C8u;
    {
        auto targetFn = runtime->lookupFunction(0x1740C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A2F94u;
    // 0x1a2f94: 0x0  nop
    ctx->pc = 0x1a2f94u;
    // NOP
    // 0x1a2f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2f9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2fa0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a2fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a2fa4: 0x8c822074  lw          $v0, 0x2074($a0)
    ctx->pc = 0x1a2fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8308)));
    // 0x1a2fa8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1a2fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2fac: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A2FACu;
    {
        const bool branch_taken_0x1a2fac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2FACu;
            // 0x1a2fb0: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fac) {
            ctx->pc = 0x1A3040u;
            goto label_1a3040;
        }
    }
    ctx->pc = 0x1A2FB4u;
    // 0x1a2fb4: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2FB4u;
    {
        const bool branch_taken_0x1a2fb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A2FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2FB4u;
            // 0x1a2fb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fb4) {
            ctx->pc = 0x1A2FC8u;
            goto label_1a2fc8;
        }
    }
    ctx->pc = 0x1A2FBCu;
    // 0x1a2fbc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1A2FBCu;
    {
        const bool branch_taken_0x1a2fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2FBCu;
            // 0x1a2fc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fbc) {
            ctx->pc = 0x1A302Cu;
            goto label_1a302c;
        }
    }
    ctx->pc = 0x1A2FC4u;
    // 0x1a2fc4: 0x0  nop
    ctx->pc = 0x1a2fc4u;
    // NOP
label_1a2fc8:
    // 0x1a2fc8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1a2fc8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2fcc: 0xc047810  jal         func_11E040
    ctx->pc = 0x1A2FCCu;
    SET_GPR_U32(ctx, 31, 0x1A2FD4u);
    ctx->pc = 0x1A2FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2FCCu;
            // 0x1a2fd0: 0x46806320  cvt.s.w     $f12, $f12 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E040u;
    if (runtime->hasFunction(0x11E040u)) {
        auto targetFn = runtime->lookupFunction(0x11E040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2FD4u; }
        if (ctx->pc != 0x1A2FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E040_0x11e040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2FD4u; }
        if (ctx->pc != 0x1A2FD4u) { return; }
    }
    ctx->pc = 0x1A2FD4u;
label_1a2fd4:
    // 0x1a2fd4: 0x3c0140dd  lui         $at, 0x40DD
    ctx->pc = 0x1a2fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16605 << 16));
    // 0x1a2fd8: 0x34210c54  ori         $at, $at, 0xC54
    ctx->pc = 0x1a2fd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3156);
    // 0x1a2fdc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a2fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a2fe0: 0x3c0144d8  lui         $at, 0x44D8
    ctx->pc = 0x1a2fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17624 << 16));
    // 0x1a2fe4: 0x3421677d  ori         $at, $at, 0x677D
    ctx->pc = 0x1a2fe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26493);
    // 0x1a2fe8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a2fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a2fec: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1a2fecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1a2ff0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1a2ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1a2ff4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a2ff4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a2ff8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a2ff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a2ffc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1a2ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1a3000: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1a3000u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a3004: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a3004u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1a3008: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1a3008u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a300c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a300cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a3010: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1a3010u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1a3014: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1a3014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1a3018: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a3018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a301c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a301cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a3020: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a3020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a3024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a3024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a3028: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1a3028u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a302c:
    // 0x1a302c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a302cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3034: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a3034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a3038: 0x805d4b2  j           func_1752C8
    ctx->pc = 0x1A3038u;
    ctx->pc = 0x1A303Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3038u;
            // 0x1a303c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1752C8u;
    if (runtime->hasFunction(0x1752C8u)) {
        auto targetFn = runtime->lookupFunction(0x1752C8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001752C8_0x1752c8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A3040u;
label_1a3040:
    // 0x1a3040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3044: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a3044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a3048: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A304Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3048u;
            // 0x1a304c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3050u;
}
