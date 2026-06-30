#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C6890
// Address: 0x4c6890 - 0x4c6a20
void sub_004C6890_0x4c6890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C6890_0x4c6890");
#endif

    switch (ctx->pc) {
        case 0x4c68ccu: goto label_4c68cc;
        case 0x4c6990u: goto label_4c6990;
        case 0x4c69e8u: goto label_4c69e8;
        case 0x4c6a00u: goto label_4c6a00;
        default: break;
    }

    ctx->pc = 0x4c6890u;

    // 0x4c6890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c6890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c6894: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c6894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c6898: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c6898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c689c: 0x244216d0  addiu       $v0, $v0, 0x16D0
    ctx->pc = 0x4c689cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5840));
    // 0x4c68a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c68a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c68a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4c68a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x4c68a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4c68a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4c68ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c68acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c68b0: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x4c68b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x4c68b4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x4c68b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x4c68b8: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x4c68b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x4c68bc: 0xa0800009  sb          $zero, 0x9($a0)
    ctx->pc = 0x4c68bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x4c68c0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x4c68c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x4c68c4: 0xc1319b4  jal         func_4C66D0
    ctx->pc = 0x4C68C4u;
    SET_GPR_U32(ctx, 31, 0x4C68CCu);
    ctx->pc = 0x4C68C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C68C4u;
            // 0x4c68c8: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C66D0u;
    if (runtime->hasFunction(0x4C66D0u)) {
        auto targetFn = runtime->lookupFunction(0x4C66D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C68CCu; }
        if (ctx->pc != 0x4C68CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C66D0_0x4c66d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C68CCu; }
        if (ctx->pc != 0x4C68CCu) { return; }
    }
    ctx->pc = 0x4C68CCu;
label_4c68cc:
    // 0x4c68cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4c68ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x4c68d0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4c68d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4c68d4: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x4c68d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x4c68d8: 0x8c630ec8  lw          $v1, 0xEC8($v1)
    ctx->pc = 0x4c68d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
    // 0x4c68dc: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x4c68dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x4c68e0: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x4c68e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x4c68e4: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x4c68e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x4c68e8: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x4C68E8u;
    {
        const bool branch_taken_0x4c68e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C68ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C68E8u;
            // 0x4c68ec: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c68e8) {
            ctx->pc = 0x4C6978u;
            goto label_4c6978;
        }
    }
    ctx->pc = 0x4C68F0u;
    // 0x4c68f0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4c68f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4c68f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c68f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4c68f8: 0x24637300  addiu       $v1, $v1, 0x7300
    ctx->pc = 0x4c68f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29440));
    // 0x4c68fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c68fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c6900: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4c6900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c6904: 0x400008  jr          $v0
    ctx->pc = 0x4C6904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4C690Cu: goto label_4c690c;
            case 0x4C6924u: goto label_4c6924;
            case 0x4C693Cu: goto label_4c693c;
            case 0x4C6954u: goto label_4c6954;
            case 0x4C696Cu: goto label_4c696c;
            case 0x4C6978u: goto label_4c6978;
            default: break;
        }
        return;
    }
    ctx->pc = 0x4C690Cu;
label_4c690c:
    // 0x4c690c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4c690cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4c6910: 0x80420430  lb          $v0, 0x430($v0)
    ctx->pc = 0x4c6910u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1072)));
    // 0x4c6914: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x4c6914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x4c6918: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4c6918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4c691c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4C691Cu;
    {
        const bool branch_taken_0x4c691c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C691Cu;
            // 0x4c6920: 0xa2020009  sb          $v0, 0x9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c691c) {
            ctx->pc = 0x4C697Cu;
            goto label_4c697c;
        }
    }
    ctx->pc = 0x4C6924u;
label_4c6924:
    // 0x4c6924: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4c6924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4c6928: 0x80420435  lb          $v0, 0x435($v0)
    ctx->pc = 0x4c6928u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1077)));
    // 0x4c692c: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x4c692cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x4c6930: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4c6930u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4c6934: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4C6934u;
    {
        const bool branch_taken_0x4c6934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6934u;
            // 0x4c6938: 0xa2020009  sb          $v0, 0x9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6934) {
            ctx->pc = 0x4C697Cu;
            goto label_4c697c;
        }
    }
    ctx->pc = 0x4C693Cu;
label_4c693c:
    // 0x4c693c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4c693cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4c6940: 0x80420433  lb          $v0, 0x433($v0)
    ctx->pc = 0x4c6940u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1075)));
    // 0x4c6944: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x4c6944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x4c6948: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4c6948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4c694c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4C694Cu;
    {
        const bool branch_taken_0x4c694c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C694Cu;
            // 0x4c6950: 0xa2020009  sb          $v0, 0x9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c694c) {
            ctx->pc = 0x4C697Cu;
            goto label_4c697c;
        }
    }
    ctx->pc = 0x4C6954u;
