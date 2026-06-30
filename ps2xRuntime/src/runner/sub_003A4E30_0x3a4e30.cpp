#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A4E30
// Address: 0x3a4e30 - 0x3a5000
void sub_003A4E30_0x3a4e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4E30_0x3a4e30");
#endif

    switch (ctx->pc) {
        case 0x3a4e30u: goto label_3a4e30;
        case 0x3a4e34u: goto label_3a4e34;
        case 0x3a4e38u: goto label_3a4e38;
        case 0x3a4e3cu: goto label_3a4e3c;
        case 0x3a4e40u: goto label_3a4e40;
        case 0x3a4e44u: goto label_3a4e44;
        case 0x3a4e48u: goto label_3a4e48;
        case 0x3a4e4cu: goto label_3a4e4c;
        case 0x3a4e50u: goto label_3a4e50;
        case 0x3a4e54u: goto label_3a4e54;
        case 0x3a4e58u: goto label_3a4e58;
        case 0x3a4e5cu: goto label_3a4e5c;
        case 0x3a4e60u: goto label_3a4e60;
        case 0x3a4e64u: goto label_3a4e64;
        case 0x3a4e68u: goto label_3a4e68;
        case 0x3a4e6cu: goto label_3a4e6c;
        case 0x3a4e70u: goto label_3a4e70;
        case 0x3a4e74u: goto label_3a4e74;
        case 0x3a4e78u: goto label_3a4e78;
        case 0x3a4e7cu: goto label_3a4e7c;
        case 0x3a4e80u: goto label_3a4e80;
        case 0x3a4e84u: goto label_3a4e84;
        case 0x3a4e88u: goto label_3a4e88;
        case 0x3a4e8cu: goto label_3a4e8c;
        case 0x3a4e90u: goto label_3a4e90;
        case 0x3a4e94u: goto label_3a4e94;
        case 0x3a4e98u: goto label_3a4e98;
        case 0x3a4e9cu: goto label_3a4e9c;
        case 0x3a4ea0u: goto label_3a4ea0;
        case 0x3a4ea4u: goto label_3a4ea4;
        case 0x3a4ea8u: goto label_3a4ea8;
        case 0x3a4eacu: goto label_3a4eac;
        case 0x3a4eb0u: goto label_3a4eb0;
        case 0x3a4eb4u: goto label_3a4eb4;
        case 0x3a4eb8u: goto label_3a4eb8;
        case 0x3a4ebcu: goto label_3a4ebc;
        case 0x3a4ec0u: goto label_3a4ec0;
        case 0x3a4ec4u: goto label_3a4ec4;
        case 0x3a4ec8u: goto label_3a4ec8;
        case 0x3a4eccu: goto label_3a4ecc;
        case 0x3a4ed0u: goto label_3a4ed0;
        case 0x3a4ed4u: goto label_3a4ed4;
        case 0x3a4ed8u: goto label_3a4ed8;
        case 0x3a4edcu: goto label_3a4edc;
        case 0x3a4ee0u: goto label_3a4ee0;
        case 0x3a4ee4u: goto label_3a4ee4;
        case 0x3a4ee8u: goto label_3a4ee8;
        case 0x3a4eecu: goto label_3a4eec;
        case 0x3a4ef0u: goto label_3a4ef0;
        case 0x3a4ef4u: goto label_3a4ef4;
        case 0x3a4ef8u: goto label_3a4ef8;
        case 0x3a4efcu: goto label_3a4efc;
        case 0x3a4f00u: goto label_3a4f00;
        case 0x3a4f04u: goto label_3a4f04;
        case 0x3a4f08u: goto label_3a4f08;
        case 0x3a4f0cu: goto label_3a4f0c;
        case 0x3a4f10u: goto label_3a4f10;
        case 0x3a4f14u: goto label_3a4f14;
        case 0x3a4f18u: goto label_3a4f18;
        case 0x3a4f1cu: goto label_3a4f1c;
        case 0x3a4f20u: goto label_3a4f20;
        case 0x3a4f24u: goto label_3a4f24;
        case 0x3a4f28u: goto label_3a4f28;
        case 0x3a4f2cu: goto label_3a4f2c;
        case 0x3a4f30u: goto label_3a4f30;
        case 0x3a4f34u: goto label_3a4f34;
        case 0x3a4f38u: goto label_3a4f38;
        case 0x3a4f3cu: goto label_3a4f3c;
        case 0x3a4f40u: goto label_3a4f40;
        case 0x3a4f44u: goto label_3a4f44;
        case 0x3a4f48u: goto label_3a4f48;
        case 0x3a4f4cu: goto label_3a4f4c;
        case 0x3a4f50u: goto label_3a4f50;
        case 0x3a4f54u: goto label_3a4f54;
        case 0x3a4f58u: goto label_3a4f58;
        case 0x3a4f5cu: goto label_3a4f5c;
        case 0x3a4f60u: goto label_3a4f60;
        case 0x3a4f64u: goto label_3a4f64;
        case 0x3a4f68u: goto label_3a4f68;
        case 0x3a4f6cu: goto label_3a4f6c;
        case 0x3a4f70u: goto label_3a4f70;
        case 0x3a4f74u: goto label_3a4f74;
        case 0x3a4f78u: goto label_3a4f78;
        case 0x3a4f7cu: goto label_3a4f7c;
        case 0x3a4f80u: goto label_3a4f80;
        case 0x3a4f84u: goto label_3a4f84;
        case 0x3a4f88u: goto label_3a4f88;
        case 0x3a4f8cu: goto label_3a4f8c;
        case 0x3a4f90u: goto label_3a4f90;
        case 0x3a4f94u: goto label_3a4f94;
        case 0x3a4f98u: goto label_3a4f98;
        case 0x3a4f9cu: goto label_3a4f9c;
        case 0x3a4fa0u: goto label_3a4fa0;
        case 0x3a4fa4u: goto label_3a4fa4;
        case 0x3a4fa8u: goto label_3a4fa8;
        case 0x3a4facu: goto label_3a4fac;
        case 0x3a4fb0u: goto label_3a4fb0;
        case 0x3a4fb4u: goto label_3a4fb4;
        case 0x3a4fb8u: goto label_3a4fb8;
        case 0x3a4fbcu: goto label_3a4fbc;
        case 0x3a4fc0u: goto label_3a4fc0;
        case 0x3a4fc4u: goto label_3a4fc4;
        case 0x3a4fc8u: goto label_3a4fc8;
        case 0x3a4fccu: goto label_3a4fcc;
        case 0x3a4fd0u: goto label_3a4fd0;
        case 0x3a4fd4u: goto label_3a4fd4;
        case 0x3a4fd8u: goto label_3a4fd8;
        case 0x3a4fdcu: goto label_3a4fdc;
        case 0x3a4fe0u: goto label_3a4fe0;
        case 0x3a4fe4u: goto label_3a4fe4;
        case 0x3a4fe8u: goto label_3a4fe8;
        case 0x3a4fecu: goto label_3a4fec;
        case 0x3a4ff0u: goto label_3a4ff0;
        case 0x3a4ff4u: goto label_3a4ff4;
        case 0x3a4ff8u: goto label_3a4ff8;
        case 0x3a4ffcu: goto label_3a4ffc;
        default: break;
    }

    ctx->pc = 0x3a4e30u;

