#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00164E28
// Address: 0x164e28 - 0x164ef0
void sub_00164E28_0x164e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164E28_0x164e28");
#endif

    switch (ctx->pc) {
        case 0x164e60u: goto label_164e60;
        case 0x164e78u: goto label_164e78;
        case 0x164e80u: goto label_164e80;
        case 0x164ee0u: goto label_164ee0;
        case 0x164ee8u: goto label_164ee8;
        default: break;
    }

    ctx->pc = 0x164e28u;

    // 0x164e28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164e2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164e30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164e34: 0x8082000e  lb          $v0, 0xE($a0)
    ctx->pc = 0x164e34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x164e38: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x164E38u;
    {
        const bool branch_taken_0x164e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x164E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164E38u;
            // 0x164e3c: 0x9085000e  lbu         $a1, 0xE($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e38) {
            ctx->pc = 0x164E4Cu;
            goto label_164e4c;
        }
    }
    ctx->pc = 0x164E40u;
    // 0x164e40: 0x8c8300e8  lw          $v1, 0xE8($a0)
    ctx->pc = 0x164e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x164e44: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x164E44u;
    {
        const bool branch_taken_0x164e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x164E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164E44u;
            // 0x164e48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e44) {
            ctx->pc = 0x164E6Cu;
            goto label_164e6c;
        }
    }
    ctx->pc = 0x164E4Cu;
label_164e4c:
    // 0x164e4c: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x164E4Cu;
    {
        const bool branch_taken_0x164e4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x164e4c) {
            ctx->pc = 0x164E50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164E4Cu;
            // 0x164e50: 0x51600  sll         $v0, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164E68u;
            goto label_164e68;
        }
    }
    ctx->pc = 0x164E54u;
    // 0x164e54: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x164e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x164e58: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x164E58u;
    SET_GPR_U32(ctx, 31, 0x164E60u);
    ctx->pc = 0x164E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164E58u;
            // 0x164e5c: 0x24843288  addiu       $a0, $a0, 0x3288 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E60u; }
        if (ctx->pc != 0x164E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E60u; }
        if (ctx->pc != 0x164E60u) { return; }
    }
    ctx->pc = 0x164E60u;
label_164e60:
    // 0x164e60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x164E60u;
    {
        const bool branch_taken_0x164e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164E60u;
            // 0x164e64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e60) {
            ctx->pc = 0x164E6Cu;
            goto label_164e6c;
        }
    }
    ctx->pc = 0x164E68u;
label_164e68:
    // 0x164e68: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x164e68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_164e6c:
    // 0x164e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164e70: 0x3e00008  jr          $ra
    ctx->pc = 0x164E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164E70u;
            // 0x164e74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164E78u;
label_164e78:
    // 0x164e78: 0x3e00008  jr          $ra
    ctx->pc = 0x164E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164E78u;
            // 0x164e7c: 0x8082000d  lb          $v0, 0xD($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164E80u;
label_164e80:
    // 0x164e80: 0x84850098  lh          $a1, 0x98($a0)
    ctx->pc = 0x164e80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x164e84: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x164E84u;
    {
        const bool branch_taken_0x164e84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x164E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164E84u;
            // 0x164e88: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e84) {
            ctx->pc = 0x164ED8u;
            goto label_164ed8;
        }
    }
    ctx->pc = 0x164E8Cu;
    // 0x164e8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x164e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164e90: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x164E90u;
    {
        const bool branch_taken_0x164e90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x164E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164E90u;
            // 0x164e94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e90) {
            ctx->pc = 0x164EB8u;
            goto label_164eb8;
        }
    }
    ctx->pc = 0x164E98u;
    // 0x164e98: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x164e98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x164e9c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x164e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x164ea0: 0x1065000d  beq         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x164EA0u;
    {
        const bool branch_taken_0x164ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x164EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164EA0u;
            // 0x164ea4: 0x38640001  xori        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ea0) {
            ctx->pc = 0x164ED8u;
            goto label_164ed8;
        }
    }
    ctx->pc = 0x164EA8u;
    // 0x164ea8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x164ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x164eac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x164eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x164eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x164EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164EB0u;
            // 0x164eb4: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164EB8u;
label_164eb8:
    // 0x164eb8: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x164EB8u;
    {
        const bool branch_taken_0x164eb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x164eb8) {
            ctx->pc = 0x164EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164EB8u;
            // 0x164ebc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164ED8u;
            goto label_164ed8;
        }
    }
    ctx->pc = 0x164EC0u;
    // 0x164ec0: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x164ec0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x164ec4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x164ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x164ec8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x164ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x164ecc: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x164eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x164ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x164ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164ED0u;
            // 0x164ed4: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164ED8u;
label_164ed8:
    // 0x164ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x164ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164EE0u;
label_164ee0:
    // 0x164ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x164EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164EE0u;
            // 0x164ee4: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164EE8u;
label_164ee8:
    // 0x164ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x164EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164EE8u;
            // 0x164eec: 0x8082000f  lb          $v0, 0xF($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164EF0u;
}
