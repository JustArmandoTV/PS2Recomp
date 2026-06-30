#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00140E20
// Address: 0x140e20 - 0x1411c0
void sub_00140E20_0x140e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140E20_0x140e20");
#endif

    switch (ctx->pc) {
        case 0x140f58u: goto label_140f58;
        case 0x140f60u: goto label_140f60;
        case 0x140f74u: goto label_140f74;
        case 0x140fc0u: goto label_140fc0;
        case 0x140fc8u: goto label_140fc8;
        case 0x140fe8u: goto label_140fe8;
        case 0x140ff8u: goto label_140ff8;
        case 0x14102cu: goto label_14102c;
        case 0x141048u: goto label_141048;
        case 0x141088u: goto label_141088;
        case 0x14109cu: goto label_14109c;
        case 0x141108u: goto label_141108;
        case 0x141130u: goto label_141130;
        case 0x14118cu: goto label_14118c;
        case 0x141198u: goto label_141198;
        default: break;
    }

    ctx->pc = 0x140e20u;

    // 0x140e20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x140e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x140e24: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140e28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x140e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x140e2c: 0x24425880  addiu       $v0, $v0, 0x5880
    ctx->pc = 0x140e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22656));
    // 0x140e30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x140e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x140e34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x140e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x140e38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x140e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140e3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x140e40: 0xaf8081d4  sw          $zero, -0x7E2C($gp)
    ctx->pc = 0x140e40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 0));
    // 0x140e44: 0xaf8281d0  sw          $v0, -0x7E30($gp)
    ctx->pc = 0x140e44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934992), GPR_U32(ctx, 2));
    // 0x140e48: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x140e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x140e4c: 0x8c910038  lw          $s1, 0x38($a0)
    ctx->pc = 0x140e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x140e50: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x140e50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x140e54: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x140e54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140e58: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x140e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x140e5c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x140e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x140e60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140E60u;
    {
        const bool branch_taken_0x140e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140E60u;
            // 0x140e64: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140e60) {
            ctx->pc = 0x140E70u;
            goto label_140e70;
        }
    }
    ctx->pc = 0x140E68u;
    // 0x140e68: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x140E68u;
    {
        const bool branch_taken_0x140e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140E68u;
            // 0x140e6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140e68) {
            ctx->pc = 0x14119Cu;
            goto label_14119c;
        }
    }
    ctx->pc = 0x140E70u;
label_140e70:
    // 0x140e70: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x140e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x140e74: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x140E74u;
    {
        const bool branch_taken_0x140e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140e74) {
            ctx->pc = 0x140E78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140E74u;
            // 0x140e78: 0x8e430040  lw          $v1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140E8Cu;
            goto label_140e8c;
        }
    }
    ctx->pc = 0x140E7Cu;
    // 0x140e7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x140e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140e80: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140e84: 0xac435804  sw          $v1, 0x5804($v0)
    ctx->pc = 0x140e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22532), GPR_U32(ctx, 3));
    // 0x140e88: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x140e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_140e8c:
    // 0x140e8c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x140e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x140e90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140e94: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x140E94u;
    {
        const bool branch_taken_0x140e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140e94) {
            ctx->pc = 0x140EA0u;
            goto label_140ea0;
        }
    }
    ctx->pc = 0x140E9Cu;
    // 0x140e9c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x140e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140ea0:
    // 0x140ea0: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x140EA0u;
    {
        const bool branch_taken_0x140ea0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x140ea0) {
            ctx->pc = 0x140EC0u;
            goto label_140ec0;
        }
    }
    ctx->pc = 0x140EA8u;
    // 0x140ea8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x140ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x140eac: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x140eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x140eb0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140EB0u;
    {
        const bool branch_taken_0x140eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x140eb0) {
            ctx->pc = 0x140EC0u;
            goto label_140ec0;
        }
    }
    ctx->pc = 0x140EB8u;
    // 0x140eb8: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x140EB8u;
    {
        const bool branch_taken_0x140eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140EB8u;
            // 0x140ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140eb8) {
            ctx->pc = 0x14119Cu;
            goto label_14119c;
        }
    }
    ctx->pc = 0x140EC0u;