label_3a4e30:
    // 0x3a4e30: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3a4e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_3a4e34:
    // 0x3a4e34: 0x8c860100  lw          $a2, 0x100($a0)
    ctx->pc = 0x3a4e34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
label_3a4e38:
    // 0x3a4e38: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x3a4e38u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3a4e3c:
    // 0x3a4e3c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3a4e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3a4e40:
    // 0x3a4e40: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3a4e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3a4e44:
    // 0x3a4e44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a4e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a4e48:
    // 0x3a4e48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a4e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a4e4c:
    // 0x3a4e4c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3a4e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3a4e50:
    // 0x3a4e50: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x3a4e50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
label_3a4e54:
    // 0x3a4e54: 0x3e00008  jr          $ra
label_3a4e58:
    if (ctx->pc == 0x3A4E58u) {
        ctx->pc = 0x3A4E58u;
            // 0x3a4e58: 0xe46c0034  swc1        $f12, 0x34($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
        ctx->pc = 0x3A4E5Cu;
        goto label_3a4e5c;
    }
    ctx->pc = 0x3A4E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4E54u;
            // 0x3a4e58: 0xe46c0034  swc1        $f12, 0x34($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A4E5Cu;
label_3a4e5c:
    // 0x3a4e5c: 0x0  nop
    ctx->pc = 0x3a4e5cu;
    // NOP
