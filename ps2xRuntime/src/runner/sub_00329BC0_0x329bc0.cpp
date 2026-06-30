#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00329BC0
// Address: 0x329bc0 - 0x329c60
void sub_00329BC0_0x329bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329BC0_0x329bc0");
#endif

    switch (ctx->pc) {
        case 0x329c18u: goto label_329c18;
        case 0x329c30u: goto label_329c30;
        default: break;
    }

    ctx->pc = 0x329bc0u;

    // 0x329bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x329bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x329bc4: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x329bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x329bc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x329bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x329bcc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x329bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x329bd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x329bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x329bd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x329bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x329bd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x329bd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329bdc: 0x8cb00e80  lw          $s0, 0xE80($a1)
    ctx->pc = 0x329bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3712)));
    // 0x329be0: 0x8c650ea4  lw          $a1, 0xEA4($v1)
    ctx->pc = 0x329be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3748)));
    // 0x329be4: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x329be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x329be8: 0x8ca6012c  lw          $a2, 0x12C($a1)
    ctx->pc = 0x329be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 300)));
    // 0x329bec: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x329becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329bf0: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x329bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x329bf4: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x329bf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x329bf8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x329BF8u;
    {
        const bool branch_taken_0x329bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x329BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329BF8u;
            // 0x329bfc: 0xac85003c  sw          $a1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329bf8) {
            ctx->pc = 0x329C30u;
            goto label_329c30;
        }
    }
    ctx->pc = 0x329C00u;
    // 0x329c00: 0x3c023f3d  lui         $v0, 0x3F3D
    ctx->pc = 0x329c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16189 << 16));
    // 0x329c04: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x329c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x329c08: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x329c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
    // 0x329c0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x329c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x329c10: 0xc0c5bcc  jal         func_316F30
    ctx->pc = 0x329C10u;
    SET_GPR_U32(ctx, 31, 0x329C18u);
    ctx->pc = 0x329C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329C10u;
            // 0x329c14: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316F30u;
    if (runtime->hasFunction(0x316F30u)) {
        auto targetFn = runtime->lookupFunction(0x316F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329C18u; }
        if (ctx->pc != 0x329C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00316F30_0x316f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329C18u; }
        if (ctx->pc != 0x329C18u) { return; }
    }
    ctx->pc = 0x329C18u;
label_329c18:
    // 0x329c18: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x329c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x329c1c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x329c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x329c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329c24: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x329c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x329c28: 0xc0ca610  jal         func_329840
    ctx->pc = 0x329C28u;
    SET_GPR_U32(ctx, 31, 0x329C30u);
    ctx->pc = 0x329C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329C28u;
            // 0x329c2c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x329840u;
    if (runtime->hasFunction(0x329840u)) {
        auto targetFn = runtime->lookupFunction(0x329840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329C30u; }
        if (ctx->pc != 0x329C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329840_0x329840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329C30u; }
        if (ctx->pc != 0x329C30u) { return; }
    }
    ctx->pc = 0x329C30u;
label_329c30:
    // 0x329c30: 0x8e03078c  lw          $v1, 0x78C($s0)
    ctx->pc = 0x329c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x329c34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329c38: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x329c38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x329c3c: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x329c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x329c40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x329c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329c44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x329c44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329c48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x329C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329C4Cu;
            // 0x329c50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x329C54u;
    // 0x329c54: 0x0  nop
    ctx->pc = 0x329c54u;
    // NOP
    // 0x329c58: 0x0  nop
    ctx->pc = 0x329c58u;
    // NOP
    // 0x329c5c: 0x0  nop
    ctx->pc = 0x329c5cu;
    // NOP
}
