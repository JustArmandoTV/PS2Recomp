#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CB170
// Address: 0x2cb170 - 0x2cb3c0
void sub_002CB170_0x2cb170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB170_0x2cb170");
#endif

    switch (ctx->pc) {
        case 0x2cb170u: goto label_2cb170;
        case 0x2cb174u: goto label_2cb174;
        case 0x2cb178u: goto label_2cb178;
        case 0x2cb17cu: goto label_2cb17c;
        case 0x2cb180u: goto label_2cb180;
        case 0x2cb184u: goto label_2cb184;
        case 0x2cb188u: goto label_2cb188;
        case 0x2cb18cu: goto label_2cb18c;
        case 0x2cb190u: goto label_2cb190;
        case 0x2cb194u: goto label_2cb194;
        case 0x2cb198u: goto label_2cb198;
        case 0x2cb19cu: goto label_2cb19c;
        case 0x2cb1a0u: goto label_2cb1a0;
        case 0x2cb1a4u: goto label_2cb1a4;
        case 0x2cb1a8u: goto label_2cb1a8;
        case 0x2cb1acu: goto label_2cb1ac;
        case 0x2cb1b0u: goto label_2cb1b0;
        case 0x2cb1b4u: goto label_2cb1b4;
        case 0x2cb1b8u: goto label_2cb1b8;
        case 0x2cb1bcu: goto label_2cb1bc;
        case 0x2cb1c0u: goto label_2cb1c0;
        case 0x2cb1c4u: goto label_2cb1c4;
        case 0x2cb1c8u: goto label_2cb1c8;
        case 0x2cb1ccu: goto label_2cb1cc;
        case 0x2cb1d0u: goto label_2cb1d0;
        case 0x2cb1d4u: goto label_2cb1d4;
        case 0x2cb1d8u: goto label_2cb1d8;
        case 0x2cb1dcu: goto label_2cb1dc;
        case 0x2cb1e0u: goto label_2cb1e0;
        case 0x2cb1e4u: goto label_2cb1e4;
        case 0x2cb1e8u: goto label_2cb1e8;
        case 0x2cb1ecu: goto label_2cb1ec;
        case 0x2cb1f0u: goto label_2cb1f0;
        case 0x2cb1f4u: goto label_2cb1f4;
        case 0x2cb1f8u: goto label_2cb1f8;
        case 0x2cb1fcu: goto label_2cb1fc;
        case 0x2cb200u: goto label_2cb200;
        case 0x2cb204u: goto label_2cb204;
        case 0x2cb208u: goto label_2cb208;
        case 0x2cb20cu: goto label_2cb20c;
        case 0x2cb210u: goto label_2cb210;
        case 0x2cb214u: goto label_2cb214;
        case 0x2cb218u: goto label_2cb218;
        case 0x2cb21cu: goto label_2cb21c;
        case 0x2cb220u: goto label_2cb220;
        case 0x2cb224u: goto label_2cb224;
        case 0x2cb228u: goto label_2cb228;
        case 0x2cb22cu: goto label_2cb22c;
        case 0x2cb230u: goto label_2cb230;
        case 0x2cb234u: goto label_2cb234;
        case 0x2cb238u: goto label_2cb238;
        case 0x2cb23cu: goto label_2cb23c;
        case 0x2cb240u: goto label_2cb240;
        case 0x2cb244u: goto label_2cb244;
        case 0x2cb248u: goto label_2cb248;
        case 0x2cb24cu: goto label_2cb24c;
        case 0x2cb250u: goto label_2cb250;
        case 0x2cb254u: goto label_2cb254;
        case 0x2cb258u: goto label_2cb258;
        case 0x2cb25cu: goto label_2cb25c;
        case 0x2cb260u: goto label_2cb260;
        case 0x2cb264u: goto label_2cb264;
        case 0x2cb268u: goto label_2cb268;
        case 0x2cb26cu: goto label_2cb26c;
        case 0x2cb270u: goto label_2cb270;
        case 0x2cb274u: goto label_2cb274;
        case 0x2cb278u: goto label_2cb278;
        case 0x2cb27cu: goto label_2cb27c;
        case 0x2cb280u: goto label_2cb280;
        case 0x2cb284u: goto label_2cb284;
        case 0x2cb288u: goto label_2cb288;
        case 0x2cb28cu: goto label_2cb28c;
        case 0x2cb290u: goto label_2cb290;
        case 0x2cb294u: goto label_2cb294;
        case 0x2cb298u: goto label_2cb298;
        case 0x2cb29cu: goto label_2cb29c;
        case 0x2cb2a0u: goto label_2cb2a0;
        case 0x2cb2a4u: goto label_2cb2a4;
        case 0x2cb2a8u: goto label_2cb2a8;
        case 0x2cb2acu: goto label_2cb2ac;
        case 0x2cb2b0u: goto label_2cb2b0;
        case 0x2cb2b4u: goto label_2cb2b4;
        case 0x2cb2b8u: goto label_2cb2b8;
        case 0x2cb2bcu: goto label_2cb2bc;
        case 0x2cb2c0u: goto label_2cb2c0;
        case 0x2cb2c4u: goto label_2cb2c4;
        case 0x2cb2c8u: goto label_2cb2c8;
        case 0x2cb2ccu: goto label_2cb2cc;
        case 0x2cb2d0u: goto label_2cb2d0;
        case 0x2cb2d4u: goto label_2cb2d4;
        case 0x2cb2d8u: goto label_2cb2d8;
        case 0x2cb2dcu: goto label_2cb2dc;
        case 0x2cb2e0u: goto label_2cb2e0;
        case 0x2cb2e4u: goto label_2cb2e4;
        case 0x2cb2e8u: goto label_2cb2e8;
        case 0x2cb2ecu: goto label_2cb2ec;
        case 0x2cb2f0u: goto label_2cb2f0;
        case 0x2cb2f4u: goto label_2cb2f4;
        case 0x2cb2f8u: goto label_2cb2f8;
        case 0x2cb2fcu: goto label_2cb2fc;
        case 0x2cb300u: goto label_2cb300;
        case 0x2cb304u: goto label_2cb304;
        case 0x2cb308u: goto label_2cb308;
        case 0x2cb30cu: goto label_2cb30c;
        case 0x2cb310u: goto label_2cb310;
        case 0x2cb314u: goto label_2cb314;
        case 0x2cb318u: goto label_2cb318;
        case 0x2cb31cu: goto label_2cb31c;
        case 0x2cb320u: goto label_2cb320;
        case 0x2cb324u: goto label_2cb324;
        case 0x2cb328u: goto label_2cb328;
        case 0x2cb32cu: goto label_2cb32c;
        case 0x2cb330u: goto label_2cb330;
        case 0x2cb334u: goto label_2cb334;
        case 0x2cb338u: goto label_2cb338;
        case 0x2cb33cu: goto label_2cb33c;
        case 0x2cb340u: goto label_2cb340;
        case 0x2cb344u: goto label_2cb344;
        case 0x2cb348u: goto label_2cb348;
        case 0x2cb34cu: goto label_2cb34c;
        case 0x2cb350u: goto label_2cb350;
        case 0x2cb354u: goto label_2cb354;
        case 0x2cb358u: goto label_2cb358;
        case 0x2cb35cu: goto label_2cb35c;
        case 0x2cb360u: goto label_2cb360;
        case 0x2cb364u: goto label_2cb364;
        case 0x2cb368u: goto label_2cb368;
        case 0x2cb36cu: goto label_2cb36c;
        case 0x2cb370u: goto label_2cb370;
        case 0x2cb374u: goto label_2cb374;
        case 0x2cb378u: goto label_2cb378;
        case 0x2cb37cu: goto label_2cb37c;
        case 0x2cb380u: goto label_2cb380;
        case 0x2cb384u: goto label_2cb384;
        case 0x2cb388u: goto label_2cb388;
        case 0x2cb38cu: goto label_2cb38c;
        case 0x2cb390u: goto label_2cb390;
        case 0x2cb394u: goto label_2cb394;
        case 0x2cb398u: goto label_2cb398;
        case 0x2cb39cu: goto label_2cb39c;
        case 0x2cb3a0u: goto label_2cb3a0;
        case 0x2cb3a4u: goto label_2cb3a4;
        case 0x2cb3a8u: goto label_2cb3a8;
        case 0x2cb3acu: goto label_2cb3ac;
        case 0x2cb3b0u: goto label_2cb3b0;
        case 0x2cb3b4u: goto label_2cb3b4;
        case 0x2cb3b8u: goto label_2cb3b8;
        case 0x2cb3bcu: goto label_2cb3bc;
        default: break;
    }

    ctx->pc = 0x2cb170u;