label_3a4e60:
    // 0x3a4e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a4e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a4e64:
    // 0x3a4e64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a4e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3a4e68:
    // 0x3a4e68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a4e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a4e6c:
    // 0x3a4e6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a4e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a4e70:
    // 0x3a4e70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a4e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a4e74:
    // 0x3a4e74: 0x1220005a  beqz        $s1, . + 4 + (0x5A << 2)
label_3a4e78:
    if (ctx->pc == 0x3A4E78u) {
        ctx->pc = 0x3A4E78u;
            // 0x3a4e78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A4E7Cu;
        goto label_3a4e7c;
    }
    ctx->pc = 0x3A4E74u;
    {
        const bool branch_taken_0x3a4e74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4E74u;
            // 0x3a4e78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e74) {
            ctx->pc = 0x3A4FE0u;
            goto label_3a4fe0;
        }
    }
    ctx->pc = 0x3A4E7Cu;
label_3a4e7c:
    // 0x3a4e7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3a4e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3a4e80:
    // 0x3a4e80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3a4e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3a4e84:
    // 0x3a4e84: 0x24638870  addiu       $v1, $v1, -0x7790
    ctx->pc = 0x3a4e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936688));
label_3a4e88:
    // 0x3a4e88: 0x244288a0  addiu       $v0, $v0, -0x7760
    ctx->pc = 0x3a4e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936736));
label_3a4e8c:
    // 0x3a4e8c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3a4e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3a4e90:
    // 0x3a4e90: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3a4e90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3a4e94:
    // 0x3a4e94: 0x8e240108  lw          $a0, 0x108($s1)
    ctx->pc = 0x3a4e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_3a4e98:
    // 0x3a4e98: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3a4e9c:
    if (ctx->pc == 0x3A4E9Cu) {
        ctx->pc = 0x3A4E9Cu;
            // 0x3a4e9c: 0x8e240104  lw          $a0, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->pc = 0x3A4EA0u;
        goto label_3a4ea0;
    }
    ctx->pc = 0x3A4E98u;
    {
        const bool branch_taken_0x3a4e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4e98) {
            ctx->pc = 0x3A4E9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4E98u;
            // 0x3a4e9c: 0x8e240104  lw          $a0, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4EB4u;
            goto label_3a4eb4;
        }
    }
    ctx->pc = 0x3A4EA0u;
label_3a4ea0:
    // 0x3a4ea0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a4ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a4ea4:
    // 0x3a4ea4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3a4ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3a4ea8:
    // 0x3a4ea8: 0x320f809  jalr        $t9
label_3a4eac:
    if (ctx->pc == 0x3A4EACu) {
        ctx->pc = 0x3A4EACu;
            // 0x3a4eac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A4EB0u;
        goto label_3a4eb0;
    }
    ctx->pc = 0x3A4EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4EB0u);
        ctx->pc = 0x3A4EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4EA8u;
            // 0x3a4eac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4EB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4EB0u; }
            if (ctx->pc != 0x3A4EB0u) { return; }
        }
        }
    }
    ctx->pc = 0x3A4EB0u;
label_3a4eb0:
    // 0x3a4eb0: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x3a4eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_3a4eb4:
    // 0x3a4eb4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3a4eb8:
    if (ctx->pc == 0x3A4EB8u) {
        ctx->pc = 0x3A4EB8u;
            // 0x3a4eb8: 0x8e240100  lw          $a0, 0x100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
        ctx->pc = 0x3A4EBCu;
        goto label_3a4ebc;
    }
    ctx->pc = 0x3A4EB4u;
    {
        const bool branch_taken_0x3a4eb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4eb4) {
            ctx->pc = 0x3A4EB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4EB4u;
            // 0x3a4eb8: 0x8e240100  lw          $a0, 0x100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4ED0u;
            goto label_3a4ed0;
        }
    }
    ctx->pc = 0x3A4EBCu;
