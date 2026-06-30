#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015BAD0
// Address: 0x15bad0 - 0x15bbd0
void sub_0015BAD0_0x15bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BAD0_0x15bad0");
#endif

    ctx->pc = 0x15bad0u;

    // 0x15bad0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x15bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x15bad4: 0x5082003b  beql        $a0, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x15BAD4u;
    {
        const bool branch_taken_0x15bad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x15bad4) {
            ctx->pc = 0x15BAD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BAD4u;
            // 0x15bad8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BBC4u;
            goto label_15bbc4;
        }
    }
    ctx->pc = 0x15BADCu;
    // 0x15badc: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x15badcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x15bae0: 0x50820038  beql        $a0, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x15BAE0u;
    {
        const bool branch_taken_0x15bae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x15bae0) {
            ctx->pc = 0x15BAE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BAE0u;
            // 0x15bae4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BBC4u;
            goto label_15bbc4;
        }
    }
    ctx->pc = 0x15BAE8u;
    // 0x15bae8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x15bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x15baec: 0x50820035  beql        $a0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x15BAECu;
    {
        const bool branch_taken_0x15baec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x15baec) {
            ctx->pc = 0x15BAF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BAECu;
            // 0x15baf0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BBC4u;
            goto label_15bbc4;
        }
    }
    ctx->pc = 0x15BAF4u;
    // 0x15baf4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15baf8: 0x50820032  beql        $a0, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x15BAF8u;
    {
        const bool branch_taken_0x15baf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x15baf8) {
            ctx->pc = 0x15BAFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BAF8u;
            // 0x15bafc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BBC4u;
            goto label_15bbc4;
        }
    }
    ctx->pc = 0x15BB00u;
    // 0x15bb00: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x15bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x15bb04: 0x5082002f  beql        $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x15BB04u;
    {
        const bool branch_taken_0x15bb04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x15bb04) {
            ctx->pc = 0x15BB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB04u;
            // 0x15bb08: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BBC4u;
            goto label_15bbc4;
        }
    }
    ctx->pc = 0x15BB0Cu;
    // 0x15bb0c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x15bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15bb10: 0x5082002c  beql        $a0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x15BB10u;
    {
        const bool branch_taken_0x15bb10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x15bb10) {
            ctx->pc = 0x15BB14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB10u;
            // 0x15bb14: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BBC4u;
            goto label_15bbc4;
        }
    }
    ctx->pc = 0x15BB18u;
    // 0x15bb18: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x15bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15bb1c: 0x50820029  beql        $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x15BB1Cu;
    {
        const bool branch_taken_0x15bb1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x15bb1c) {
            ctx->pc = 0x15BB20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB1Cu;
            // 0x15bb20: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BBC4u;
            goto label_15bbc4;
        }
    }
    ctx->pc = 0x15BB24u;
    // 0x15bb24: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x15bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15bb28: 0x50820026  beql        $a0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x15BB28u;
    {
        const bool branch_taken_0x15bb28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x15bb28) {
            ctx->pc = 0x15BB2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB28u;
            // 0x15bb2c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BBC4u;
            goto label_15bbc4;
        }
    }
    ctx->pc = 0x15BB30u;
    // 0x15bb30: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x15bb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15bb34: 0x50850023  beql        $a0, $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x15BB34u;
    {
        const bool branch_taken_0x15bb34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x15bb34) {
            ctx->pc = 0x15BB38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB34u;
            // 0x15bb38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BBC4u;
            goto label_15bbc4;
        }
    }
    ctx->pc = 0x15BB3Cu;
    // 0x15bb3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15bb40: 0x50830020  beql        $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x15BB40u;
    {
        const bool branch_taken_0x15bb40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15bb40) {
            ctx->pc = 0x15BB44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB40u;
            // 0x15bb44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BBC4u;
            goto label_15bbc4;
        }
    }
    ctx->pc = 0x15BB48u;
    // 0x15bb48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bb4c: 0x5083001d  beql        $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x15BB4Cu;
    {
        const bool branch_taken_0x15bb4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15bb4c) {
            ctx->pc = 0x15BB50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB4Cu;
            // 0x15bb50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BBC4u;
            goto label_15bbc4;
        }
    }
    ctx->pc = 0x15BB54u;
    // 0x15bb54: 0x2c810201  sltiu       $at, $a0, 0x201
    ctx->pc = 0x15bb54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)513) ? 1 : 0);
    // 0x15bb58: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BB58u;
    {
        const bool branch_taken_0x15bb58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bb58) {
            ctx->pc = 0x15BB5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB58u;
            // 0x15bb5c: 0x2c810101  sltiu       $at, $a0, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BB68u;
            goto label_15bb68;
        }
    }
    ctx->pc = 0x15BB60u;
    // 0x15bb60: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x15BB60u;
    {
        const bool branch_taken_0x15bb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB60u;
            // 0x15bb64: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb60) {
            ctx->pc = 0x15BBC4u;
            goto label_15bbc4;
        }
    }
    ctx->pc = 0x15BB68u;