label_2cb170:
    // 0x2cb170: 0x80788fc  j           func_1E23F0
label_2cb174:
    if (ctx->pc == 0x2CB174u) {
        ctx->pc = 0x2CB178u;
        goto label_2cb178;
    }
    ctx->pc = 0x2CB170u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2CB178u;
label_2cb178:
    // 0x2cb178: 0x0  nop
    ctx->pc = 0x2cb178u;
    // NOP
label_2cb17c:
    // 0x2cb17c: 0x0  nop
    ctx->pc = 0x2cb17cu;
    // NOP
label_2cb180:
    // 0x2cb180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cb184:
    // 0x2cb184: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cb184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cb188:
    // 0x2cb188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cb188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cb18c:
    // 0x2cb18c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cb190:
    // 0x2cb190: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cb190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cb194:
    // 0x2cb194: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_2cb198:
    if (ctx->pc == 0x2CB198u) {
        ctx->pc = 0x2CB198u;
            // 0x2cb198: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB19Cu;
        goto label_2cb19c;
    }
    ctx->pc = 0x2CB194u;
    {
        const bool branch_taken_0x2cb194 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB194u;
            // 0x2cb198: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb194) {
            ctx->pc = 0x2CB20Cu;
            goto label_2cb20c;
        }
    }
    ctx->pc = 0x2CB19Cu;
