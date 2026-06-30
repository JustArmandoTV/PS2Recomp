#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186E28
// Address: 0x186e28 - 0x186f38
void sub_00186E28_0x186e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186E28_0x186e28");
#endif

    switch (ctx->pc) {
        case 0x186e28u: goto label_186e28;
        case 0x186e2cu: goto label_186e2c;
        case 0x186e30u: goto label_186e30;
        case 0x186e34u: goto label_186e34;
        case 0x186e38u: goto label_186e38;
        case 0x186e3cu: goto label_186e3c;
        case 0x186e40u: goto label_186e40;
        case 0x186e44u: goto label_186e44;
        case 0x186e48u: goto label_186e48;
        case 0x186e4cu: goto label_186e4c;
        case 0x186e50u: goto label_186e50;
        case 0x186e54u: goto label_186e54;
        case 0x186e58u: goto label_186e58;
        case 0x186e5cu: goto label_186e5c;
        case 0x186e60u: goto label_186e60;
        case 0x186e64u: goto label_186e64;
        case 0x186e68u: goto label_186e68;
        case 0x186e6cu: goto label_186e6c;
        case 0x186e70u: goto label_186e70;
        case 0x186e74u: goto label_186e74;
        case 0x186e78u: goto label_186e78;
        case 0x186e7cu: goto label_186e7c;
        case 0x186e80u: goto label_186e80;
        case 0x186e84u: goto label_186e84;
        case 0x186e88u: goto label_186e88;
        case 0x186e8cu: goto label_186e8c;
        case 0x186e90u: goto label_186e90;
        case 0x186e94u: goto label_186e94;
        case 0x186e98u: goto label_186e98;
        case 0x186e9cu: goto label_186e9c;
        case 0x186ea0u: goto label_186ea0;
        case 0x186ea4u: goto label_186ea4;
        case 0x186ea8u: goto label_186ea8;
        case 0x186eacu: goto label_186eac;
        case 0x186eb0u: goto label_186eb0;
        case 0x186eb4u: goto label_186eb4;
        case 0x186eb8u: goto label_186eb8;
        case 0x186ebcu: goto label_186ebc;
        case 0x186ec0u: goto label_186ec0;
        case 0x186ec4u: goto label_186ec4;
        case 0x186ec8u: goto label_186ec8;
        case 0x186eccu: goto label_186ecc;
        case 0x186ed0u: goto label_186ed0;
        case 0x186ed4u: goto label_186ed4;
        case 0x186ed8u: goto label_186ed8;
        case 0x186edcu: goto label_186edc;
        case 0x186ee0u: goto label_186ee0;
        case 0x186ee4u: goto label_186ee4;
        case 0x186ee8u: goto label_186ee8;
        case 0x186eecu: goto label_186eec;
        case 0x186ef0u: goto label_186ef0;
        case 0x186ef4u: goto label_186ef4;
        case 0x186ef8u: goto label_186ef8;
        case 0x186efcu: goto label_186efc;
        case 0x186f00u: goto label_186f00;
        case 0x186f04u: goto label_186f04;
        case 0x186f08u: goto label_186f08;
        case 0x186f0cu: goto label_186f0c;
        case 0x186f10u: goto label_186f10;
        case 0x186f14u: goto label_186f14;
        case 0x186f18u: goto label_186f18;
        case 0x186f1cu: goto label_186f1c;
        case 0x186f20u: goto label_186f20;
        case 0x186f24u: goto label_186f24;
        case 0x186f28u: goto label_186f28;
        case 0x186f2cu: goto label_186f2c;
        case 0x186f30u: goto label_186f30;
        case 0x186f34u: goto label_186f34;
        default: break;
    }

    ctx->pc = 0x186e28u;

label_186e28:
    // 0x186e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_186e2c:
    // 0x186e2c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_186e30:
    if (ctx->pc == 0x186E30u) {
        ctx->pc = 0x186E30u;
            // 0x186e30: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x186E34u;
        goto label_186e34;
    }
    ctx->pc = 0x186E2Cu;
    {
        const bool branch_taken_0x186e2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186E2Cu;
            // 0x186e30: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e2c) {
            ctx->pc = 0x186E48u;
            goto label_186e48;
        }
    }
    ctx->pc = 0x186E34u;
label_186e34:
    // 0x186e34: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x186e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_186e38:
    // 0x186e38: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x186e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_186e3c:
    // 0x186e3c: 0x24847dc0  addiu       $a0, $a0, 0x7DC0
    ctx->pc = 0x186e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32192));
label_186e40:
    // 0x186e40: 0x10000008  b           . + 4 + (0x8 << 2)
label_186e44:
    if (ctx->pc == 0x186E44u) {
        ctx->pc = 0x186E44u;
            // 0x186e44: 0x24a57c90  addiu       $a1, $a1, 0x7C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31888));
        ctx->pc = 0x186E48u;
        goto label_186e48;
    }
    ctx->pc = 0x186E40u;
    {
        const bool branch_taken_0x186e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186E40u;
            // 0x186e44: 0x24a57c90  addiu       $a1, $a1, 0x7C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e40) {
            ctx->pc = 0x186E64u;
            goto label_186e64;
        }
    }
    ctx->pc = 0x186E48u;