label_3a4ebc:
    // 0x3a4ebc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a4ebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a4ec0:
    // 0x3a4ec0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3a4ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3a4ec4:
    // 0x3a4ec4: 0x320f809  jalr        $t9
label_3a4ec8:
    if (ctx->pc == 0x3A4EC8u) {
        ctx->pc = 0x3A4EC8u;
            // 0x3a4ec8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A4ECCu;
        goto label_3a4ecc;
    }
    ctx->pc = 0x3A4EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4ECCu);
        ctx->pc = 0x3A4EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4EC4u;
            // 0x3a4ec8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4ECCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4ECCu; }
            if (ctx->pc != 0x3A4ECCu) { return; }
        }
        }
    }
    ctx->pc = 0x3A4ECCu;
label_3a4ecc:
    // 0x3a4ecc: 0x8e240100  lw          $a0, 0x100($s1)
    ctx->pc = 0x3a4eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_3a4ed0:
    // 0x3a4ed0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3a4ed4:
    if (ctx->pc == 0x3A4ED4u) {
        ctx->pc = 0x3A4ED4u;
            // 0x3a4ed4: 0x8e2400fc  lw          $a0, 0xFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
        ctx->pc = 0x3A4ED8u;
        goto label_3a4ed8;
    }
    ctx->pc = 0x3A4ED0u;
    {
        const bool branch_taken_0x3a4ed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4ed0) {
            ctx->pc = 0x3A4ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4ED0u;
            // 0x3a4ed4: 0x8e2400fc  lw          $a0, 0xFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4EECu;
            goto label_3a4eec;
        }
    }
    ctx->pc = 0x3A4ED8u;
label_3a4ed8:
    // 0x3a4ed8: 0x8c99017c  lw          $t9, 0x17C($a0)
    ctx->pc = 0x3a4ed8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
label_3a4edc:
    // 0x3a4edc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3a4edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3a4ee0:
    // 0x3a4ee0: 0x320f809  jalr        $t9
label_3a4ee4:
    if (ctx->pc == 0x3A4EE4u) {
        ctx->pc = 0x3A4EE4u;
            // 0x3a4ee4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A4EE8u;
        goto label_3a4ee8;
    }
    ctx->pc = 0x3A4EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4EE8u);
        ctx->pc = 0x3A4EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4EE0u;
            // 0x3a4ee4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4EE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4EE8u; }
            if (ctx->pc != 0x3A4EE8u) { return; }
        }
        }
    }
    ctx->pc = 0x3A4EE8u;
label_3a4ee8:
    // 0x3a4ee8: 0x8e2400fc  lw          $a0, 0xFC($s1)
    ctx->pc = 0x3a4ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_3a4eec:
    // 0x3a4eec: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3a4ef0:
    if (ctx->pc == 0x3A4EF0u) {
        ctx->pc = 0x3A4EF0u;
            // 0x3a4ef0: 0x8e2400f8  lw          $a0, 0xF8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
        ctx->pc = 0x3A4EF4u;
        goto label_3a4ef4;
    }
    ctx->pc = 0x3A4EECu;
    {
        const bool branch_taken_0x3a4eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4eec) {
            ctx->pc = 0x3A4EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4EECu;
            // 0x3a4ef0: 0x8e2400f8  lw          $a0, 0xF8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4F08u;
            goto label_3a4f08;
        }
    }
    ctx->pc = 0x3A4EF4u;
label_3a4ef4:
    // 0x3a4ef4: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x3a4ef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_3a4ef8:
    // 0x3a4ef8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3a4ef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3a4efc:
    // 0x3a4efc: 0x320f809  jalr        $t9
label_3a4f00:
    if (ctx->pc == 0x3A4F00u) {
        ctx->pc = 0x3A4F00u;
            // 0x3a4f00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A4F04u;
        goto label_3a4f04;
    }
    ctx->pc = 0x3A4EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4F04u);
        ctx->pc = 0x3A4F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4EFCu;
            // 0x3a4f00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4F04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4F04u; }
            if (ctx->pc != 0x3A4F04u) { return; }
        }
        }
    }
    ctx->pc = 0x3A4F04u;