label_2cb19c:
    // 0x2cb19c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cb1a0:
    // 0x2cb1a0: 0x24426590  addiu       $v0, $v0, 0x6590
    ctx->pc = 0x2cb1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26000));
label_2cb1a4:
    // 0x2cb1a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cb1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2cb1a8:
    // 0x2cb1a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cb1a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cb1ac:
    // 0x2cb1ac: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2cb1acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2cb1b0:
    // 0x2cb1b0: 0x320f809  jalr        $t9
label_2cb1b4:
    if (ctx->pc == 0x2CB1B4u) {
        ctx->pc = 0x2CB1B8u;
        goto label_2cb1b8;
    }
    ctx->pc = 0x2CB1B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CB1B8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CB1B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CB1B8u; }
            if (ctx->pc != 0x2CB1B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2CB1B8u;
label_2cb1b8:
    // 0x2cb1b8: 0x26220088  addiu       $v0, $s1, 0x88
    ctx->pc = 0x2cb1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
label_2cb1bc:
    // 0x2cb1bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2cb1c0:
    if (ctx->pc == 0x2CB1C0u) {
        ctx->pc = 0x2CB1C4u;
        goto label_2cb1c4;
    }
    ctx->pc = 0x2CB1BCu;
    {
        const bool branch_taken_0x2cb1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb1bc) {
            ctx->pc = 0x2CB1D0u;
            goto label_2cb1d0;
        }
    }
    ctx->pc = 0x2CB1C4u;
label_2cb1c4:
    // 0x2cb1c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cb1c8:
    // 0x2cb1c8: 0x244201f8  addiu       $v0, $v0, 0x1F8
    ctx->pc = 0x2cb1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 504));
