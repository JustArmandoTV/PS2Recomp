#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181DC8
// Address: 0x181dc8 - 0x181ec8
void sub_00181DC8_0x181dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181DC8_0x181dc8");
#endif

    switch (ctx->pc) {
        case 0x181e00u: goto label_181e00;
        case 0x181e58u: goto label_181e58;
        case 0x181e84u: goto label_181e84;
        case 0x181ea8u: goto label_181ea8;
        default: break;
    }

    ctx->pc = 0x181dc8u;

    // 0x181dc8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x181dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x181dcc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x181dccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x181dd0: 0x2442bee8  addiu       $v0, $v0, -0x4118
    ctx->pc = 0x181dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950632));
    // 0x181dd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x181dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x181dd8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x181dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x181ddc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x181ddcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181de0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x181de0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181de4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x181de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181de8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x181de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181dec: 0x24060168  addiu       $a2, $zero, 0x168
    ctx->pc = 0x181decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x181df0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x181df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x181df4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x181df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x181df8: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x181DF8u;
    SET_GPR_U32(ctx, 31, 0x181E00u);
    ctx->pc = 0x181DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181DF8u;
            // 0x181dfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181E00u; }
        if (ctx->pc != 0x181E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181E00u; }
        if (ctx->pc != 0x181E00u) { return; }
    }
    ctx->pc = 0x181E00u;
label_181e00:
    // 0x181e00: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x181E00u;
    {
        const bool branch_taken_0x181e00 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x181e00) {
            ctx->pc = 0x181E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181E00u;
            // 0x181e04: 0x2a620400  slti        $v0, $s3, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x181E18u;
            goto label_181e18;
        }
    }
    ctx->pc = 0x181E08u;
    // 0x181e08: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x181e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x181e0c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x181E0Cu;
    {
        const bool branch_taken_0x181e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181E0Cu;
            // 0x181e10: 0x248471d0  addiu       $a0, $a0, 0x71D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e0c) {
            ctx->pc = 0x181EA0u;
            goto label_181ea0;
        }
    }
    ctx->pc = 0x181E14u;
    // 0x181e14: 0x0  nop
    ctx->pc = 0x181e14u;
    // NOP
label_181e18:
    // 0x181e18: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x181E18u;
    {
        const bool branch_taken_0x181e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181e18) {
            ctx->pc = 0x181E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181E18u;
            // 0x181e1c: 0x32420003  andi        $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
            ctx->pc = 0x181E30u;
            goto label_181e30;
        }
    }
    ctx->pc = 0x181E20u;
    // 0x181e20: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x181e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x181e24: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x181E24u;
    {
        const bool branch_taken_0x181e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181E24u;
            // 0x181e28: 0x248471f8  addiu       $a0, $a0, 0x71F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e24) {
            ctx->pc = 0x181EA0u;
            goto label_181ea0;
        }
    }
    ctx->pc = 0x181E2Cu;
    // 0x181e2c: 0x0  nop
    ctx->pc = 0x181e2cu;
    // NOP
label_181e30:
    // 0x181e30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181E30u;
    {
        const bool branch_taken_0x181e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181E30u;
            // 0x181e34: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e30) {
            ctx->pc = 0x181E40u;
            goto label_181e40;
        }
    }
    ctx->pc = 0x181E38u;
    // 0x181e38: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x181e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x181e3c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x181e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_181e40:
    // 0x181e40: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x181e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181e44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x181e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181e4c: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x181e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x181e50: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x181E50u;
    SET_GPR_U32(ctx, 31, 0x181E58u);
    ctx->pc = 0x181E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181E50u;
            // 0x181e54: 0x2630002c  addiu       $s0, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181E58u; }
        if (ctx->pc != 0x181E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181E58u; }
        if (ctx->pc != 0x181E58u) { return; }
    }
    ctx->pc = 0x181E58u;
label_181e58:
    // 0x181e58: 0x32020003  andi        $v0, $s0, 0x3
    ctx->pc = 0x181e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x181e5c: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x181e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x181e60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181E60u;
    {
        const bool branch_taken_0x181e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181E60u;
            // 0x181e64: 0xae330004  sw          $s3, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e60) {
            ctx->pc = 0x181E70u;
            goto label_181e70;
        }
    }
    ctx->pc = 0x181E68u;
    // 0x181e68: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x181e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x181e6c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x181e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_181e70:
    // 0x181e70: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x181e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x181e74: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x181e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x181e78: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x181e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x181e7c: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x181E7Cu;
    SET_GPR_U32(ctx, 31, 0x181E84u);
    ctx->pc = 0x181E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181E7Cu;
            // 0x181e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181E84u; }
        if (ctx->pc != 0x181E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181E84u; }
        if (ctx->pc != 0x181E84u) { return; }
    }
    ctx->pc = 0x181E84u;
label_181e84:
    // 0x181e84: 0x26030300  addiu       $v1, $s0, 0x300
    ctx->pc = 0x181e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x181e88: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x181e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x181e8c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x181e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x181e90: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x181E90u;
    {
        const bool branch_taken_0x181e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181e90) {
            ctx->pc = 0x181E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181E90u;
            // 0x181e94: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181EACu;
            goto label_181eac;
        }
    }
    ctx->pc = 0x181E98u;
    // 0x181e98: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x181e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x181e9c: 0x24847220  addiu       $a0, $a0, 0x7220
    ctx->pc = 0x181e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29216));
label_181ea0:
    // 0x181ea0: 0xc060726  jal         func_181C98
    ctx->pc = 0x181EA0u;
    SET_GPR_U32(ctx, 31, 0x181EA8u);
    ctx->pc = 0x181C98u;
    if (runtime->hasFunction(0x181C98u)) {
        auto targetFn = runtime->lookupFunction(0x181C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181EA8u; }
        if (ctx->pc != 0x181EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181C98_0x181c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181EA8u; }
        if (ctx->pc != 0x181EA8u) { return; }
    }
    ctx->pc = 0x181EA8u;
label_181ea8:
    // 0x181ea8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x181ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181eac:
    // 0x181eac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181eb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x181eb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181eb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x181eb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181eb8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x181eb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x181ebc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x181ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x181EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181EC0u;
            // 0x181ec4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181EC8u;
}