label_186e48:
    // 0x186e48: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x186e48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_186e4c:
    // 0x186e4c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_186e50:
    if (ctx->pc == 0x186E50u) {
        ctx->pc = 0x186E50u;
            // 0x186e50: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->pc = 0x186E54u;
        goto label_186e54;
    }
    ctx->pc = 0x186E4Cu;
    {
        const bool branch_taken_0x186e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186e4c) {
            ctx->pc = 0x186E50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186E4Cu;
            // 0x186e50: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x186E78u;
            goto label_186e78;
        }
    }
    ctx->pc = 0x186E54u;
label_186e54:
    // 0x186e54: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x186e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_186e58:
    // 0x186e58: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x186e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_186e5c:
    // 0x186e5c: 0x24847dd0  addiu       $a0, $a0, 0x7DD0
    ctx->pc = 0x186e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32208));
label_186e60:
    // 0x186e60: 0x24a57cc0  addiu       $a1, $a1, 0x7CC0
    ctx->pc = 0x186e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31936));
label_186e64:
    // 0x186e64: 0xc0618a8  jal         func_1862A0
label_186e68:
    if (ctx->pc == 0x186E68u) {
        ctx->pc = 0x186E6Cu;
        goto label_186e6c;
    }
    ctx->pc = 0x186E64u;
    SET_GPR_U32(ctx, 31, 0x186E6Cu);
    ctx->pc = 0x1862A0u;
    if (runtime->hasFunction(0x1862A0u)) {
        auto targetFn = runtime->lookupFunction(0x1862A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E6Cu; }
        if (ctx->pc != 0x186E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001862A0_0x1862a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E6Cu; }
        if (ctx->pc != 0x186E6Cu) { return; }
    }
    ctx->pc = 0x186E6Cu;
label_186e6c:
    // 0x186e6c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_186e70:
    if (ctx->pc == 0x186E70u) {
        ctx->pc = 0x186E70u;
            // 0x186e70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186E74u;
        goto label_186e74;
    }
    ctx->pc = 0x186E6Cu;
    {
        const bool branch_taken_0x186e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186E6Cu;
            // 0x186e70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e6c) {
            ctx->pc = 0x186EE4u;
            goto label_186ee4;
        }
    }
    ctx->pc = 0x186E74u;
label_186e74:
    // 0x186e74: 0x0  nop
    ctx->pc = 0x186e74u;
    // NOP
label_186e78:
    // 0x186e78: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_186e7c:
    if (ctx->pc == 0x186E7Cu) {
        ctx->pc = 0x186E7Cu;
            // 0x186e7c: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x186E80u;
        goto label_186e80;
    }
    ctx->pc = 0x186E78u;
    {
        const bool branch_taken_0x186e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186E78u;
            // 0x186e7c: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e78) {
            ctx->pc = 0x186EA0u;
            goto label_186ea0;
        }
    }
    ctx->pc = 0x186E80u;
label_186e80:
    // 0x186e80: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x186e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_186e84:
    // 0x186e84: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_186e88:
    if (ctx->pc == 0x186E88u) {
        ctx->pc = 0x186E88u;
            // 0x186e88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186E8Cu;
        goto label_186e8c;
    }
    ctx->pc = 0x186E84u;
    {
        const bool branch_taken_0x186e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186e84) {
            ctx->pc = 0x186E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186E84u;
            // 0x186e88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186EE4u;
            goto label_186ee4;
        }
    }
    ctx->pc = 0x186E8Cu;
label_186e8c:
    // 0x186e8c: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x186e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_186e90:
    // 0x186e90: 0x40f809  jalr        $v0
label_186e94:
    if (ctx->pc == 0x186E94u) {
        ctx->pc = 0x186E94u;
            // 0x186e94: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x186E98u;
        goto label_186e98;
    }
    ctx->pc = 0x186E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186E98u);
        ctx->pc = 0x186E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186E90u;
            // 0x186e94: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x186E98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x186E98u; }
            if (ctx->pc != 0x186E98u) { return; }
        }
        }
    }
    ctx->pc = 0x186E98u;
label_186e98:
    // 0x186e98: 0x10000012  b           . + 4 + (0x12 << 2)
label_186e9c:
    if (ctx->pc == 0x186E9Cu) {
        ctx->pc = 0x186E9Cu;
            // 0x186e9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186EA0u;
        goto label_186ea0;
    }
    ctx->pc = 0x186E98u;
    {
        const bool branch_taken_0x186e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186E98u;
            // 0x186e9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e98) {
            ctx->pc = 0x186EE4u;
            goto label_186ee4;
        }
    }
    ctx->pc = 0x186EA0u;