label_2cb1cc:
    // 0x2cb1cc: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x2cb1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_2cb1d0:
    // 0x2cb1d0: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2cb1d4:
    if (ctx->pc == 0x2CB1D4u) {
        ctx->pc = 0x2CB1D4u;
            // 0x2cb1d4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2CB1D8u;
        goto label_2cb1d8;
    }
    ctx->pc = 0x2CB1D0u;
    {
        const bool branch_taken_0x2cb1d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb1d0) {
            ctx->pc = 0x2CB1D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB1D0u;
            // 0x2cb1d4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB1F8u;
            goto label_2cb1f8;
        }
    }
    ctx->pc = 0x2CB1D8u;
label_2cb1d8:
    // 0x2cb1d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cb1dc:
    // 0x2cb1dc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2cb1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2cb1e0:
    // 0x2cb1e0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2cb1e4:
    if (ctx->pc == 0x2CB1E4u) {
        ctx->pc = 0x2CB1E4u;
            // 0x2cb1e4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2CB1E8u;
        goto label_2cb1e8;
    }
    ctx->pc = 0x2CB1E0u;
    {
        const bool branch_taken_0x2cb1e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB1E0u;
            // 0x2cb1e4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1e0) {
            ctx->pc = 0x2CB1F4u;
            goto label_2cb1f4;
        }
    }
    ctx->pc = 0x2CB1E8u;
label_2cb1e8:
    // 0x2cb1e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cb1ec:
    // 0x2cb1ec: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2cb1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2cb1f0:
    // 0x2cb1f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cb1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2cb1f4:
    // 0x2cb1f4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2cb1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2cb1f8:
    // 0x2cb1f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cb1f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cb1fc:
    // 0x2cb1fc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cb200:
    if (ctx->pc == 0x2CB200u) {
        ctx->pc = 0x2CB200u;
            // 0x2cb200: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB204u;
        goto label_2cb204;
    }
    ctx->pc = 0x2CB1FCu;
    {
        const bool branch_taken_0x2cb1fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cb1fc) {
            ctx->pc = 0x2CB200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB1FCu;
            // 0x2cb200: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB210u;
            goto label_2cb210;
        }
    }
    ctx->pc = 0x2CB204u;
label_2cb204:
    // 0x2cb204: 0xc0400a8  jal         func_1002A0
label_2cb208:
    if (ctx->pc == 0x2CB208u) {
        ctx->pc = 0x2CB208u;
            // 0x2cb208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB20Cu;
        goto label_2cb20c;
    }
    ctx->pc = 0x2CB204u;
    SET_GPR_U32(ctx, 31, 0x2CB20Cu);
    ctx->pc = 0x2CB208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB204u;
            // 0x2cb208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB20Cu; }
        if (ctx->pc != 0x2CB20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB20Cu; }
        if (ctx->pc != 0x2CB20Cu) { return; }
    }
    ctx->pc = 0x2CB20Cu;
label_2cb20c:
    // 0x2cb20c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cb20cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cb210:
    // 0x2cb210: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cb214:
    // 0x2cb214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cb214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb218:
    // 0x2cb218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cb21c:
    // 0x2cb21c: 0x3e00008  jr          $ra
label_2cb220:
    if (ctx->pc == 0x2CB220u) {
        ctx->pc = 0x2CB220u;
            // 0x2cb220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CB224u;
        goto label_2cb224;
    }
    ctx->pc = 0x2CB21Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB21Cu;
            // 0x2cb220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB224u;
label_2cb224:
    // 0x2cb224: 0x0  nop
    ctx->pc = 0x2cb224u;
    // NOP
label_2cb228:
    // 0x2cb228: 0x0  nop
    ctx->pc = 0x2cb228u;
    // NOP
label_2cb22c:
    // 0x2cb22c: 0x0  nop
    ctx->pc = 0x2cb22cu;
    // NOP