label_3a4f04:
    // 0x3a4f04: 0x8e2400f8  lw          $a0, 0xF8($s1)
    ctx->pc = 0x3a4f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_3a4f08:
    // 0x3a4f08: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3a4f0c:
    if (ctx->pc == 0x3A4F0Cu) {
        ctx->pc = 0x3A4F0Cu;
            // 0x3a4f0c: 0x8e2400f0  lw          $a0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->pc = 0x3A4F10u;
        goto label_3a4f10;
    }
    ctx->pc = 0x3A4F08u;
    {
        const bool branch_taken_0x3a4f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4f08) {
            ctx->pc = 0x3A4F0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4F08u;
            // 0x3a4f0c: 0x8e2400f0  lw          $a0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4F24u;
            goto label_3a4f24;
        }
    }
    ctx->pc = 0x3A4F10u;
label_3a4f10:
    // 0x3a4f10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a4f10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a4f14:
    // 0x3a4f14: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3a4f14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3a4f18:
    // 0x3a4f18: 0x320f809  jalr        $t9
label_3a4f1c:
    if (ctx->pc == 0x3A4F1Cu) {
        ctx->pc = 0x3A4F1Cu;
            // 0x3a4f1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A4F20u;
        goto label_3a4f20;
    }
    ctx->pc = 0x3A4F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4F20u);
        ctx->pc = 0x3A4F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4F18u;
            // 0x3a4f1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4F20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4F20u; }
            if (ctx->pc != 0x3A4F20u) { return; }
        }
        }
    }
    ctx->pc = 0x3A4F20u;
label_3a4f20:
    // 0x3a4f20: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x3a4f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_3a4f24:
    // 0x3a4f24: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3a4f28:
    if (ctx->pc == 0x3A4F28u) {
        ctx->pc = 0x3A4F28u;
            // 0x3a4f28: 0x8e2400f4  lw          $a0, 0xF4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
        ctx->pc = 0x3A4F2Cu;
        goto label_3a4f2c;
    }
    ctx->pc = 0x3A4F24u;
    {
        const bool branch_taken_0x3a4f24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4f24) {
            ctx->pc = 0x3A4F28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4F24u;
            // 0x3a4f28: 0x8e2400f4  lw          $a0, 0xF4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4F40u;
            goto label_3a4f40;
        }
    }
    ctx->pc = 0x3A4F2Cu;
label_3a4f2c:
    // 0x3a4f2c: 0x8c990374  lw          $t9, 0x374($a0)
    ctx->pc = 0x3a4f2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 884)));
label_3a4f30:
    // 0x3a4f30: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3a4f30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3a4f34:
    // 0x3a4f34: 0x320f809  jalr        $t9
label_3a4f38:
    if (ctx->pc == 0x3A4F38u) {
        ctx->pc = 0x3A4F38u;
            // 0x3a4f38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A4F3Cu;
        goto label_3a4f3c;
    }
    ctx->pc = 0x3A4F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4F3Cu);
        ctx->pc = 0x3A4F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4F34u;
            // 0x3a4f38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4F3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4F3Cu; }
            if (ctx->pc != 0x3A4F3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A4F3Cu;
label_3a4f3c:
    // 0x3a4f3c: 0x8e2400f4  lw          $a0, 0xF4($s1)
    ctx->pc = 0x3a4f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_3a4f40:
    // 0x3a4f40: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3a4f44:
    if (ctx->pc == 0x3A4F44u) {
        ctx->pc = 0x3A4F44u;
            // 0x3a4f44: 0x8e2400ec  lw          $a0, 0xEC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
        ctx->pc = 0x3A4F48u;
        goto label_3a4f48;
    }
    ctx->pc = 0x3A4F40u;
    {
        const bool branch_taken_0x3a4f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4f40) {
            ctx->pc = 0x3A4F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4F40u;
            // 0x3a4f44: 0x8e2400ec  lw          $a0, 0xEC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4F5Cu;
            goto label_3a4f5c;
        }
    }
    ctx->pc = 0x3A4F48u;
label_3a4f48:
    // 0x3a4f48: 0x8c99006c  lw          $t9, 0x6C($a0)
    ctx->pc = 0x3a4f48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_3a4f4c:
    // 0x3a4f4c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3a4f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3a4f50:
    // 0x3a4f50: 0x320f809  jalr        $t9