label_4c6954:
    // 0x4c6954: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4c6954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4c6958: 0x8042043d  lb          $v0, 0x43D($v0)
    ctx->pc = 0x4c6958u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1085)));
    // 0x4c695c: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x4c695cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x4c6960: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4c6960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4c6964: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4C6964u;
    {
        const bool branch_taken_0x4c6964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6964u;
            // 0x4c6968: 0xa2020009  sb          $v0, 0x9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6964) {
            ctx->pc = 0x4C697Cu;
            goto label_4c697c;
        }
    }
    ctx->pc = 0x4C696Cu;
label_4c696c:
    // 0x4c696c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c6970: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4C6970u;
    {
        const bool branch_taken_0x4c6970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6970u;
            // 0x4c6974: 0xa2020009  sb          $v0, 0x9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6970) {
            ctx->pc = 0x4C697Cu;
            goto label_4c697c;
        }
    }
    ctx->pc = 0x4C6978u;
label_4c6978:
    // 0x4c6978: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x4c6978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
label_4c697c:
    // 0x4c697c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c697cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c6980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c6984: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c6984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c6988: 0x3e00008  jr          $ra
    ctx->pc = 0x4C6988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C698Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6988u;
            // 0x4c698c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C6990u;
label_4c6990:
    // 0x4c6990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c6990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c6994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c6994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c6998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c6998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4c699c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c699cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c69a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c69a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c69a4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4C69A4u;
    {
        const bool branch_taken_0x4c69a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C69A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C69A4u;
            // 0x4c69a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c69a4) {
            ctx->pc = 0x4C6A00u;
            goto label_4c6a00;
        }
    }
    ctx->pc = 0x4C69ACu;
    // 0x4c69ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c69acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c69b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c69b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c69b4: 0x246316f0  addiu       $v1, $v1, 0x16F0
    ctx->pc = 0x4c69b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5872));
    // 0x4c69b8: 0x24421728  addiu       $v0, $v0, 0x1728
    ctx->pc = 0x4c69b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5928));
    // 0x4c69bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c69bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c69c0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C69C0u;
    {
        const bool branch_taken_0x4c69c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C69C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C69C0u;
            // 0x4c69c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c69c0) {
            ctx->pc = 0x4C69E8u;
            goto label_4c69e8;
        }
    }
    ctx->pc = 0x4C69C8u;
    // 0x4c69c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c69c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c69cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c69d0: 0x246317e0  addiu       $v1, $v1, 0x17E0
    ctx->pc = 0x4c69d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6112));
    // 0x4c69d4: 0x24421818  addiu       $v0, $v0, 0x1818
    ctx->pc = 0x4c69d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6168));
    // 0x4c69d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c69d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c69dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c69dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c69e0: 0xc131a88  jal         func_4C6A20
    ctx->pc = 0x4C69E0u;
    SET_GPR_U32(ctx, 31, 0x4C69E8u);
    ctx->pc = 0x4C69E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C69E0u;
            // 0x4c69e4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C6A20u;
    if (runtime->hasFunction(0x4C6A20u)) {
        auto targetFn = runtime->lookupFunction(0x4C6A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C69E8u; }
        if (ctx->pc != 0x4C69E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C6A20_0x4c6a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C69E8u; }
        if (ctx->pc != 0x4C69E8u) { return; }
    }
    ctx->pc = 0x4C69E8u;
label_4c69e8:
    // 0x4c69e8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4c69e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4c69ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c69ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4c69f0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C69F0u;
    {
        const bool branch_taken_0x4c69f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c69f0) {
            ctx->pc = 0x4C69F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C69F0u;
            // 0x4c69f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C6A04u;
            goto label_4c6a04;
        }
    }
    ctx->pc = 0x4C69F8u;
    // 0x4c69f8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C69F8u;
    SET_GPR_U32(ctx, 31, 0x4C6A00u);
    ctx->pc = 0x4C69FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C69F8u;
            // 0x4c69fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6A00u; }
        if (ctx->pc != 0x4C6A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6A00u; }
        if (ctx->pc != 0x4C6A00u) { return; }
    }
    ctx->pc = 0x4C6A00u;
label_4c6a00:
    // 0x4c6a00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c6a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c6a04:
    // 0x4c6a04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c6a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c6a08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c6a08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c6a0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c6a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c6a10: 0x3e00008  jr          $ra
    ctx->pc = 0x4C6A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C6A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6A10u;
            // 0x4c6a14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C6A18u;
    // 0x4c6a18: 0x0  nop
    ctx->pc = 0x4c6a18u;
    // NOP
    // 0x4c6a1c: 0x0  nop
    ctx->pc = 0x4c6a1cu;
    // NOP
}