label_140ec0:
    // 0x140ec0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140ec4: 0xac405828  sw          $zero, 0x5828($v0)
    ctx->pc = 0x140ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 0));
    // 0x140ec8: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x140ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x140ecc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x140eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x140ed0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x140ED0u;
    {
        const bool branch_taken_0x140ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140ed0) {
            ctx->pc = 0x140ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140ED0u;
            // 0x140ed4: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140EE8u;
            goto label_140ee8;
        }
    }
    ctx->pc = 0x140ED8u;
    // 0x140ed8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x140ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140edc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140ee0: 0xac435810  sw          $v1, 0x5810($v0)
    ctx->pc = 0x140ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22544), GPR_U32(ctx, 3));
    // 0x140ee4: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x140ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_140ee8:
    // 0x140ee8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x140ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x140eec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x140EECu;
    {
        const bool branch_taken_0x140eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140eec) {
            ctx->pc = 0x140EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140EECu;
            // 0x140ef0: 0x8e430040  lw          $v1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140F04u;
            goto label_140f04;
        }
    }
    ctx->pc = 0x140EF4u;
    // 0x140ef4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x140ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140ef8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140efc: 0xac4357e0  sw          $v1, 0x57E0($v0)
    ctx->pc = 0x140efcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22496), GPR_U32(ctx, 3));
    // 0x140f00: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x140f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_140f04:
    // 0x140f04: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x140f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x140f08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140f0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x140F0Cu;
    {
        const bool branch_taken_0x140f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140f0c) {
            ctx->pc = 0x140F20u;
            goto label_140f20;
        }
    }
    ctx->pc = 0x140F14u;
    // 0x140f14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x140f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140f18: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140f1c: 0xac43580c  sw          $v1, 0x580C($v0)
    ctx->pc = 0x140f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22540), GPR_U32(ctx, 3));
label_140f20:
    // 0x140f20: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140f24: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x140f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x140f28: 0x8c45580c  lw          $a1, 0x580C($v0)
    ctx->pc = 0x140f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22540)));
    // 0x140f2c: 0x248454e0  addiu       $a0, $a0, 0x54E0
    ctx->pc = 0x140f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21728));
    // 0x140f30: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x140f30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x140f34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140f38: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x140f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x140f3c: 0x8c435828  lw          $v1, 0x5828($v0)
    ctx->pc = 0x140f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
    // 0x140f40: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x140f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x140f44: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140f48: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x140f48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x140f4c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x140f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x140f50: 0xc0500f4  jal         func_1403D0
    ctx->pc = 0x140F50u;
    SET_GPR_U32(ctx, 31, 0x140F58u);
    ctx->pc = 0x140F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140F50u;
            // 0x140f54: 0xac435828  sw          $v1, 0x5828($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1403D0u;
    if (runtime->hasFunction(0x1403D0u)) {
        auto targetFn = runtime->lookupFunction(0x1403D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140F58u; }
        if (ctx->pc != 0x140F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001403D0_0x1403d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140F58u; }
        if (ctx->pc != 0x140F58u) { return; }
    }
    ctx->pc = 0x140F58u;
label_140f58:
    // 0x140f58: 0xc0500cc  jal         func_140330
    ctx->pc = 0x140F58u;
    SET_GPR_U32(ctx, 31, 0x140F60u);
    ctx->pc = 0x140330u;
    if (runtime->hasFunction(0x140330u)) {
        auto targetFn = runtime->lookupFunction(0x140330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140F60u; }
        if (ctx->pc != 0x140F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140330_0x140330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140F60u; }
        if (ctx->pc != 0x140F60u) { return; }
    }
    ctx->pc = 0x140F60u;
label_140f60:
    // 0x140f60: 0x32020800  andi        $v0, $s0, 0x800
    ctx->pc = 0x140f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
    // 0x140f64: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x140F64u;
    {
        const bool branch_taken_0x140f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140f64) {
            ctx->pc = 0x140F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140F64u;
            // 0x140f68: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140F7Cu;
            goto label_140f7c;
        }
    }
    ctx->pc = 0x140F6Cu;
    // 0x140f6c: 0xc050470  jal         func_1411C0
    ctx->pc = 0x140F6Cu;
    SET_GPR_U32(ctx, 31, 0x140F74u);
    ctx->pc = 0x140F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140F6Cu;
            // 0x140f70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1411C0u;
    if (runtime->hasFunction(0x1411C0u)) {
        auto targetFn = runtime->lookupFunction(0x1411C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140F74u; }
        if (ctx->pc != 0x140F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001411C0_0x1411c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140F74u; }
        if (ctx->pc != 0x140F74u) { return; }
    }
    ctx->pc = 0x140F74u;