label_3a4f54:
    if (ctx->pc == 0x3A4F54u) {
        ctx->pc = 0x3A4F54u;
            // 0x3a4f54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A4F58u;
        goto label_3a4f58;
    }
    ctx->pc = 0x3A4F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4F58u);
        ctx->pc = 0x3A4F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4F50u;
            // 0x3a4f54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4F58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4F58u; }
            if (ctx->pc != 0x3A4F58u) { return; }
        }
        }
    }
    ctx->pc = 0x3A4F58u;
label_3a4f58:
    // 0x3a4f58: 0x8e2400ec  lw          $a0, 0xEC($s1)
    ctx->pc = 0x3a4f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_3a4f5c:
    // 0x3a4f5c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3a4f60:
    if (ctx->pc == 0x3A4F60u) {
        ctx->pc = 0x3A4F60u;
            // 0x3a4f60: 0x8e24010c  lw          $a0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->pc = 0x3A4F64u;
        goto label_3a4f64;
    }
    ctx->pc = 0x3A4F5Cu;
    {
        const bool branch_taken_0x3a4f5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4f5c) {
            ctx->pc = 0x3A4F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4F5Cu;
            // 0x3a4f60: 0x8e24010c  lw          $a0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4F78u;
            goto label_3a4f78;
        }
    }
    ctx->pc = 0x3A4F64u;
label_3a4f64:
    // 0x3a4f64: 0x8c990128  lw          $t9, 0x128($a0)
    ctx->pc = 0x3a4f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
label_3a4f68:
    // 0x3a4f68: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3a4f68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3a4f6c:
    // 0x3a4f6c: 0x320f809  jalr        $t9
label_3a4f70:
    if (ctx->pc == 0x3A4F70u) {
        ctx->pc = 0x3A4F70u;
            // 0x3a4f70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A4F74u;
        goto label_3a4f74;
    }
    ctx->pc = 0x3A4F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4F74u);
        ctx->pc = 0x3A4F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4F6Cu;
            // 0x3a4f70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4F74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4F74u; }
            if (ctx->pc != 0x3A4F74u) { return; }
        }
        }
    }
    ctx->pc = 0x3A4F74u;
label_3a4f74:
    // 0x3a4f74: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x3a4f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_3a4f78:
    // 0x3a4f78: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3a4f7c:
    if (ctx->pc == 0x3A4F7Cu) {
        ctx->pc = 0x3A4F7Cu;
            // 0x3a4f7c: 0x26220054  addiu       $v0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->pc = 0x3A4F80u;
        goto label_3a4f80;
    }
    ctx->pc = 0x3A4F78u;
    {
        const bool branch_taken_0x3a4f78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4f78) {
            ctx->pc = 0x3A4F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4F78u;
            // 0x3a4f7c: 0x26220054  addiu       $v0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4F94u;
            goto label_3a4f94;
        }
    }
    ctx->pc = 0x3A4F80u;
label_3a4f80:
    // 0x3a4f80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a4f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a4f84:
    // 0x3a4f84: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3a4f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3a4f88:
    // 0x3a4f88: 0x320f809  jalr        $t9
label_3a4f8c:
    if (ctx->pc == 0x3A4F8Cu) {
        ctx->pc = 0x3A4F8Cu;
            // 0x3a4f8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A4F90u;
        goto label_3a4f90;
    }
    ctx->pc = 0x3A4F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A4F90u);
        ctx->pc = 0x3A4F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4F88u;
            // 0x3a4f8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A4F90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A4F90u; }
            if (ctx->pc != 0x3A4F90u) { return; }
        }
        }
    }
    ctx->pc = 0x3A4F90u;
label_3a4f90:
    // 0x3a4f90: 0x26220054  addiu       $v0, $s1, 0x54
    ctx->pc = 0x3a4f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_3a4f94:
    // 0x3a4f94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3a4f98:
    if (ctx->pc == 0x3A4F98u) {
        ctx->pc = 0x3A4F9Cu;
        goto label_3a4f9c;
    }
    ctx->pc = 0x3A4F94u;
    {
        const bool branch_taken_0x3a4f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4f94) {
            ctx->pc = 0x3A4FA8u;
            goto label_3a4fa8;
        }
    }
    ctx->pc = 0x3A4F9Cu;
