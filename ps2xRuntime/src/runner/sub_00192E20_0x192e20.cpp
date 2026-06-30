#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192E20
// Address: 0x192e20 - 0x192f20
void sub_00192E20_0x192e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192E20_0x192e20");
#endif

    switch (ctx->pc) {
        case 0x192e60u: goto label_192e60;
        case 0x192ed0u: goto label_192ed0;
        default: break;
    }

    ctx->pc = 0x192e20u;

    // 0x192e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x192e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x192e24: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x192e24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x192e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x192e2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x192e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x192e34: 0x2058823  subu        $s1, $s0, $a1
    ctx->pc = 0x192e34u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x192e38: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x192e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x192e3c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x192e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x192e40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x192e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x192e44: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x192e44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e48: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x192e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x192e4c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x192E4Cu;
    {
        const bool branch_taken_0x192e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192E4Cu;
            // 0x192e50: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e4c) {
            ctx->pc = 0x192EFCu;
            goto label_192efc;
        }
    }
    ctx->pc = 0x192E54u;
    // 0x192e54: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x192e54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192e58: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x192e58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192e5c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x192e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_192e60:
    // 0x192e60: 0x1072000b  beq         $v1, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x192E60u;
    {
        const bool branch_taken_0x192e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x192E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192E60u;
            // 0x192e64: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e60) {
            ctx->pc = 0x192E90u;
            goto label_192e90;
        }
    }
    ctx->pc = 0x192E68u;
    // 0x192e68: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x192E68u;
    {
        const bool branch_taken_0x192e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x192e68) {
            ctx->pc = 0x192E6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192E68u;
            // 0x192e6c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192EF0u;
            goto label_192ef0;
        }
    }
    ctx->pc = 0x192E70u;
    // 0x192e70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x192e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192e74: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x192E74u;
    {
        const bool branch_taken_0x192e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x192e74) {
            ctx->pc = 0x192EA0u;
            goto label_192ea0;
        }
    }
    ctx->pc = 0x192E7Cu;
    // 0x192e7c: 0x10740010  beq         $v1, $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x192E7Cu;
    {
        const bool branch_taken_0x192e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x192e7c) {
            ctx->pc = 0x192EC0u;
            goto label_192ec0;
        }
    }
    ctx->pc = 0x192E84u;
    // 0x192e84: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x192E84u;
    {
        const bool branch_taken_0x192e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192E84u;
            // 0x192e88: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e84) {
            ctx->pc = 0x192EF4u;
            goto label_192ef4;
        }
    }
    ctx->pc = 0x192E8Cu;
    // 0x192e8c: 0x0  nop
    ctx->pc = 0x192e8cu;
    // NOP
label_192e90:
    // 0x192e90: 0x50430017  beql        $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x192E90u;
    {
        const bool branch_taken_0x192e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x192e90) {
            ctx->pc = 0x192E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192E90u;
            // 0x192e94: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192EF0u;
            goto label_192ef0;
        }
    }
    ctx->pc = 0x192E98u;
    // 0x192e98: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x192E98u;
    {
        const bool branch_taken_0x192e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192E98u;
            // 0x192e9c: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e98) {
            ctx->pc = 0x192EF4u;
            goto label_192ef4;
        }
    }
    ctx->pc = 0x192EA0u;
label_192ea0:
    // 0x192ea0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192EA0u;
    {
        const bool branch_taken_0x192ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192ea0) {
            ctx->pc = 0x192EB0u;
            goto label_192eb0;
        }
    }
    ctx->pc = 0x192EA8u;
    // 0x192ea8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x192EA8u;
    {
        const bool branch_taken_0x192ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192EA8u;
            // 0x192eac: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ea8) {
            ctx->pc = 0x192EF0u;
            goto label_192ef0;
        }
    }
    ctx->pc = 0x192EB0u;
label_192eb0:
    // 0x192eb0: 0x10520010  beq         $v0, $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x192EB0u;
    {
        const bool branch_taken_0x192eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x192EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192EB0u;
            // 0x192eb4: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192eb0) {
            ctx->pc = 0x192EF4u;
            goto label_192ef4;
        }
    }
    ctx->pc = 0x192EB8u;
    // 0x192eb8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x192EB8u;
    {
        const bool branch_taken_0x192eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192EB8u;
            // 0x192ebc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192eb8) {
            ctx->pc = 0x192EF4u;
            goto label_192ef4;
        }
    }
    ctx->pc = 0x192EC0u;
label_192ec0:
    // 0x192ec0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x192EC0u;
    {
        const bool branch_taken_0x192ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192ec0) {
            ctx->pc = 0x192EC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192EC0u;
            // 0x192ec4: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x192EE8u;
            goto label_192ee8;
        }
    }
    ctx->pc = 0x192EC8u;
    // 0x192ec8: 0xc064b62  jal         func_192D88
    ctx->pc = 0x192EC8u;
    SET_GPR_U32(ctx, 31, 0x192ED0u);
    ctx->pc = 0x192ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192EC8u;
            // 0x192ecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192ED0u; }
        if (ctx->pc != 0x192ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192ED0u; }
        if (ctx->pc != 0x192ED0u) { return; }
    }
    ctx->pc = 0x192ED0u;
label_192ed0:
    // 0x192ed0: 0x2621824  and         $v1, $s3, $v0
    ctx->pc = 0x192ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x192ed4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x192ED4u;
    {
        const bool branch_taken_0x192ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x192ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192ED4u;
            // 0x192ed8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ed4) {
            ctx->pc = 0x192F00u;
            goto label_192f00;
        }
    }
    ctx->pc = 0x192EDCu;
    // 0x192edc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x192EDCu;
    {
        const bool branch_taken_0x192edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192EDCu;
            // 0x192ee0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192edc) {
            ctx->pc = 0x192EF0u;
            goto label_192ef0;
        }
    }
    ctx->pc = 0x192EE4u;
    // 0x192ee4: 0x0  nop
    ctx->pc = 0x192ee4u;
    // NOP
label_192ee8:
    // 0x192ee8: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x192ee8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192eec: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x192eecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_192ef0:
    // 0x192ef0: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x192ef0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_192ef4:
    // 0x192ef4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x192EF4u;
    {
        const bool branch_taken_0x192ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192EF4u;
            // 0x192ef8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ef4) {
            ctx->pc = 0x192E60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_192e60;
        }
    }
    ctx->pc = 0x192EFCu;
label_192efc:
    // 0x192efc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192f00:
    // 0x192f00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192f04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x192f04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192f08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x192f08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192f0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x192f0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x192f10: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x192f10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192f14: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x192f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x192f18: 0x3e00008  jr          $ra
    ctx->pc = 0x192F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192F18u;
            // 0x192f1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192F20u;
}