label_140f74:
    // 0x140f74: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x140F74u;
    {
        const bool branch_taken_0x140f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F74u;
            // 0x140f78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f74) {
            ctx->pc = 0x14119Cu;
            goto label_14119c;
        }
    }
    ctx->pc = 0x140F7Cu;
label_140f7c:
    // 0x140f7c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140f80: 0x8c435820  lw          $v1, 0x5820($v0)
    ctx->pc = 0x140f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22560)));
    // 0x140f84: 0x8f8582f0  lw          $a1, -0x7D10($gp)
    ctx->pc = 0x140f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x140f88: 0x30840020  andi        $a0, $a0, 0x20
    ctx->pc = 0x140f88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x140f8c: 0x803027  not         $a2, $a0
    ctx->pc = 0x140f8cu;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x140f90: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140f94: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x140f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x140f98: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x140f98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x140f9c: 0x8c42586c  lw          $v0, 0x586C($v0)
    ctx->pc = 0x140f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22636)));
    // 0x140fa0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x140fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x140fa4: 0xa38025  or          $s0, $a1, $v1
    ctx->pc = 0x140fa4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x140fa8: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x140FA8u;
    {
        const bool branch_taken_0x140fa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x140fa8) {
            ctx->pc = 0x140FD8u;
            goto label_140fd8;
        }
    }
    ctx->pc = 0x140FB0u;
    // 0x140fb0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x140fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x140fb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x140fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140fb8: 0xc057240  jal         func_15C900
    ctx->pc = 0x140FB8u;
    SET_GPR_U32(ctx, 31, 0x140FC0u);
    ctx->pc = 0x140FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140FB8u;
            // 0x140fbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C900u;
    if (runtime->hasFunction(0x15C900u)) {
        auto targetFn = runtime->lookupFunction(0x15C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FC0u; }
        if (ctx->pc != 0x140FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C900_0x15c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FC0u; }
        if (ctx->pc != 0x140FC0u) { return; }
    }
    ctx->pc = 0x140FC0u;
label_140fc0:
    // 0x140fc0: 0xc05724c  jal         func_15C930
    ctx->pc = 0x140FC0u;
    SET_GPR_U32(ctx, 31, 0x140FC8u);
    ctx->pc = 0x140FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140FC0u;
            // 0x140fc4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C930u;
    if (runtime->hasFunction(0x15C930u)) {
        auto targetFn = runtime->lookupFunction(0x15C930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FC8u; }
        if (ctx->pc != 0x140FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C930_0x15c930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FC8u; }
        if (ctx->pc != 0x140FC8u) { return; }
    }
    ctx->pc = 0x140FC8u;
label_140fc8:
    // 0x140fc8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x140fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x140fcc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140fd0: 0xac70586c  sw          $s0, 0x586C($v1)
    ctx->pc = 0x140fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22636), GPR_U32(ctx, 16));
    // 0x140fd4: 0xac405870  sw          $zero, 0x5870($v0)
    ctx->pc = 0x140fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22640), GPR_U32(ctx, 0));
label_140fd8:
    // 0x140fd8: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x140FD8u;
    {
        const bool branch_taken_0x140fd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x140fd8) {
            ctx->pc = 0x140FDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140FD8u;
            // 0x140fdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140FF0u;
            goto label_140ff0;
        }
    }
    ctx->pc = 0x140FE0u;
    // 0x140fe0: 0xc05722c  jal         func_15C8B0
    ctx->pc = 0x140FE0u;
    SET_GPR_U32(ctx, 31, 0x140FE8u);
    ctx->pc = 0x140FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140FE0u;
            // 0x140fe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C8B0u;
    if (runtime->hasFunction(0x15C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FE8u; }
        if (ctx->pc != 0x140FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8B0_0x15c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FE8u; }
        if (ctx->pc != 0x140FE8u) { return; }
    }
    ctx->pc = 0x140FE8u;
