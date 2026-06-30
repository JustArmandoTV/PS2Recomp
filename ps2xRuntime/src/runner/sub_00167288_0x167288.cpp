#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00167288
// Address: 0x167288 - 0x167340
void sub_00167288_0x167288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167288_0x167288");
#endif

    ctx->pc = 0x167288u;

    // 0x167288: 0x28a50010  slti        $a1, $a1, 0x10
    ctx->pc = 0x167288u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x16728c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x16728cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167290: 0x14a00012  bnez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x167290u;
    {
        const bool branch_taken_0x167290 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x167294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167290u;
            // 0x167294: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167290) {
            ctx->pc = 0x1672DCu;
            goto label_1672dc;
        }
    }
    ctx->pc = 0x167298u;
    // 0x167298: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x167298u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16729c: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x16729cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1672a0: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1672a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1672a4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1672a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1672a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1672a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1672ac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1672acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1672b0: 0x1465000a  bne         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1672B0u;
    {
        const bool branch_taken_0x1672b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1672B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1672B0u;
            // 0x1672b4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672b0) {
            ctx->pc = 0x1672DCu;
            goto label_1672dc;
        }
    }
    ctx->pc = 0x1672B8u;
    // 0x1672b8: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x1672b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1672bc: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1672bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1672c0: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x1672c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1672c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1672c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672c8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1672c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1672cc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1672ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1672d0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1672d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1672d4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1672d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1672d8: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x1672d8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_1672dc:
    // 0x1672dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1672DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1672E4u;
    // 0x1672e4: 0x0  nop
    ctx->pc = 0x1672e4u;
    // NOP
    // 0x1672e8: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1672e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1672ec: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1672ECu;
    {
        const bool branch_taken_0x1672ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1672F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1672ECu;
            // 0x1672f0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672ec) {
            ctx->pc = 0x167318u;
            goto label_167318;
        }
    }
    ctx->pc = 0x1672F4u;
    // 0x1672f4: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1672f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1672f8: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1672F8u;
    {
        const bool branch_taken_0x1672f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1672f8) {
            ctx->pc = 0x1672FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1672F8u;
            // 0x1672fc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x167300u;
            goto label_167300;
        }
    }
    ctx->pc = 0x167300u;
label_167300:
    // 0x167300: 0x24420021  addiu       $v0, $v0, 0x21
    ctx->pc = 0x167300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
    // 0x167304: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x167304u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x167308: 0x1012  mflo        $v0
    ctx->pc = 0x167308u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x16730c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x16730cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x167310: 0x3e00008  jr          $ra
    ctx->pc = 0x167310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167310u;
            // 0x167314: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167318u;
label_167318:
    // 0x167318: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x167318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16731c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16731Cu;
    {
        const bool branch_taken_0x16731c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x16731c) {
            ctx->pc = 0x167320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16731Cu;
            // 0x167320: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x167324u;
            goto label_167324;
        }
    }
    ctx->pc = 0x167324u;
label_167324:
    // 0x167324: 0x24420039  addiu       $v0, $v0, 0x39
    ctx->pc = 0x167324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 57));
    // 0x167328: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x167328u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16732c: 0x1012  mflo        $v0
    ctx->pc = 0x16732cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x167330: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x167330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x167334: 0x3e00008  jr          $ra
    ctx->pc = 0x167334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167334u;
            // 0x167338: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16733Cu;
    // 0x16733c: 0x0  nop
    ctx->pc = 0x16733cu;
    // NOP
}