label_2cb230:
    // 0x2cb230: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cb230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2cb234:
    // 0x2cb234: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cb238:
    // 0x2cb238: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2cb238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2cb23c:
    // 0x2cb23c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cb23cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cb240:
    // 0x2cb240: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2cb240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2cb244:
    // 0x2cb244: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cb244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cb248:
    // 0x2cb248: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cb248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2cb24c:
    // 0x2cb24c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2cb24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2cb250:
    // 0x2cb250: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cb250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2cb254:
    // 0x2cb254: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2cb254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_2cb258:
    // 0x2cb258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cb258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cb25c:
    // 0x2cb25c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cb25cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cb260:
    // 0x2cb260: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cb264:
    // 0x2cb264: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2cb264u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2cb268:
    // 0x2cb268: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2cb268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2cb26c:
    // 0x2cb26c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2cb26cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2cb270:
    // 0x2cb270: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2cb270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2cb274:
    // 0x2cb274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cb274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cb278:
    // 0x2cb278: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2cb278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_2cb27c:
    // 0x2cb27c: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2cb27cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_2cb280:
    // 0x2cb280: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2cb280u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_2cb284:
    // 0x2cb284: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2cb284u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_2cb288:
    // 0x2cb288: 0xc04cbd8  jal         func_132F60
label_2cb28c:
    if (ctx->pc == 0x2CB28Cu) {
        ctx->pc = 0x2CB28Cu;
            // 0x2cb28c: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x2CB290u;
        goto label_2cb290;
    }
    ctx->pc = 0x2CB288u;
    SET_GPR_U32(ctx, 31, 0x2CB290u);
    ctx->pc = 0x2CB28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB288u;
            // 0x2cb28c: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB290u; }
        if (ctx->pc != 0x2CB290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB290u; }
        if (ctx->pc != 0x2CB290u) { return; }
    }
    ctx->pc = 0x2CB290u;
label_2cb290:
    // 0x2cb290: 0xc04c968  jal         func_1325A0
label_2cb294:
    if (ctx->pc == 0x2CB294u) {
        ctx->pc = 0x2CB294u;
            // 0x2cb294: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x2CB298u;
        goto label_2cb298;
    }
    ctx->pc = 0x2CB290u;
    SET_GPR_U32(ctx, 31, 0x2CB298u);
    ctx->pc = 0x2CB294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB290u;
            // 0x2cb294: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB298u; }
        if (ctx->pc != 0x2CB298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB298u; }
        if (ctx->pc != 0x2CB298u) { return; }
    }
    ctx->pc = 0x2CB298u;
label_2cb298:
    // 0x2cb298: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cb298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2cb29c:
    // 0x2cb29c: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x2cb29cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_2cb2a0:
    // 0x2cb2a0: 0x8c480e80  lw          $t0, 0xE80($v0)
    ctx->pc = 0x2cb2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2cb2a4:
    // 0x2cb2a4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cb2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cb2a8:
    // 0x2cb2a8: 0x24e7c560  addiu       $a3, $a3, -0x3AA0
    ctx->pc = 0x2cb2a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952288));
label_2cb2ac:
    // 0x2cb2ac: 0x24636590  addiu       $v1, $v1, 0x6590
    ctx->pc = 0x2cb2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26000));
label_2cb2b0:
    // 0x2cb2b0: 0x2664008c  addiu       $a0, $s3, 0x8C
    ctx->pc = 0x2cb2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
label_2cb2b4:
    // 0x2cb2b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cb2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cb2b8:
    // 0x2cb2b8: 0x8d080788  lw          $t0, 0x788($t0)
    ctx->pc = 0x2cb2b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1928)));
label_2cb2bc:
    // 0x2cb2bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cb2c0:
    // 0x2cb2c0: 0x244201f8  addiu       $v0, $v0, 0x1F8
    ctx->pc = 0x2cb2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 504));
label_2cb2c4:
    // 0x2cb2c4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2cb2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2cb2c8:
    // 0x2cb2c8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2cb2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2cb2cc:
    // 0x2cb2cc: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x2cb2ccu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_2cb2d0:
    // 0x2cb2d0: 0xa267004d  sb          $a3, 0x4D($s3)
    ctx->pc = 0x2cb2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 77), (uint8_t)GPR_U32(ctx, 7));
label_2cb2d4:
    // 0x2cb2d4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2cb2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2cb2d8:
    // 0x2cb2d8: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2cb2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_2cb2dc:
    // 0x2cb2dc: 0xa2600078  sb          $zero, 0x78($s3)
    ctx->pc = 0x2cb2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 120), (uint8_t)GPR_U32(ctx, 0));