label_186ea0:
    // 0x186ea0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x186ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_186ea4:
    // 0x186ea4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x186ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_186ea8:
    // 0x186ea8: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x186ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_186eac:
    // 0x186eac: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_186eb0:
    if (ctx->pc == 0x186EB0u) {
        ctx->pc = 0x186EB0u;
            // 0x186eb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186EB4u;
        goto label_186eb4;
    }
    ctx->pc = 0x186EACu;
    {
        const bool branch_taken_0x186eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x186EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186EACu;
            // 0x186eb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186eac) {
            ctx->pc = 0x186EE4u;
            goto label_186ee4;
        }
    }
    ctx->pc = 0x186EB4u;
label_186eb4:
    // 0x186eb4: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x186eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_186eb8:
    // 0x186eb8: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x186eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_186ebc:
    // 0x186ebc: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x186ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_186ec0:
    // 0x186ec0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x186ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_186ec4:
    // 0x186ec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x186ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186ec8:
    // 0x186ec8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x186ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_186ecc:
    // 0x186ecc: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x186eccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_186ed0:
    // 0x186ed0: 0x80820005  lb          $v0, 0x5($a0)
    ctx->pc = 0x186ed0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_186ed4:
    // 0x186ed4: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
label_186ed8:
    if (ctx->pc == 0x186ED8u) {
        ctx->pc = 0x186ED8u;
            // 0x186ed8: 0xa61026  xor         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
        ctx->pc = 0x186EDCu;
        goto label_186edc;
    }
    ctx->pc = 0x186ED4u;
    {
        const bool branch_taken_0x186ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x186ed4) {
            ctx->pc = 0x186ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186ED4u;
            // 0x186ed8: 0xa61026  xor         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186EE0u;
            goto label_186ee0;
        }
    }
    ctx->pc = 0x186EDCu;
label_186edc:
    // 0x186edc: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x186edcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_186ee0:
    // 0x186ee0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x186ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_186ee4:
    // 0x186ee4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_186ee8:
    // 0x186ee8: 0x3e00008  jr          $ra
label_186eec:
    if (ctx->pc == 0x186EECu) {
        ctx->pc = 0x186EECu;
            // 0x186eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x186EF0u;
        goto label_186ef0;
    }
    ctx->pc = 0x186EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186EE8u;
            // 0x186eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186EF0u;
label_186ef0:
    // 0x186ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_186ef4:
    // 0x186ef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_186ef8:
    // 0x186ef8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_186efc:
    // 0x186efc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x186efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_186f00:
    // 0x186f00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_186f04:
    // 0x186f04: 0xc06127c  jal         func_1849F0
label_186f08:
    if (ctx->pc == 0x186F08u) {
        ctx->pc = 0x186F08u;
            // 0x186f08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186F0Cu;
        goto label_186f0c;
    }
    ctx->pc = 0x186F04u;
    SET_GPR_U32(ctx, 31, 0x186F0Cu);
    ctx->pc = 0x186F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186F04u;
            // 0x186f08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F0Cu; }
        if (ctx->pc != 0x186F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F0Cu; }
        if (ctx->pc != 0x186F0Cu) { return; }
    }
    ctx->pc = 0x186F0Cu;
label_186f0c:
    // 0x186f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186f10:
    // 0x186f10: 0xc061bce  jal         func_186F38
label_186f14:
    if (ctx->pc == 0x186F14u) {
        ctx->pc = 0x186F14u;
            // 0x186f14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186F18u;
        goto label_186f18;
    }
    ctx->pc = 0x186F10u;
    SET_GPR_U32(ctx, 31, 0x186F18u);
    ctx->pc = 0x186F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186F10u;
            // 0x186f14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F38u;
    if (runtime->hasFunction(0x186F38u)) {
        auto targetFn = runtime->lookupFunction(0x186F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F18u; }
        if (ctx->pc != 0x186F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186F38_0x186f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F18u; }
        if (ctx->pc != 0x186F18u) { return; }
    }
    ctx->pc = 0x186F18u;
label_186f18:
    // 0x186f18: 0xc061282  jal         func_184A08
label_186f1c:
    if (ctx->pc == 0x186F1Cu) {
        ctx->pc = 0x186F1Cu;
            // 0x186f1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186F20u;
        goto label_186f20;
    }
    ctx->pc = 0x186F18u;
    SET_GPR_U32(ctx, 31, 0x186F20u);
    ctx->pc = 0x186F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186F18u;
            // 0x186f1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F20u; }
        if (ctx->pc != 0x186F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A08_0x184a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F20u; }
        if (ctx->pc != 0x186F20u) { return; }
    }
    ctx->pc = 0x186F20u;
label_186f20:
    // 0x186f20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x186f20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_186f24:
    // 0x186f24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x186f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186f28:
    // 0x186f28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_186f2c:
    // 0x186f2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186f2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186f30:
    // 0x186f30: 0x3e00008  jr          $ra
label_186f34:
    if (ctx->pc == 0x186F34u) {
        ctx->pc = 0x186F34u;
            // 0x186f34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x186F38u;
        goto label_fallthrough_0x186f30;
    }
    ctx->pc = 0x186F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186F30u;
            // 0x186f34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x186f30:
    ctx->pc = 0x186F38u;
}