label_140fe8:
    // 0x140fe8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x140FE8u;
    {
        const bool branch_taken_0x140fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140FE8u;
            // 0x140fec: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140fe8) {
            ctx->pc = 0x140FFCu;
            goto label_140ffc;
        }
    }
    ctx->pc = 0x140FF0u;
label_140ff0:
    // 0x140ff0: 0xc057238  jal         func_15C8E0
    ctx->pc = 0x140FF0u;
    SET_GPR_U32(ctx, 31, 0x140FF8u);
    ctx->pc = 0x15C8E0u;
    if (runtime->hasFunction(0x15C8E0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FF8u; }
        if (ctx->pc != 0x140FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8E0_0x15c8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FF8u; }
        if (ctx->pc != 0x140FF8u) { return; }
    }
    ctx->pc = 0x140FF8u;
label_140ff8:
    // 0x140ff8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x140ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_140ffc:
    // 0x140ffc: 0x9e470048  lwu         $a3, 0x48($s2)
    ctx->pc = 0x140ffcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x141000: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x141000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
    // 0x141004: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x141004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x141008: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x141008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14100c: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14100cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
    // 0x141010: 0x71c38  dsll        $v1, $a3, 16
    ctx->pc = 0x141010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 16);
    // 0x141014: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x141014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x141018: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x141018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x14101c: 0x24a80001  addiu       $t0, $a1, 0x1
    ctx->pc = 0x14101cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x141020: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x141020u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x141024: 0xc057540  jal         func_15D500
    ctx->pc = 0x141024u;
    SET_GPR_U32(ctx, 31, 0x14102Cu);
    ctx->pc = 0x141028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141024u;
            // 0x141028: 0xaf8881d4  sw          $t0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14102Cu; }
        if (ctx->pc != 0x14102Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14102Cu; }
        if (ctx->pc != 0x14102Cu) { return; }
    }
    ctx->pc = 0x14102Cu;
label_14102c:
    // 0x14102c: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x14102cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
    // 0x141030: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x141030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
    // 0x141034: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x141034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x141038: 0xaf8281d4  sw          $v0, -0x7E2C($gp)
    ctx->pc = 0x141038u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
    // 0x14103c: 0x9e47003c  lwu         $a3, 0x3C($s2)
    ctx->pc = 0x14103cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x141040: 0xc057540  jal         func_15D500
    ctx->pc = 0x141040u;
    SET_GPR_U32(ctx, 31, 0x141048u);
    ctx->pc = 0x141044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141040u;
            // 0x141044: 0x24060047  addiu       $a2, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141048u; }
        if (ctx->pc != 0x141048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141048u; }
        if (ctx->pc != 0x141048u) { return; }
    }
    ctx->pc = 0x141048u;
label_141048:
    // 0x141048: 0x8e470040  lw          $a3, 0x40($s2)
    ctx->pc = 0x141048u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x14104c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x14104cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x141050: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x141050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x141054: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x141054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
    // 0x141058: 0x24422030  addiu       $v0, $v0, 0x2030
    ctx->pc = 0x141058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8240));
    // 0x14105c: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14105cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
    // 0x141060: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x141060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x141064: 0x3382b  sltu        $a3, $zero, $v1
    ctx->pc = 0x141064u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x141068: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x141068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14106c: 0xaf8381d4  sw          $v1, -0x7E2C($gp)
    ctx->pc = 0x14106cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 3));
    // 0x141070: 0x38e30001  xori        $v1, $a3, 0x1
    ctx->pc = 0x141070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x141074: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x141074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x141078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14107c: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x14107cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x141080: 0xc057540  jal         func_15D500
    ctx->pc = 0x141080u;
    SET_GPR_U32(ctx, 31, 0x141088u);
    ctx->pc = 0x141084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141080u;
            // 0x141084: 0x2406004e  addiu       $a2, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141088u; }
        if (ctx->pc != 0x141088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141088u; }
        if (ctx->pc != 0x141088u) { return; }
    }
    ctx->pc = 0x141088u;