label_2cb2e0:
    // 0x2cb2e0: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2cb2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_2cb2e4:
    // 0x2cb2e4: 0xae620088  sw          $v0, 0x88($s3)
    ctx->pc = 0x2cb2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 2));
label_2cb2e8:
    // 0x2cb2e8: 0xc04a576  jal         func_1295D8
label_2cb2ec:
    if (ctx->pc == 0x2CB2ECu) {
        ctx->pc = 0x2CB2ECu;
            // 0x2cb2ec: 0xa6600094  sh          $zero, 0x94($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 148), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2CB2F0u;
        goto label_2cb2f0;
    }
    ctx->pc = 0x2CB2E8u;
    SET_GPR_U32(ctx, 31, 0x2CB2F0u);
    ctx->pc = 0x2CB2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB2E8u;
            // 0x2cb2ec: 0xa6600094  sh          $zero, 0x94($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 148), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB2F0u; }
        if (ctx->pc != 0x2CB2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB2F0u; }
        if (ctx->pc != 0x2CB2F0u) { return; }
    }
    ctx->pc = 0x2CB2F0u;
label_2cb2f0:
    // 0x2cb2f0: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x2cb2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_2cb2f4:
    // 0x2cb2f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cb2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb2f8:
    // 0x2cb2f8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2cb2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2cb2fc:
    // 0x2cb2fc: 0xc04a576  jal         func_1295D8
label_2cb300:
    if (ctx->pc == 0x2CB300u) {
        ctx->pc = 0x2CB300u;
            // 0x2cb300: 0xae60009c  sw          $zero, 0x9C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x2CB304u;
        goto label_2cb304;
    }
    ctx->pc = 0x2CB2FCu;
    SET_GPR_U32(ctx, 31, 0x2CB304u);
    ctx->pc = 0x2CB300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB2FCu;
            // 0x2cb300: 0xae60009c  sw          $zero, 0x9C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB304u; }
        if (ctx->pc != 0x2CB304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB304u; }
        if (ctx->pc != 0x2CB304u) { return; }
    }
    ctx->pc = 0x2CB304u;
label_2cb304:
    // 0x2cb304: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cb304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2cb308:
    // 0x2cb308: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2cb308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2cb30c:
    // 0x2cb30c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2cb30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2cb310:
    // 0x2cb310: 0x2672008c  addiu       $s2, $s3, 0x8C
    ctx->pc = 0x2cb310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
label_2cb314:
    // 0x2cb314: 0x8c7089e8  lw          $s0, -0x7618($v1)
    ctx->pc = 0x2cb314u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_2cb318:
    // 0x2cb318: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cb318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb31c:
    // 0x2cb31c: 0x8c540780  lw          $s4, 0x780($v0)
    ctx->pc = 0x2cb31cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1920)));
label_2cb320:
    // 0x2cb320: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x2cb320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2cb324:
    // 0x2cb324: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2cb324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
label_2cb328:
    // 0x2cb328: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2cb328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2cb32c:
    // 0x2cb32c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2cb32cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2cb330:
    // 0x2cb330: 0x320f809  jalr        $t9
label_2cb334:
    if (ctx->pc == 0x2CB334u) {
        ctx->pc = 0x2CB334u;
            // 0x2cb334: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x2CB338u;
        goto label_2cb338;
    }
    ctx->pc = 0x2CB330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CB338u);
        ctx->pc = 0x2CB334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB330u;
            // 0x2cb334: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CB338u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CB338u; }
            if (ctx->pc != 0x2CB338u) { return; }
        }
        }
    }
    ctx->pc = 0x2CB338u;
label_2cb338:
    // 0x2cb338: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x2cb338u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_2cb33c:
    // 0x2cb33c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cb33cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2cb340:
    // 0x2cb340: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x2cb340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2cb344:
    // 0x2cb344: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_2cb348:
    if (ctx->pc == 0x2CB348u) {
        ctx->pc = 0x2CB348u;
            // 0x2cb348: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x2CB34Cu;
        goto label_2cb34c;
    }
    ctx->pc = 0x2CB344u;
    {
        const bool branch_taken_0x2cb344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB344u;
            // 0x2cb348: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb344) {
            ctx->pc = 0x2CB320u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cb320;
        }
    }
    ctx->pc = 0x2CB34Cu;