label_3a4f9c:
    // 0x3a4f9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a4f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a4fa0:
    // 0x3a4fa0: 0x244255c0  addiu       $v0, $v0, 0x55C0
    ctx->pc = 0x3a4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21952));
label_3a4fa4:
    // 0x3a4fa4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3a4fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3a4fa8:
    // 0x3a4fa8: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_3a4fac:
    if (ctx->pc == 0x3A4FACu) {
        ctx->pc = 0x3A4FACu;
            // 0x3a4fac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3A4FB0u;
        goto label_3a4fb0;
    }
    ctx->pc = 0x3A4FA8u;
    {
        const bool branch_taken_0x3a4fa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4fa8) {
            ctx->pc = 0x3A4FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4FA8u;
            // 0x3a4fac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4FCCu;
            goto label_3a4fcc;
        }
    }
    ctx->pc = 0x3A4FB0u;
label_3a4fb0:
    // 0x3a4fb0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a4fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a4fb4:
    // 0x3a4fb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a4fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a4fb8:
    // 0x3a4fb8: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3a4fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3a4fbc:
    // 0x3a4fbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a4fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4fc0:
    // 0x3a4fc0: 0xc057a68  jal         func_15E9A0
label_3a4fc4:
    if (ctx->pc == 0x3A4FC4u) {
        ctx->pc = 0x3A4FC4u;
            // 0x3a4fc4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3A4FC8u;
        goto label_3a4fc8;
    }
    ctx->pc = 0x3A4FC0u;
    SET_GPR_U32(ctx, 31, 0x3A4FC8u);
    ctx->pc = 0x3A4FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4FC0u;
            // 0x3a4fc4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4FC8u; }
        if (ctx->pc != 0x3A4FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4FC8u; }
        if (ctx->pc != 0x3A4FC8u) { return; }
    }
    ctx->pc = 0x3A4FC8u;
label_3a4fc8:
    // 0x3a4fc8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3a4fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3a4fcc:
    // 0x3a4fcc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a4fccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3a4fd0:
    // 0x3a4fd0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3a4fd4:
    if (ctx->pc == 0x3A4FD4u) {
        ctx->pc = 0x3A4FD4u;
            // 0x3a4fd4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A4FD8u;
        goto label_3a4fd8;
    }
    ctx->pc = 0x3A4FD0u;
    {
        const bool branch_taken_0x3a4fd0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3a4fd0) {
            ctx->pc = 0x3A4FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4FD0u;
            // 0x3a4fd4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A4FE4u;
            goto label_3a4fe4;
        }
    }
    ctx->pc = 0x3A4FD8u;
label_3a4fd8:
    // 0x3a4fd8: 0xc0400a8  jal         func_1002A0
label_3a4fdc:
    if (ctx->pc == 0x3A4FDCu) {
        ctx->pc = 0x3A4FDCu;
            // 0x3a4fdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A4FE0u;
        goto label_3a4fe0;
    }
    ctx->pc = 0x3A4FD8u;
    SET_GPR_U32(ctx, 31, 0x3A4FE0u);
    ctx->pc = 0x3A4FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4FD8u;
            // 0x3a4fdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4FE0u; }
        if (ctx->pc != 0x3A4FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A4FE0u; }
        if (ctx->pc != 0x3A4FE0u) { return; }
    }
    ctx->pc = 0x3A4FE0u;
label_3a4fe0:
    // 0x3a4fe0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a4fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a4fe4:
    // 0x3a4fe4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a4fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a4fe8:
    // 0x3a4fe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a4fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a4fec:
    // 0x3a4fec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a4fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a4ff0:
    // 0x3a4ff0: 0x3e00008  jr          $ra
label_3a4ff4:
    if (ctx->pc == 0x3A4FF4u) {
        ctx->pc = 0x3A4FF4u;
            // 0x3a4ff4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3A4FF8u;
        goto label_3a4ff8;
    }
    ctx->pc = 0x3A4FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4FF0u;
            // 0x3a4ff4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A4FF8u;
label_3a4ff8:
    // 0x3a4ff8: 0x0  nop
    ctx->pc = 0x3a4ff8u;
    // NOP
label_3a4ffc:
    // 0x3a4ffc: 0x0  nop
    ctx->pc = 0x3a4ffcu;
    // NOP
}