label_141088:
    // 0x141088: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x141088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x14108c: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x14108Cu;
    {
        const bool branch_taken_0x14108c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14108c) {
            ctx->pc = 0x141090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14108Cu;
            // 0x141090: 0x8f8381a8  lw          $v1, -0x7E58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934952)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141134u;
            goto label_141134;
        }
    }
    ctx->pc = 0x141094u;
    // 0x141094: 0xc050284  jal         func_140A10
    ctx->pc = 0x141094u;
    SET_GPR_U32(ctx, 31, 0x14109Cu);
    ctx->pc = 0x141098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141094u;
            // 0x141098: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140A10u;
    if (runtime->hasFunction(0x140A10u)) {
        auto targetFn = runtime->lookupFunction(0x140A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14109Cu; }
        if (ctx->pc != 0x14109Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140A10_0x140a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14109Cu; }
        if (ctx->pc != 0x14109Cu) { return; }
    }
    ctx->pc = 0x14109Cu;
label_14109c:
    // 0x14109c: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x14109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1410a0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1410a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1410a4: 0x30637f00  andi        $v1, $v1, 0x7F00
    ctx->pc = 0x1410a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32512);
    // 0x1410a8: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1410A8u;
    {
        const bool branch_taken_0x1410a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1410a8) {
            ctx->pc = 0x141130u;
            goto label_141130;
        }
    }
    ctx->pc = 0x1410B0u;
    // 0x1410b0: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x1410b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1410b4: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1410B4u;
    {
        const bool branch_taken_0x1410b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1410b4) {
            ctx->pc = 0x141130u;
            goto label_141130;
        }
    }
    ctx->pc = 0x1410BCu;
    // 0x1410bc: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x1410bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1410c0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1410C0u;
    {
        const bool branch_taken_0x1410c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1410c0) {
            ctx->pc = 0x141130u;
            goto label_141130;
        }
    }
    ctx->pc = 0x1410C8u;
    // 0x1410c8: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x1410c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1410cc: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1410CCu;
    {
        const bool branch_taken_0x1410cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1410cc) {
            ctx->pc = 0x141110u;
            goto label_141110;
        }
    }
    ctx->pc = 0x1410D4u;
    // 0x1410d4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1410d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1410d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1410D8u;
    {
        const bool branch_taken_0x1410d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1410d8) {
            ctx->pc = 0x1410E8u;
            goto label_1410e8;
        }
    }
    ctx->pc = 0x1410E0u;
    // 0x1410e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1410E0u;
    {
        const bool branch_taken_0x1410e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1410e0) {
            ctx->pc = 0x141130u;
            goto label_141130;
        }
    }
    ctx->pc = 0x1410E8u;
label_1410e8:
    // 0x1410e8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1410e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1410ec: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1410ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1410f0: 0x8c635828  lw          $v1, 0x5828($v1)
    ctx->pc = 0x1410f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x1410f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1410f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1410f8: 0x248448e0  addiu       $a0, $a0, 0x48E0
    ctx->pc = 0x1410f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18656));
    // 0x1410fc: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1410fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x141100: 0xc04e4f4  jal         func_1393D0
    ctx->pc = 0x141100u;
    SET_GPR_U32(ctx, 31, 0x141108u);
    ctx->pc = 0x141104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141100u;
            // 0x141104: 0xac435828  sw          $v1, 0x5828($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1393D0u;
    if (runtime->hasFunction(0x1393D0u)) {
        auto targetFn = runtime->lookupFunction(0x1393D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141108u; }
        if (ctx->pc != 0x141108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001393D0_0x1393d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141108u; }
        if (ctx->pc != 0x141108u) { return; }
    }
    ctx->pc = 0x141108u;
label_141108:
    // 0x141108: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x141108u;
    {
        const bool branch_taken_0x141108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141108) {
            ctx->pc = 0x141130u;
            goto label_141130;
        }
    }
    ctx->pc = 0x141110u;
label_141110:
    // 0x141110: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x141110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x141114: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x141114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x141118: 0x8c635828  lw          $v1, 0x5828($v1)
    ctx->pc = 0x141118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x14111c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14111cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x141120: 0x248448e0  addiu       $a0, $a0, 0x48E0
    ctx->pc = 0x141120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18656));
    // 0x141124: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x141124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x141128: 0xc04e4f4  jal         func_1393D0
    ctx->pc = 0x141128u;
    SET_GPR_U32(ctx, 31, 0x141130u);
    ctx->pc = 0x14112Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141128u;
            // 0x14112c: 0xac435828  sw          $v1, 0x5828($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1393D0u;
    if (runtime->hasFunction(0x1393D0u)) {
        auto targetFn = runtime->lookupFunction(0x1393D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141130u; }
        if (ctx->pc != 0x141130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001393D0_0x1393d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141130u; }
        if (ctx->pc != 0x141130u) { return; }
    }
    ctx->pc = 0x141130u;