label_2cb34c:
    // 0x2cb34c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2cb34cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cb350:
    // 0x2cb350: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2cb350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2cb354:
    // 0x2cb354: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2cb354u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cb358:
    // 0x2cb358: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cb358u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb35c:
    // 0x2cb35c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cb35cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cb360:
    // 0x2cb360: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cb360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb364:
    // 0x2cb364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cb368:
    // 0x2cb368: 0x3e00008  jr          $ra
label_2cb36c:
    if (ctx->pc == 0x2CB36Cu) {
        ctx->pc = 0x2CB36Cu;
            // 0x2cb36c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2CB370u;
        goto label_2cb370;
    }
    ctx->pc = 0x2CB368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB368u;
            // 0x2cb36c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB370u;
label_2cb370:
    // 0x2cb370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cb370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cb374:
    // 0x2cb374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cb374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2cb378:
    // 0x2cb378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cb37c:
    // 0x2cb37c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb37cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cb380:
    // 0x2cb380: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_2cb384:
    if (ctx->pc == 0x2CB384u) {
        ctx->pc = 0x2CB384u;
            // 0x2cb384: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CB388u;
        goto label_2cb388;
    }
    ctx->pc = 0x2CB380u;
    {
        const bool branch_taken_0x2cb380 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb380) {
            ctx->pc = 0x2CB384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB380u;
            // 0x2cb384: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB3ACu;
            goto label_2cb3ac;
        }
    }
    ctx->pc = 0x2CB388u;
label_2cb388:
    // 0x2cb388: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2cb388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2cb38c:
    // 0x2cb38c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cb38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cb390:
    // 0x2cb390: 0x246301f8  addiu       $v1, $v1, 0x1F8
    ctx->pc = 0x2cb390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 504));
label_2cb394:
    // 0x2cb394: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cb394u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cb398:
    // 0x2cb398: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2cb39c:
    if (ctx->pc == 0x2CB39Cu) {
        ctx->pc = 0x2CB39Cu;
            // 0x2cb39c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2CB3A0u;
        goto label_2cb3a0;
    }
    ctx->pc = 0x2CB398u;
    {
        const bool branch_taken_0x2cb398 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CB39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB398u;
            // 0x2cb39c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb398) {
            ctx->pc = 0x2CB3A8u;
            goto label_2cb3a8;
        }
    }
    ctx->pc = 0x2CB3A0u;
label_2cb3a0:
    // 0x2cb3a0: 0xc0400a8  jal         func_1002A0
label_2cb3a4:
    if (ctx->pc == 0x2CB3A4u) {
        ctx->pc = 0x2CB3A8u;
        goto label_2cb3a8;
    }
    ctx->pc = 0x2CB3A0u;
    SET_GPR_U32(ctx, 31, 0x2CB3A8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB3A8u; }
        if (ctx->pc != 0x2CB3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB3A8u; }
        if (ctx->pc != 0x2CB3A8u) { return; }
    }
    ctx->pc = 0x2CB3A8u;
label_2cb3a8:
    // 0x2cb3a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cb3a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb3ac:
    // 0x2cb3ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cb3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb3b0:
    // 0x2cb3b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb3b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cb3b4:
    // 0x2cb3b4: 0x3e00008  jr          $ra
label_2cb3b8:
    if (ctx->pc == 0x2CB3B8u) {
        ctx->pc = 0x2CB3B8u;
            // 0x2cb3b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2CB3BCu;
        goto label_2cb3bc;
    }
    ctx->pc = 0x2CB3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB3B4u;
            // 0x2cb3b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB3BCu;
label_2cb3bc:
    // 0x2cb3bc: 0x0  nop
    ctx->pc = 0x2cb3bcu;
    // NOP
}