label_15bb68:
    // 0x15bb68: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BB68u;
    {
        const bool branch_taken_0x15bb68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bb68) {
            ctx->pc = 0x15BB6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB68u;
            // 0x15bb6c: 0x2c810081  sltiu       $at, $a0, 0x81 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BB78u;
            goto label_15bb78;
        }
    }
    ctx->pc = 0x15BB70u;
    // 0x15bb70: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15BB70u;
    {
        const bool branch_taken_0x15bb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB70u;
            // 0x15bb74: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb70) {
            ctx->pc = 0x15BBC4u;
            goto label_15bbc4;
        }
    }
    ctx->pc = 0x15BB78u;
label_15bb78:
    // 0x15bb78: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BB78u;
    {
        const bool branch_taken_0x15bb78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bb78) {
            ctx->pc = 0x15BB7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB78u;
            // 0x15bb7c: 0x2c810041  sltiu       $at, $a0, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BB88u;
            goto label_15bb88;
        }
    }
    ctx->pc = 0x15BB80u;
    // 0x15bb80: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15BB80u;
    {
        const bool branch_taken_0x15bb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bb80) {
            ctx->pc = 0x15BBC4u;
            goto label_15bbc4;
        }
    }
    ctx->pc = 0x15BB88u;
label_15bb88:
    // 0x15bb88: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BB88u;
    {
        const bool branch_taken_0x15bb88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bb88) {
            ctx->pc = 0x15BB8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB88u;
            // 0x15bb8c: 0x2c810021  sltiu       $at, $a0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BB98u;
            goto label_15bb98;
        }
    }
    ctx->pc = 0x15BB90u;
    // 0x15bb90: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15BB90u;
    {
        const bool branch_taken_0x15bb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB90u;
            // 0x15bb94: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb90) {
            ctx->pc = 0x15BBC4u;
            goto label_15bbc4;
        }
    }
    ctx->pc = 0x15BB98u;
label_15bb98:
    // 0x15bb98: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BB98u;
    {
        const bool branch_taken_0x15bb98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bb98) {
            ctx->pc = 0x15BB9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB98u;
            // 0x15bb9c: 0x2c810011  sltiu       $at, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BBA8u;
            goto label_15bba8;
        }
    }
    ctx->pc = 0x15BBA0u;
    // 0x15bba0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15BBA0u;
    {
        const bool branch_taken_0x15bba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BBA0u;
            // 0x15bba4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bba0) {
            ctx->pc = 0x15BBC4u;
            goto label_15bbc4;
        }
    }
    ctx->pc = 0x15BBA8u;
label_15bba8:
    // 0x15bba8: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BBA8u;
    {
        const bool branch_taken_0x15bba8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bba8) {
            ctx->pc = 0x15BBACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BBA8u;
            // 0x15bbac: 0x2c810009  sltiu       $at, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BBB8u;
            goto label_15bbb8;
        }
    }
    ctx->pc = 0x15BBB0u;
    // 0x15bbb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15BBB0u;
    {
        const bool branch_taken_0x15bbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BBB0u;
            // 0x15bbb4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbb0) {
            ctx->pc = 0x15BBC4u;
            goto label_15bbc4;
        }
    }
    ctx->pc = 0x15BBB8u;
label_15bbb8:
    // 0x15bbb8: 0x54200001  bnel        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x15BBB8u;
    {
        const bool branch_taken_0x15bbb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bbb8) {
            ctx->pc = 0x15BBBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BBB8u;
            // 0x15bbbc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BBC0u;
            goto label_15bbc0;
        }
    }
    ctx->pc = 0x15BBC0u;
label_15bbc0:
    // 0x15bbc0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x15bbc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15bbc4:
    // 0x15bbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x15BBC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BBCCu;
    // 0x15bbcc: 0x0  nop
    ctx->pc = 0x15bbccu;
    // NOP
}