label_141130:
    // 0x141130: 0x8f8381a8  lw          $v1, -0x7E58($gp)
    ctx->pc = 0x141130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934952)));
label_141134:
    // 0x141134: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x141134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x141138: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x141138u;
    {
        const bool branch_taken_0x141138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14113Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141138u;
            // 0x14113c: 0xac405830  sw          $zero, 0x5830($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22576), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141138) {
            ctx->pc = 0x141178u;
            goto label_141178;
        }
    }
    ctx->pc = 0x141140u;
    // 0x141140: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x141140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x141144: 0x8c4257e0  lw          $v0, 0x57E0($v0)
    ctx->pc = 0x141144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22496)));
    // 0x141148: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x141148u;
    {
        const bool branch_taken_0x141148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141148) {
            ctx->pc = 0x14114Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141148u;
            // 0x14114c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141170u;
            goto label_141170;
        }
    }
    ctx->pc = 0x141150u;
    // 0x141150: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x141150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x141154: 0x8c425810  lw          $v0, 0x5810($v0)
    ctx->pc = 0x141154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22544)));
    // 0x141158: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x141158u;
    {
        const bool branch_taken_0x141158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141158) {
            ctx->pc = 0x14115Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141158u;
            // 0x14115c: 0x8f8681d4  lw          $a2, -0x7E2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14117Cu;
            goto label_14117c;
        }
    }
    ctx->pc = 0x141160u;
    // 0x141160: 0x8f8281a0  lw          $v0, -0x7E60($gp)
    ctx->pc = 0x141160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934944)));
    // 0x141164: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141164u;
    {
        const bool branch_taken_0x141164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141164) {
            ctx->pc = 0x141178u;
            goto label_141178;
        }
    }
    ctx->pc = 0x14116Cu;
    // 0x14116c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14116cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141170:
    // 0x141170: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x141170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x141174: 0xac435830  sw          $v1, 0x5830($v0)
    ctx->pc = 0x141174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22576), GPR_U32(ctx, 3));
label_141178:
    // 0x141178: 0x8f8681d4  lw          $a2, -0x7E2C($gp)
    ctx->pc = 0x141178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_14117c:
    // 0x14117c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14117cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x141180: 0x24845880  addiu       $a0, $a0, 0x5880
    ctx->pc = 0x141180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22656));
    // 0x141184: 0xc05750c  jal         func_15D430
    ctx->pc = 0x141184u;
    SET_GPR_U32(ctx, 31, 0x14118Cu);
    ctx->pc = 0x141188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141184u;
            // 0x141188: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14118Cu; }
        if (ctx->pc != 0x14118Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14118Cu; }
        if (ctx->pc != 0x14118Cu) { return; }
    }
    ctx->pc = 0x14118Cu;
label_14118c:
    // 0x14118c: 0xaf8281d0  sw          $v0, -0x7E30($gp)
    ctx->pc = 0x14118cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934992), GPR_U32(ctx, 2));
    // 0x141190: 0xc057528  jal         func_15D4A0
    ctx->pc = 0x141190u;
    SET_GPR_U32(ctx, 31, 0x141198u);
    ctx->pc = 0x141194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141190u;
            // 0x141194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141198u; }
        if (ctx->pc != 0x141198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141198u; }
        if (ctx->pc != 0x141198u) { return; }
    }
    ctx->pc = 0x141198u;
label_141198:
    // 0x141198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14119c:
    // 0x14119c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14119cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1411a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1411a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1411a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1411a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1411a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1411a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1411ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1411acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1411b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1411B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1411B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1411B0u;
            // 0x1411b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1411B8u;
    // 0x1411b8: 0x0  nop
    ctx->pc = 0x1411b8u;
    // NOP
    // 0x1411bc: 0x0  nop
    ctx->pc = 0x1411bcu;
    // NOP
}
